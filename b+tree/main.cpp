#include "bplustree.h"
#include <iostream>
#include <vector>
using namespace std;

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