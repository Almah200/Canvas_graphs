#include <stdio.h>
#include <stdlib.h>

// Function to initialize the adjacency matrix
void initializeMatrix(int **adjMatrix, int vertices) {
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adjMatrix[i][j] = 0; // Initialize with 0 (no edge)
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

int main() {
    int vertices, edges;
    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    int **adjMatrix = (int **)malloc(vertices * sizeof(int *));
    for (int i = 0; i < vertices; i++) {
        adjMatrix[i] = (int *)malloc(vertices * sizeof(int));
    }

    initializeMatrix(adjMatrix, vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (format: v1 v2):\n");
    for (int i = 0; i < edges; i++) {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        adjMatrix[v1][v2] = 1; // Assuming an undirected graph
        adjMatrix[v2][v1] = 1; // Assuming an undirected graph
    }

    printf("Adjacency matrix:\n");
    displayMatrix(adjMatrix, vertices);

    // Free allocated memory
    for (int i = 0; i < vertices; i++) {
        free(adjMatrix[i]);
    }
    free(adjMatrix);

    return 0;
}
