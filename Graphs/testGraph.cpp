#include "Graph.h"

int main() {
	Graph g;

	cout << "Program started running..." << endl;

	for (int i = 0; i < 4; i++) {
		g.addNode(Node(i + 1));
	}

	g.addEdge(1, 2, 4);
	g.addEdge(1, 4, 5);
	g.addEdge(3, 2, -10);
	g.addEdge(4, 3, 3);

	g.printGraph();
}