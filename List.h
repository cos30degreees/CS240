#ifndef LIST_H
#define LIST_H
#include<string>
#include "Node.h"
#include "lIterator.h"

using namespace std;


template<typename T>
class List
{
private:

	int theSize;
    Node<T> *head;
     Node<T> *tail;
 


public:
	
	

	explicit List();
	//constructs an empty list

	void init();

	bool isEmpty();

	void pushBack(T d);
	
	void pushFront(T d);

		//remove an element at position i.

	void makeEmpty();
	//removes all elements in the container

	Literator<T> erase(Literator<T> itr);

	Literator<T> insert(Literator<T> itr, T d);
	//insert element x at position i.

	int listSize();

	Literator<T> listTop();

	void print();
	//prints out the entire list
	
	Node<T>* find(T d);
	

};
#endif