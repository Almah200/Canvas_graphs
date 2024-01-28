#include <stdio.h>
#include <stdlib.h>

void initializeMatrix(int **matrix, int vertices) {
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            matrix[i][j] = 0;
        }
    }
}

void addEdge(int **matrix, int v1, int v2) {
    f (v1 >= 0 && v1 < vertices && v2 >= 0 && v2 < vertices) {
        matrix[v1][v2] = 1;
        matrix[v2][v1] = 1;
    } else {
        printf("Invalid vertices %d and %d\n", v1, v2);
    }
}

void displayMatrix(int **matrix, int vertices) {
    for (int i = 0; i < vertices; ++i) {
        for (int j = 0; j < vertices; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void deleteGraph(int **matrix, int vertices) {
    for (int i = 0; i < vertices; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int vertices, edges;

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);

    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    int **adjMatrix = (int **)malloc(vertices * sizeof(int *));
    for (int i = 0; i < vertices; ++i) {
        adjMatrix[i] = (int *)malloc(vertices * sizeof(int));
    }

    initializeMatrix(adjMatrix, vertices);

    printf("Enter the edges (format: v1 v2):\n");
    for (int i = 0; i < edges; ++i) {
        int v1, v2;
        scanf("%d %d", &v1, &v2);
        addEdge(adjMatrix, v1, v2);
    }

    printf("Adjacency matrix:\n");
    displayMatrix(adjMatrix, vertices);

    deleteGraph(adjMatrix, vertices);

    return 0;
}
