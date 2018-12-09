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
		bool insert();
		bool remove();
		bool checkEmpty();
		bool isPresent();
		int size();
		bool headerToFile();

	struct node {
		vector<node>* leftChilds;
		vector<node>* rightChilds;
		vector<node>* roots;
		int value;
	
		vector<node>* getLeftChild() {
			return this->leftChilds;
		}
		vector<node>* getRightChild() {
			return this->rightChilds;
		}
		vector<node>* getRoots() {
			return this->roots;
		}
		int getValue() {
			return this->value;
		}
		void setRoots(vector<node>* newRoots) {
			this->roots = newRoots;
		}
		void setLeftChilds(vector<node>* newLefts) {
			this->leftChilds = newLefts;
		}
		void setRightChilds(vector<node>* newRights) {
			this->rightChilds = newRights;
		}
		int setValue(int newValue) {
			this->value = newValue;
		}
	};
};

