#include <bits/stdc++.h>
using namespace std;

const int POSITIVE_INFINITY= 999999;
const int NEGATIVE_INFINITY= -999999;

// class Edge {
// private:
// 	int weight, from, to;
// public:
// 	Edge(int from, int to, int weight) {
// 		this->from = from;
// 		this->to = to;
// 		this->weight = weight;
// 	}

// };

class nodeWeightPair {
private:
	int _node;
	int _weight;

public:
	nodeWeightPair() { _node = -1; _weight = -1; }; // a constructor that shouldn't be used.
	nodeWeightPair(int n, int w) { _node = n; _weight = w; };
	nodeWeightPair(const nodeWeightPair& nwp) { _node = nwp._node; _weight = nwp._weight; };
	int nodeIndex() { return _node; };
	int setWeight(int w) {_weight = w;};
	int weight() { return _weight; };
	bool operator>(const nodeWeightPair& nwp) { return _weight > nwp._weight;};
	bool operator<(const nodeWeightPair& nwp) { return _weight < nwp._weight; };
	bool operator == (const nodeWeightPair& nwp) { return _node == nwp._node; };
	friend ostream& operator<<(ostream&, const nodeWeightPair&);
};

typedef vector<nodeWeightPair> vEdge;

class Graph {
private:
	vector<vEdge> _al; // adjaceny list
	vector<int> dist; //Create Array to store shortest distances to every node
	int _nv; // number of nodes

public: 
	Graph(int n);
	void addEdge(int s, int d, int w);
	void BellmanFord(int src);
	int printDist(int i);
	int get_nv();
	//int shortestDistance(int s, int d); //Dijkstra's
};

Graph::Graph(int n)
{
	_al.assign(n, vEdge());
	//edges.assign()
	_nv = n;
}

void Graph::addEdge(int s, int d, int w)
{
	_al[s].push_back(nodeWeightPair(d, w));
	//edges.push_back(Edge(s, d, w));
}

void Graph::BellmanFord(int src) {
	//Initialisation stage: set dist of s to 0, dist to other nodes to infinity
	dist.assign(_nv, POSITIVE_INFINITY); 
	dist[src] = 0; 

 	// Only in the worst case does it take V-1 iterations for the Bellman-Ford
    // algorithm to complete. Another stopping condition is when we're unable to
    // relax an edge, this means we have reached the optimal solution early.
	bool relaxedanEdge = true;

	//Relax all edges for each vertex
	for (int i = 0; i < (_nv - 1); i++) {
		// if (!relaxedanEdge) 
		// 	break;
		relaxedanEdge = false;
		for (int j = 0; j < _nv; j++) {
			for (int k = 0; k < _al[j].size(); i++) {
				if (dist[j] + _al[j][k].weight() < dist[k]) {
					dist[k] = dist[j] + _al[j][k].weight();
					_al[j][k].setWeight(dist[k]);
					relaxedanEdge = true;
				}
			}
		}
	}

	// Run algorithm a second time to detect which nodes are part
    // of a negative cycle. A negative cycle has occurred if we
    // can find a better path beyond the optimal solution.
    relaxedanEdge = true;
    for (int i = 0; i < (_nv - 1); i++) {
    	// if (!relaxedanEdge)
    	// 	break;
		relaxedanEdge = false;
		for (int j = 0; j < _nv; j++) {
			for (int k = 0; k < _al[j].size(); i++) {
				if (dist[j] + _al[j][k].weight() < dist[k]) {
					dist[k] = NEGATIVE_INFINITY;
					relaxedanEdge = true;
				}
			}
		}
	}
}

int Graph::printDist(int i) {
	return dist[i];
}

int Graph::get_nv() {
	return _nv;
}

int main() {
	Graph g(7);
	g.addEdge(0, 1, 1);
	g.addEdge(1, 2, 1);
	g.addEdge(2, 4, 1);
	g.addEdge(4, 3, -3);
	g.addEdge(3, 2, 1);
	g.addEdge(1, 5, 4);
	g.addEdge(1, 6, 4);
	g.addEdge(5, 6, 5);
	g.addEdge(6, 7, 4);
	g.addEdge(5, 7, 3);

	cout << "Hi";

	g.BellmanFord(0);

	for (int i = 0; i < g.get_nv(); i++) {
		cout << "The distance from node 0 to node " << i << " is " << g.printDist(i) << "\n";
	}
}