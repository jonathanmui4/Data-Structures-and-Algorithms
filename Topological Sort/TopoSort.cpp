#include <iostream>
#include <list>
#include <stack>
using namespace std;

class Graph {
private:
	int V; //No of vertices
	list<int>* adj_l; //Pointer to array containing adjacency list
	void _topSort(int v, bool visited[], stack<int>& Stack);

public:
	Graph(int v); //Constructor
	void addEdge(int s, int d);
	void topSort();
};

Graph::Graph(int v) {
	adj_l= new list<int>[v];
	V = v;
}

void Graph::addEdge(int s, int d) {
	adj_l[s].push_back(d); //Add d to S's adjacency list
}

//DFS in recursive topo sort function
void Graph::_topSort(int v, bool visited[], stack<int>& Stack) {
	//Mark current visited node as true
	visited[v] = true;

	//Recure for all vertices adjacent to current node v
    list<int>::iterator i;
    for (i = adj_l[v].begin(); i != adj_l[v].end(); i++){
        if (!visited[*i]) {
            _topSort(*i, visited, Stack);
        }
    }
	
	//Push current vertex to stack which stores result
	Stack.push(v);
}

void Graph::topSort() {
	stack<int> Stack;

	//Mark all vertices as not visited
	bool* visited = new bool[V];
	for (int i = 0; i < V; i++) {
		visited[i] = false;
	}

	//Store topological order in stack
	for (int i = 0; i < V; i++) {
		if (visited[i] == false) {
			_topSort(i, visited, Stack);
		}
	}

	//Print Stack aka Topological order
	while (!Stack.empty()) {
		cout << Stack.top() << " ";
		Stack.pop();
	}
	cout << "\n";
}

int main() {
	// Create a graph given in the above diagram
    Graph g(6);
    g.addEdge(5, 2);
    g.addEdge(5, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(2, 3);
    g.addEdge(3, 1);
  
    cout << "Following is a Topological Sort of the given graph n: ";
    g.topSort();
  
    return 0;
}