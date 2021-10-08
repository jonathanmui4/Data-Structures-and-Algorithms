#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
private:
	vector<int> parent, rank, setSize;
	int numSets;
public:
	UnionFind(int N);
	int findSet(int i);
	bool isSameSet(int i, int j);
	bool unionSet(int i, int j);
	int numDisjointSets() {return numSets;};
	int sizeOfSet(int i) {return setSize[findSet(i)];};
};

UnionFind::UnionFind(int N) { //Construct union find Ds with 10 elements
	parent.assign(N, 0); //Initialises N elements to 0
	for (int i = 0; i < N; i++) {
		parent[i] = i;
	}
	rank.assign(N,0); //Keeps track of ranks aka "Heights" of UFDS tree
	setSize.assign(N,0);
	numSets = N;
}

int UnionFind::findSet(int i) {
	if (parent[i] == i) {
		return i;
	}
	return findSet(parent[i]);
}

bool UnionFind::isSameSet(int i, int j) {
	return findSet(i) == findSet(j);
}

bool UnionFind::unionSet(int i, int j) {
	if (isSameSet(i, j)) {
		return false;
	}
	//y acts as parent
	int x = findSet(i);
	int y = findSet(j);
	//Always append set of lower rank under bigger rank
	if (rank[x] > rank[y]) {
		swap(x, y);
	}
	parent[x] = y;
	if (rank[x] == rank[y]) {
		rank[y]++;
	}
	setSize[y] += setSize[x];
	numSets--;
	return true;
}

int main() {
printf("Assume that there are 5 disjoint sets initially\n");
  UnionFind UF(5); // create 5 disjoint sets
  printf("%d\n", UF.numDisjointSets()); // 5
  UF.unionSet(0, 1);
  printf("%d\n", UF.numDisjointSets()); // 4
  UF.unionSet(2, 3);
  printf("%d\n", UF.numDisjointSets()); // 3
  UF.unionSet(4, 3);
  printf("%d\n", UF.numDisjointSets()); // 2
  printf("isSameSet(0, 3) = %d\n", UF.isSameSet(0, 3)); // will return 0 (false)
  printf("isSameSet(4, 3) = %d\n", UF.isSameSet(4, 3)); // will return 1 (true)
  for (int i = 0; i < 5; i++) // findSet will return 1 for {0, 1} and 3 for {2, 3, 4}
    printf("findSet(%d) = %d, sizeOfSet(%d) = %d\n", i, UF.findSet(i), i, UF.sizeOfSet(i));
  UF.unionSet(0, 3);
  printf("%d\n", UF.numDisjointSets()); // 1
  for (int i = 0; i < 5; i++) // findSet will return 3 for {0, 1, 2, 3, 4}
    printf("findSet(%d) = %d, sizeOfSet(%d) = %d\n", i, UF.findSet(i), i, UF.sizeOfSet(i));
  return 0;
}