#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>

template<class DataType>
class Queue
{
public:
//CONSTRUCTOR
	Queue();
//DESTRUCTOR
	~Queue();
//ACCESSOR	
	bool empty() const;
	int size() const;
	void print(std::ostream & out) const;
//MUTATOR
	void enqueue(DataType newData);
	DataType dequeue();
	
private:
	struct Node{
		DataType key;
		Node* next_; 
	};
	
	int size_;
	Node* head_;
	Node* tail_;	
};
#endif
