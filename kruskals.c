#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int parent[MAX];  // Array to represent disjoint sets
int rank[MAX];    // Rank array to optimize union by rank

// Function to find the representative (or root) of a set
int find(int i) {
    if (parent[i] == -1) {
        return i;  // If i is its own parent, return i
    } else {
        parent[i] = find(parent[i]);  // Path compression
        return parent[i];
    }
}

// Function to perform union of two sets
int uni(int i, int j) {
    int root_i = find(i);
    int root_j = find(j);

    if (root_i != root_j) {
        // Union by rank: attach smaller tree under larger tree
        if (rank[root_i] > rank[root_j]) {
            parent[root_j] = root_i;
        } else if (rank[root_i] < rank[root_j]) {
            parent[root_i] = root_j;
        } else {
            parent[root_j] = root_i;
            rank[root_i]++;
        }
        return 1;  // Successful union
    }
    return 0;  // No union performed (they are already in the same set)
}

int main() {
    int vertex_count = 0;
    int row, column;
    int cost_matrix[MAX][MAX];
    int edge_count = 0, count = 1;
    int sum_cost = 0, min_cost;
    int row_no, column_no, edge1, edge2;

    // Initialize parent and rank arrays
    for (int i = 0; i < MAX; i++) {
        parent[i] = -1;  // Initially, all nodes are their own parent
        rank[i] = 0;     // Initially, all trees have rank 0
    }

    // Input the number of vertices
    printf("Implementation of Kruskal's algorithm\n\n");
    printf("Total number of vertices: ");
    scanf("%d", &vertex_count);

    // Input the edge cost matrix
    printf("Enter the adjacency matrix (enter 0 for no edge, non-zero for edge weight):\n");
    for (row = 0; row < vertex_count; row++) {
        for (column = 0; column < vertex_count; column++) {
            scanf("%d", &cost_matrix[row][column]);
            if (cost_matrix[row][column] == 0) {
                cost_matrix[row][column] = 999;  // No edge between these vertices
            }
        }
    }

    // Kruskal's Algorithm to find the MST
    while (count <= vertex_count - 1) {
        min_cost = 999;
        // Find the minimum cost edge
        for (row = 0; row < vertex_count; row++) {
            for (column = 0; column < vertex_count; column++) {
                if (cost_matrix[row][column] < min_cost) {
                    min_cost = cost_matrix[row][column];
                    edge1 = row;
                    edge2 = column;
                }
            }
        }

        // Find the sets of the two vertices
        row_no = find(edge1);
        column_no = find(edge2);

        // If they are in different sets, include this edge in the MST
        if (uni(row_no, column_no)) {
            printf("Edge %d: (%d -> %d) with cost: %d\n", count++, edge1, edge2, min_cost);
            sum_cost += min_cost;
        }

        // After including the edge, mark it as processed by setting the cost to 999
        cost_matrix[edge1][edge2] = cost_matrix[edge2][edge1] = 999;
    }

    printf("\nMinimum cost of spanning tree: %d\n", sum_cost);

    return 0;
}

