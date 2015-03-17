#include "Heap.hpp"

template<class DataType>
int Heap<DataType>::parent(int index)
{
	return index/2;
}

template<class DataType>
int Heap<DataType>::leftChild(int index)
{
	return index * 2;
}

template<class DataType>
int Heap<DataType>::rightChild(int index)
{
	return (index * 2) + 1;
}

template<class DataType>
Heap<DataType>::Heap(int s = 16)
{
	if(s < minsize_)
		s = minsize_;
	DataType * items_;
	items_ = new DataType [s];
	capacity_ = s;
	size_ = 1;
}

template<class DataType>
Heap<DataType>::~Heap()
{
	delete items_;
}
