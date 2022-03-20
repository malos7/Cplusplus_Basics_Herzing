
#include "list.h"

template <typename STACKTYPE>

class Stack : private List<STACKTYPE>
{

public:
	void push(const STACKTYPE &data)
	{
		insertAtFront(data);
	}

	bool pop() 
	{
		return removeFromFront();
	}

	bool isStackEmpty() const
	{
		return isEmpty();
	}
	void printStack() const
	{
		print();
	}
};

