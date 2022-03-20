#include <iostream>
#include "listnode.h"

using namespace std;

template<typename NODETYPE>

class List
{

public:
	List();
	~List();

	void insertAtFront(const NODETYPE &);
	bool removeFromFront();
	bool isEmpty() const;
	void print() const;

private:

	ListNode<NODETYPE> *firstPtr;
	ListNode<NODETYPE> *getNewNode(const NODETYPE &);
}; 

template<typename NODETYPE>

List<NODETYPE> :: List()

	:firstPtr(0)

{}


template<typename NODETYPE>

List<NODETYPE>::~List()
{
	if (!isEmpty()) 
	{
		ListNode<NODETYPE> *currentPtr = firstPtr;

		ListNode<NODETYPE> *tempPtr;

		while (currentPtr != 0) 
		{
			tempPtr = currentPtr;
			currentPtr = currentPtr->nextPtr;
			delete tempPtr;
		} 
	}

	cout << "\nExiting.";
}


template< typename NODETYPE>

void List<NODETYPE> :: insertAtFront(const NODETYPE& value)

{
	ListNode<NODETYPE>* newPtr = getNewNode(value);

	if (isEmpty()) 
		firstPtr = newPtr; 
	else
	{
		newPtr->nextPtr = firstPtr;
		firstPtr = newPtr; 
	} 
} 


template< typename NODETYPE>

bool List<NODETYPE> :: removeFromFront()

{
	if (isEmpty())

		return false;

	else
	{
		ListNode<NODETYPE>* tempPtr = firstPtr; 
		firstPtr = firstPtr->nextPtr;
		delete tempPtr;
		return true;

	}
}

template<typename NODETYPE>

bool List<NODETYPE> :: isEmpty() const
{
	return firstPtr == 0;
}

template<typename NODETYPE>

ListNode<NODETYPE>* List<NODETYPE> :: getNewNode(const NODETYPE& value)
{
	return new ListNode<NODETYPE>(value);
}


template<typename NODETYPE>

void List<NODETYPE> :: print() const
{
	if (isEmpty())
	{
		cout << "The list is empty \n";
		return;
	}

	ListNode <NODETYPE>* currentPtr = firstPtr;

	while (currentPtr != 0)
	{
		cout << currentPtr->data;
		currentPtr = currentPtr->nextPtr;

	}
}