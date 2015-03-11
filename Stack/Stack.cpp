#include "Stack.hpp"

template<class DataType>
Stack<DataType>::Stack()
{
	top_ = nullptr;
	size_ = 0;
}

template<class DataType>
Stack<DataType>::~Stack()
{
	while(!empty())
		pop();
}

template<class DataType>
int Stack<DataType>::size() const
{
	return size_;
}

template<class DataType>
bool Stack<DataType>::empty() const
{
	return top_ == nullptr;
}

template<class DataType>
DataType Stack<DataType>::peek() const
{
	return top_ -> key;
}

template<class DataType>
void Stack<DataType>::print(std::ostream & out) const
{
	if(empty())
		out << "EMPTY_STACK" << std::endl;
	else
	{
		Node* tmp = top_;
		while(tmp != nullptr)
		{
			out << tmp -> key << std::endl;
			tmp = tmp -> next;	
		}
	}
}

template<class DataType>
void Stack<DataType>::push(DataType newKey)
{
	Node* newNode = new Node;
	newNode -> next = top_;
	newNode -> key = newKey;
	top_ = newNode;
}

template<class DataType>
DataType Stack<DataType>::pop()
{
	if(!empty())
	{
		Node* tmp = top_;
		DataType value = tmp -> key;
		top_ = top_ -> next;
		
		delete tmp;
		return value;
	}
}
