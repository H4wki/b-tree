#include "bplustree.h"
#include <fstream>
#include <iostream>
using namespace std;
bplustree::bplustree() 
{
	this->totalNumRecords = 1;
	this->blockSize = 2;
	this->totalBlocks = 3;
	this->numAvalBlocks = 4;
	this->numOfLevels = 5;
	this->rbnRoot = 6;
	this->rbnLevels = 7;
	this->rbnAvailList = 8;
	this->sizeofRecords = 9;
	this->numFieldsPerRecord = 10;

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
	myfile << this->totalNumRecords << "|" << this->blockSize << "|" << this->totalBlocks << "|" << this->numAvalBlocks << "|" << this->numOfLevels << "|" << this->rbnAvailList << "|" << this->rbnLevels << "|" << this->rbnRoot << "|";
	myfile.close();
	return true;
}