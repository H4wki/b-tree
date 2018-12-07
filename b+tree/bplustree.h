#pragma once
#include <string>
class bplustree
{
	public:

		bool insert();
		bool remove();
		bool checkEmpty();
		bool isPresent();
		int size();
	private:
		//Header Record Variables
		int headerSize;
		int recordCount;
		int recordSize;
		int fieldsPerRecord;

		std::string description;
		bool insterFlag;



		struct node;

	struct node
	{
		int key;
		std::string value;

	    node(int v) {
			//Get Key from value
		}
		int getKey() {
			return key;
		}
		std::string getValue() {
			return value;
		}
		void setKey(int nkey) {
			this->key = nkey;
		}
		void setValue(std::string nvalue) {
			this->value = nvalue;
		}

	};
};