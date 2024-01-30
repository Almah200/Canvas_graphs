#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
} Node;

// Graph structure
typedef struct Graph {
    int vertices;
    int** adjacencyMatrix;
} Graph;

// Function to create a graph using an adjacency matrix
Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->vertices = vertices;

    int i, j;
    // Allocate memory for the adjacency matrix
    graph->adjacencyMatrix = (int**)malloc(vertices * sizeof(int*));
    for (i = 0; i < vertices; i++) {
        graph->adjacencyMatrix[i] = (int*)malloc(vertices * sizeof(int));
    }

    // Initialize the adjacency matrix with 0 (no edge)
    for (i = 0; i < vertices; i++) {
        for (j = 0; j < vertices; j++) {
            graph->adjacencyMatrix[i][j] = 0;
        }
    }

    return graph;
}

// Function to display the adjacency matrix
void displayGraph(Graph* graph) {
    int i, j;

    printf("Adjacency Matrix:\n");
    for (i = 0; i < graph->vertices; i++) {
        for (j = 0; j < graph->vertices; j++) {
            printf("%d ", graph->adjacencyMatrix[i][j]);
        }
        printf("\n");
    }
}

// Function to free the memory allocated for the graph
void freeGraph(Graph* graph) {
    for (int i = 0; i < graph->vertices; i++) {
        free(graph->adjacencyMatrix[i]);
    }
    free(graph->adjacencyMatrix);
    free(graph);
}

int main() {
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Create a graph
    Graph* myGraph = createGraph(vertices);

    // You can now use 'myGraph->adjacencyMatrix' to add edges or perform other operations

    // Display the adjacency matrix
    displayGraph(myGraph);

    // Free the allocated memory
    freeGraph(myGraph);

    return 0;
}
