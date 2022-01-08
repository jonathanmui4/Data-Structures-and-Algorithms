#include "Graph.h"

bool Graph::checkNodeExists(int id)
{
	for (int i = 0; i < nodes.size(); i++) {
		if (nodes.at(i).getId() == id) {
			return true;
		}
	}
	return false;
}

bool Graph::checkEdgeExists(int srcNode, int destNode)
{
	Node n = getNodeByID(srcNode);
	list<Edge> e;
	e = n.getEdges();
	for (auto i = e.begin(); i != e.end(); i++) {
		if (i->getDestinationID() == destNode) {
			return true;
		}
	}
	return false;
}

Node Graph::getNodeByID(int nodeID)
{
	Node temp;
	for (int i = 0; i < nodes.size(); i++) {
		temp = nodes.at(i);
		if (temp.getId() == nodeID) {
			return temp;
		}
	}
	return temp;
}

void Graph::addNode(Node newNode)
{
	bool isExistingNode = checkNodeExists(newNode.getId());

	if (!isExistingNode) {
		nodes.push_back(newNode);
	}
}

void Node::addEdge(Edge edge)
{
	edges.push_back(edge);
}

void Graph::addEdge(int srcNodeId, int destNodeId, int weight)
{
	// 1. Check if both nodes exist
	bool check1 = checkNodeExists(srcNodeId);
	bool check2 = checkNodeExists(destNodeId);

	//2. Check if edge already exists
	if (check1 && check2) {
		bool isExistingEdge = checkEdgeExists(srcNodeId, destNodeId);
		if (!isExistingEdge) {
			//3. Iterate thorough list of nodes and add edge to adjacency lists of src node and dest node
			for (int i = 0; i < nodes.size(); i++) {
				if (nodes.at(i).getId() == srcNodeId) {
					nodes.at(i).addEdge(Edge(destNodeId, weight));
				}
				else if (nodes.at(i).getId() == destNodeId) {
					nodes.at(i).addEdge(Edge(srcNodeId, weight));
				}
			}
		}
	}
}

void Graph::printGraph()
{
	for (int i = 0; i < nodes.size(); i++) {
		Node temp;
		temp = nodes.at(i);
		cout << "(" << temp.getId() << ") --> ";
		temp.printEdges();
	}
}

void Node::printEdges()
{
	cout << "[";
	for (auto i = edges.begin(); i != edges.end(); i++) {
		cout << i->getDestinationID() << " (" << i->getWeight() << "), ";
	}
	cout << "]" << endl;
}
