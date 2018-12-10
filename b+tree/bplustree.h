#pragma once
#include <string>
#include <vector>
using namespace std;
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
	struct bucket {
		vector<bucket>* leftChild;
		vector<bucket>* rightChild;
		bucket* parent;
		vector<int> items;
		

		bucket(int listSize) {
			this->items.size == listSize;

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
			if(this->items.end)
		}
		void setRoots(bucket* newRoot) {
			this->parent = newRoot;
		}
		void setLeftChilds(bucket* newLefts) {
			this->leftChild = newLefts;
		}
		void setRightChilds(bucket* newRights) {
			this->rightChild = newRights;
		}
	};


};

