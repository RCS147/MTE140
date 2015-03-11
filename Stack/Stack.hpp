#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>

template<class DataType>
class Stack {
public: 
//CONSTRUCTOR
	Stack();
	
//DESTRUCTOR
	~Stack();
	
//ACCESSORS
	//Returns the number of items in the stack
	int size() const;
	
	//Returns true if the stack is empty, false otherwise
	bool empty() const;
	
	//Outputs the contents of the stack to the specified input stream
	void print(std::ostream & out) const;
	
	//Returns the top element without removing
	DataType peek() const;

//MUTATORS
	//Adds a new item to the top of the stack
	void push(DataType value);
	
	//Removes the top item from the stack and returns it
	DataType pop();

private:
	//Number of items contained in the stack
	int size_;
	
	//Struct to accomodate the key and pointers in each stack element
	struct Node{
		Node* next;
		DataType key;	
	};
	
	//Pointer to the first node
	Node* top_;

	//Copy and Assignment are private so they can't be misused.
	Stack(const Stack& other) {}
	Stack operator=(const Stack& other) {}
};
#endif
