//
//	COS 221 Homework 10
//	Author: Derek Haas
//	Date: 12/14/18
//	Description: Find the shortest path between two vertices of a connected graph
//

#include <iostream>
#include "Graph.h"
#include "Tree.h"
#include "Edge.h"

using namespace std;

int main() {

	int i;
	int start, stop;
	vector<int> vertices;
	vector<int> shortPath;
	
	// Create 6 vertices
	for(i = 0; i < 6; i++) vertices.push_back(i);
 
	// Create edges for the 6  vertices 
	int edges[][2] = {

		{0,1}, {0,2},			// Vertex 0
		{1,0}, {1,3},			// Vertex 1
		{2,0}, {2,3}, {2,4},		// Vertex 2
		{3,1}, {3,2}, {3,4}, {3,5},	// Vertex 3
		{4,2}, {4,3}, {4,5}, 		// Vertex 4
		{5,3}, {5,4}			// Vertex 5

	};
	
	// Print to console the vertices and the edges	
	cout << "The number of vertices is 6 (0-5)" << endl;
	cout << "Vertex 0: (0,1) (0,2)" << endl;
	cout << "Vertex 1: (1,0) (1,3)" << endl;
	cout << "Vertex 2: (2,0) (2,3) (2,4)" << endl;
	cout << "Vertex 3: (3,1) (3,2) (3,4) (3,5)" << endl;
	cout << "Vertex 4: (4,2) (4,3) (4,5)" << endl;
	cout << "Vertex 5: (5,3) (5,4)" << endl;

	// Create a graph: enter vertices, edges, and number of edges
	Graph<int> shortGraph(vertices, edges, 16);

	// Prompt User to enter the source and destination nodes
	cout << "Enter source node: " << endl;
	cin >> start;
	cout << "Enter destination node: " << endl;
	cin >> stop;
	cout << endl;

	// Creates a minimal spanning tree of the graph with graph made from above
	Tree shortTree = shortGraph.bfs(start);

	// Make the path into vertices to get the destination
	shortPath = shortTree.getPath(stop);

	// Print to the console the shortest path between the source and destination
	cout << "The Shortest Path between source and destination is: " << endl;
	
	for(i = shortPath.size() - 1; i >= 0; i--) {
		
		cout << shortPath.at(i) << "";
	
	}

	cout << endl;
	
	return 0;

}
