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
