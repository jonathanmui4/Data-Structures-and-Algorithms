#pragma once

/*
* Implementation of graph using adjacency list
*/

#include <iostream>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

class Edge
{
private:
	int destinationID;
	int weight;

public:
	Edge(int destID, int weight) { this->destinationID = destID; this->weight = weight; }
	int getDestinationID() { return destinationID; }
	int getWeight() { return weight; }
};

class Node
{
private:
	int id;
	list<Edge> edges;

public:
	Node() { this->id = 0; }
	Node(int id) { this->id = id; }
	int getId() { return id; }
	void setId(int newId) { this->id = newId; }
	list<Edge> getEdges() { return edges; }
	void addEdge(Edge edge);
	void printEdges();
};

class Graph 
{
private:
	vector<Node> nodes;

public:
	void addNode(Node newNode);
	void addEdge(int srcNodeId, int destNodeId, int weight);
	bool checkNodeExists(int id);
	bool checkEdgeExists(int srcNode, int destNode);
	Node getNodeByID(int nodeID);
	void printGraph();
};