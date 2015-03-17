#ifndef HEAP_HPP
#define HEAP_HPP
template<class DataType>
class Heap
{
	private:
		DataType * items_;
		int capacity_;
		int size_;
		int minsize_ = 16;
		
		int parent(int index);
		int leftChild(int index);
		int rightChild(int index);
		
	public:
		//CONSTRUCTOR
		Heap(int s);
		~Heap();
		
		//ACCESSORS
		int size();
		int capacity();	
		bool empty();
		
		//MUTATORS
		void add(DataType item);
		DataType remove();
		
};
#endif
