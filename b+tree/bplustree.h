#ifndef BPLUSHEADER
#define BPLUSHEADER

#pragma once
#include <string>

class bplustree
{
public:
	bplustree();
	bool insert();
	bool remove();
	bool checkEmpty();
	bool isPresent();
	int size();
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
	// String variable
	std::string description;
	std::string time;
	std::string lastMod;
};

#endif