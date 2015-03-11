#include "Queue.hpp"

template<class DataType>
Queue<DataType>::Queue()
{
	head_ = nullptr;
	tail_ = nullptr;
	size = 0;
}

template<class DataType>
Queue<DataType>::~Queue()
{
	while(!empty())
		dequeue();
}

template<class DataType>
bool Queue<DataType>::empty() const
{
	return head_ == nullptr;
}

template<class DataType>
int Queue<DataType>::size() const
{
	return size_;
}

template<class DataType>
void Queue<DataType>::print(std::ostream & out) const
{
	if(empty())
		out << "EMPTY_QUEUE";
	else
	{
		Node* tmp = head_;
		while(tmp != nullptr)
		{
			out << tmp -> key;
			tmp = tmp -> next;
		}
	}
}

template<class DataType>
void Queue<DataType>::enqueue(DataType newData)
{
	if(empty())
	{
		head_ = new Node;
		head_ -> key = newData;
		tail_ = head_;
	}
	else
	{
		tail_ -> next = new Node;
		tail_ = tail_ -> next;
		tail_ -> key = newData;
	}
	size ++;
}

template<class DataType>
DataType Queue<DataType>::dequeue()
{
	DataType tmpData = head_ -> key;
	Node* tmpNode = head_;
	head_ = head_ -> next;
	
	size--;
	delete tmpNode;
	return tmpData;
}
