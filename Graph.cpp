// NAME: Samuel Nerayo
// FILE: Graph.cpp
// DESCRIPTION: Implementation of the Graph class.

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;


#include "Graph.h"
#include "QueueInt.h"
#include "StackInt.h"

// Constructor: load the graph from a file
Graph::Graph(char *filename)
{
    ifstream myfile;
    myfile.open (filename); // open file named filename
    if ( myfile.is_open() ) { // check if the file is open
        cout<<"\n"<<filename<<":"<<endl; // prints out the name of the file
        string line;
        getline(myfile, line); // store and get the next line
        n = stoi(line); // convert the  into int to access the vertix num
        adjMatrix = new int*[n]; // matrix initialized
        for(int i = 0; i < n; i++){
            adjMatrix[i] = new int[n];
            for(int j = 0; j < n; j++){
                adjMatrix[i][j] = 0; // make element in the metrix equal to zero
            }
        }
        while (getline(myfile, line)) { // keep storing and going to the next line
            int a = stoi(line.substr(0, 1));
            int b = stoi(line.substr(2,1));
            adjMatrix[b][a] = 1;
            adjMatrix[a][b] = 1;
        }
    }
    else {
        cout << "Couldn't open file\n";
    }
}

// Destructor
Graph::~Graph()
{
    if(!adjMatrix) { // if adjmatrix is not nullptr
        for(int i = 0; i < n; i++ ){
            delete [] adjMatrix[i]; // delete the adjMatrix from i through n
        }
        delete [] adjMatrix;
    }
}

// Display the adjacency matrix
void Graph::display() const
{
    //using nested for loop to display columns and row of the matrix
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout<< adjMatrix[j][i] <<" ";
        }
        cout<<endl;
    }
}

// Displays the depth first search starting at the given vertex
void Graph::displayDFS(int vertex) const {
    // initially all the vertices are unvisited
    bool *visited = new bool[n]; // array keep track of visits
    for (int i = 0; i < n; i++) {
        visited[i] = false;
    }
    StackInt stack;
    cout << "DFS at vertex " << vertex << ": " ;
    stack.push(vertex);
    while (!stack.isEmpty()) {
        vertex = stack.pop();
        if (!visited[vertex]) {
            visited[vertex] = true;
            cout << vertex << " ";
           int i = n - 1 ;
           while(i >= 0 )
            {
                if ((adjMatrix[vertex][i] == 1) && (!visited[i])) {

                    stack.push(i);
                    visited[vertex] = true;
                }
                i--;
            }
        }
    }
    cout << endl;
    delete[] visited;
}
// Perform breadth first search starting at the given vertex
void Graph::displayBFS(int vertex) const {
    bool visited[n];
    int i = 0;
    while (i < n) {
        visited[i] = false;
        i++;
    }
    QueueInt queue;
    cout << "BSF at vertex " << vertex << ": ";
    visited[vertex] = true;
    cout << vertex << " ";
    queue.enqueue(vertex);
    while (!queue.isEmpty()) {
        vertex = queue.dequeue();
        for (int i = 0; i < n; i++) {
            if ((adjMatrix[vertex][i] == 1) && (!visited[i])) {
                visited[i] = true;
                queue.enqueue(i);
                cout << i << " ";
            }
        }
    }
    cout<<endl;
}
// Determine whether the graph is bipartite or not
bool Graph::isBipartite() const
{
    QueueInt queue;
    int temp;
    // Create a color array to store colors
    int color[n];
    for (int i = 0; i < n; ++i)
        color[i] = -1;

    // Assign first color to 0
    color[0] = 1;
    queue.enqueue(0);
    while(!queue.isEmpty())
    {
         temp = queue.dequeue();
        if(adjMatrix[temp][temp] == 1)
            return false;
        for(int i = 0; i < n; i++)
        {
            if(adjMatrix[i][temp] == 1 && color[i] == -1)
            {
                color[i] = 1 - color[temp];
                queue.enqueue(i);
            } else if(adjMatrix[i][temp] == 1 && color[i] == color[temp])
            {
                return false;
            }
        }
    }
    return true;
}
