This project showcases the implementation of graph data structures in C, utilizing both adjacency matrix and adjacency list representations. The program demonstrates how to add edges, delete graphs, and perform searches using Breadth-First Search (BFS) and Depth-First Search (DFS) methods.

Files
task1.c:

Contains a program with node and graph structures.
Provides functions to add edges to the graph, print the graph in adjacency matrix representation, and delete the graph.
To Run:

gcc task1.c -o task1
./task1
Follow the prompts to input the number of vertices and edges.

task2.c:

Contains a function to create a fully connected graph based on the given number of vertices.
bfs.c:

Implements Breadth-First Search (BFS) to traverse through a graph.
To Run:

gcc bfs.c -o bfs
./bfs
Follow the prompts to input the adjacency matrix and the starting node. Visited nodes will be displayed.

dfs.c:

Implements Depth-First Search (DFS) to traverse through a graph.
To Run:

gcc dfs.c -o dfs
./dfs
Follow the prompts to input the adjacency matrix and the starting node. Visited nodes will be displayed.

How to Use
task1.c:

Compile the program using gcc task1.c -o task1.
Run the executable ./task1.
Follow the prompts to input the number of vertices and edges.
task2.c:

Include the necessary function calls in your program.
Ensure to call the function with the number of vertices to create a fully connected graph.

bfs.c and dfs.c:

Compile the respective program using gcc bfs.c -o bfs or gcc dfs.c -o dfs.
Run the executable ./bfs or ./dfs.
Follow the prompts to input the adjacency matrix and the starting node.
Contributing
Feel free to contribute to the project by submitting issues or pull requests. Please follow the coding standards and conventions mentioned in the respective files.

Contact Information
For any questions or concerns, contact Almarat Arnu at arnualmarat@gmail.com
