#include "bplustree.h"


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

}
int bplustree::size() {
	return totalNumRecords;
}
