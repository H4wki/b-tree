#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;
struct bucket {
	vector<bucket>* leftChild;
	vector<bucket>* rightChild;
	bucket* parent;
	vector<int> items;
	int size;


	bucket() {

	}
	bucket(int intSize, bucket* par) {
		this->parent = par;
		this->size = intSize;

	}
	vector<bucket>* getLeftChild() {
		return this->leftChild;
	}
	vector<bucket>* getRightChild() {
		return this->rightChild;
	}
	bucket* getParent() {
		return this->parent;
	}
	bool add(int newItem) {
		if (items.size() == this->size) { return false; }
		for (int i = 0; i < items.size(); i++) {
			if (items.at(i) < newItem) {
				continue;
			}
			items.insert(items.begin() + i, newItem);
			return true;
		}
		this->items.push_back(newItem);
		return true;
	}
	bool remove(int delItem) {
		if (items.size() == 0) { return false; }
		for (int i = 0; i < items.size(); i++) {
			if (items.at(i) == delItem) {
				items.erase(items.begin() + i);
				return true;
			}
		}
		return false;
	}
	void setRoots(bucket* newRoot) {
		this->parent = newRoot;
	}
	void setLeftChilds(vector<bucket>* newLefts) {
		this->leftChild = newLefts;
	}
	void setRightChilds(vector<bucket>* newRights) {
		this->rightChild = newRights;
	}
	void toString() {

		for (int i = 0; i < this->items.size(); i++) {
			cout << items.at(i);
		}
		cout << endl;
	}
};
class bplustree
{
	
	private:
		//Header Record Variables
		int headerSize;
		int blockSize;
		int totalBlocks;
		int numAvalBlocks;//Number of open blocks
		int numOfLevels;
		int rbnRoot; //Relative offest to root node
		int rbnLevels;//Relative offset to levels
		int rbnAvailList;//Relative offset to the avial list
		int totalNumRecords;//total number of records
		int sizeofRecords;
		int numFieldsPerRecord;
		bucket root;
		 //String variable
		string description;
		string time;
		string lastMod;
	public:
		bplustree();
		bool insert(int insertE);
		bool remove();
		bool checkEmpty();
		bool isPresent();
		int size();
		bool headerToFile();
		int getBlockSize();

	//struct node {
	//		 
	//	};
	


};

