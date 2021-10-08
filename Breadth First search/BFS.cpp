#include <iostream>
#include <vector>
#include <queue>
using namespace std;

typedef vector<int> v_Int;

class Graph {
private:
	int V; //No of vertices
	vector <v_Int> adj_l; // vector containing adjacency list
public:
	Graph(int V);
	void addEdge(int fm, int to); //Add Edge from vertice v to vertice w
	void BFS(int s); //BFS traversal from source s
};

Graph::Graph(int v) {
	V = v;
	adj_l.assign(V, v_Int());
}

void Graph::addEdge(int fm, int to) {
	adj_l[fm].push_back(to);
}

void Graph::BFS(int s) {
	v_Int visited; //Create Visited LL
	visited.assign(V, 0); //Marks all vertices as unvisited
	queue<int> visitNext; //Create a queue

	//Mark current node as visited and enqueue it
	visited[s] = 1;
	visitNext.push(s);

	while (!visitNext.empty()) {
		//Dequeue vertex from queue and print it
		s = visitNext.front();
		cout << s << " ";
		visitNext.pop();

		//Get all adjacent vertices of dequeued vertex
		//If neighbour hasn't been visited, mark it visited then enqueue it
		for (int i = 0; i < adj_l[s].size(); i++) {
			int neighbour = adj_l[s][i];
			if (!visited[neighbour]) {
				visited[neighbour] = 1;
				visitNext.push(neighbour);
			}
		}
	}
}
 	
int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 4);
    g.addEdge(2, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 0) \n";
    g.BFS(0);

    Graph g1(4);
    g1.addEdge(0, 1);
    g1.addEdge(0, 2);
    g1.addEdge(1, 2);
    g1.addEdge(2, 0);
    g1.addEdge(2, 3);
    g1.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g1.BFS(2);
}