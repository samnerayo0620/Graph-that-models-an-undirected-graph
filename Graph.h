// NAME: Samuel Nerayo 
// FILE: Graph.h
// DESCRIPTION: Definition of the Graph class.

#ifndef GRAPH_H
#define GRAPH_H

#include "QueueInt.h"
#include "StackInt.h"

class Graph {

  public:
    // Constructor: load the graph from a file
    Graph(char *fileName);

    // Destructor
    ~Graph();

    // Display the adjacency matrix
    void display() const;

    // Display the depth first search from the given vertex
    void displayDFS(int vertex) const;

    // Display the breadth first search from the given vertex
    void displayBFS(int vertex) const;

    // Determine whether the graph is bipartite or not
    bool isBipartite() const;

  private:
    // TODO: Complete the private section of the class.
    int n; // storing the vertices
    int** adjMatrix; // storing the edges

};

#endif
