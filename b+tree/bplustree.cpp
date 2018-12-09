#include "bplustree.h"
#include <fstream>
#include <iostream>
using namespace std;
bplustree::bplustree() 
{
	this->headerSize = 0;
	this->blockSize = 1;
	this->totalNumRecords =2;
	this->blockSize = 3;
	this->totalBlocks = 4;
	this->numAvalBlocks = 5;
	this->numOfLevels = 6;
	this->rbnRoot = 7;
	this->rbnLevels = 8;
	this->rbnAvailList = 9;
	this->sizeofRecords = 10;
	this->numFieldsPerRecord = 11;
	
}
int bplustree::size() {
	return this->totalNumRecords;
}
bool bplustree::insert() {
	return false;
}
bool bplustree::remove() {
	return false;
}
bool bplustree::checkEmpty() {
	return false;
}
bool bplustree::isPresent() {
	return false;
}
bool bplustree::headerToFile() {
	ofstream myfile;
	myfile.open("test.txt");
	myfile << this->headerSize << "|" << this->blockSize << "|" << this->totalBlocks << "|" << this->numAvalBlocks << "|" << this->numOfLevels << "|" << this->rbnAvailList << "|" << this->rbnLevels << "|" << this->rbnRoot << "|";
	myfile.close();
	return true;
}