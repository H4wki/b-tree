#include "bplustree.h"
#include <iostream>
#include <vector>
using namespace std;
struct bucket {
	vector<bucket>* leftChild;
	vector<bucket>* rightChild;
	bucket* parent;
	vector<int> items;
	int size;



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
				items.erase(items.begin()+i);
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
int main() {
	/*bplustree test1;
	cout<<test1.size()<<endl;
	cout << test1.headerToFile();*/
	vector<int> t1(1);
	bucket t2(3,NULL);
	/*cout << t1.size();
	t1.push_back(1);
	cout << t1.size();*/
	t2.add(5);
	t2.add(7);
	t2.toString();
	t2.add(6);
	t2.toString();
	cout << t2.add(8) << endl;
	t2.remove(5);
	t2.toString();
	return 1;
}