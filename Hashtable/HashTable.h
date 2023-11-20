#pragma once
#include <iostream>
using namespace std;

//Hash function used for this hash table
//x = item to be hashed
//Given h(x) returns sum of digits in x
int h(int x) {
	int ans = 0;
	while (x > 0) {
		ans += x % 10;
		x /= 10;
	}
	return ans;
}

class HashTable {
private:

	const int DEL = -1;
	const int EMPTY = 0;

	int ht[100]; //array to store hash table items. Max 100
	int size; //Size of table
	int N; //no of items in hash table

public:
	HashTable(int);
	int getKey(int);
	
	void insertWithoutCollision(int);
	void deleteWithoutCollision(int);
	bool existWithoutCollision(int);
	
	void insertWithCollision(int);
	void deleteWithCollision(int);
	bool existWithCollision(int);

	void printHashTable();
	
};

#include "HashTable.hpp"
