#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Graph structure
typedef struct Graph {
    int vertices;
    int** adjacencyMatrix;
} Graph;

// Function to initialize the adjacency matrix
void initializeMatrix(int **adjMatrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adjMatrix[i][j] = 0;
        }
    }
}

// Function to display the adjacency matrix
void displayMatrix(int **adjMatrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", adjMatrix[i][j]);
        }
        printf("\n");
    }
}

// Function to delete the graph and free memory
void deleteGraph(Graph* graph) {
    // Free allocated memory for each row
    for (int i = 0; i < graph->vertices; i++) {
        free(graph->adjacencyMatrix[i]);
    }
    // Free the array of pointers and the graph structure
    free(graph->adjacencyMatrix);
    free(graph);
}

int main() {
    int vertices;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    // Create a graph structure
    Graph* myGraph = (Graph*)malloc(sizeof(Graph));
    myGraph->vertices = vertices;

    // Allocate memory for the adjacency matrix
    myGraph->adjacencyMatrix = (int**)malloc(vertices * sizeof(int*));
    for (int i = 0; i < vertices; i++) {
        myGraph->adjacencyMatrix[i] = (int*)malloc(vertices * sizeof(int));
    }

    initializeMatrix(myGraph->adjacencyMatrix, vertices);

    printf("Enter the edges (format: v1 v2). Enter -1 -1 to end:\n");
    int v1, v2;
    while (1) {
        scanf("%d %d", &v1, &v2);
        if (v1 == -1 || v2 == -1) {
            break;
        }
        myGraph->adjacencyMatrix[v1][v2] = 1;
        myGraph->adjacencyMatrix[v2][v1] = 1;
    }

    printf("Adjacency matrix:\n");
    displayMatrix(myGraph->adjacencyMatrix, vertices);

    // Deleting the graph and freeing memory
    deleteGraph(myGraph);

    return 0;
}
