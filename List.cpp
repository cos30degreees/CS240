#include "Node.h" 
#include "List.h"
#include <iostream>
#include <sstream>
#include <stdexcept> 
#include "lIterator.h"




using namespace std;



template<typename T>
void List<T>::init(){
	head = new Node<T>();
    tail = new Node<T>();
	head->next = tail;
	tail->prev = head;
	tail->next = nullptr;
	head->prev = nullptr;
	
}

template<typename T>
List<T>::List(){
	
	init();
	
   theSize = 0;
}
template <typename T> 
bool List<T>::isEmpty(){

	if(theSize == 0){
		return true; 
	}
	else 
		return false; 
}

template <typename T>
void List<T>::pushFront(T d)
{
	if(isEmpty()){
	
		Node<T> *cp = new Node<T>(d, head , tail); //creates new node sets prev to null and next to tail
		head->setNext(cp);
		//sets the node as head
		theSize++;
	}
	 else //if node(s) exist in list insert additional object before the first
	{
		Node<T> *cp = new Node<T>(d, head , head->getnext());
		cp->getnext()->setPrev(cp);
		head->setNext(cp); //the pointer for the new node is now the starting node
		theSize++;
	} 
}
template<typename T>
Literator<T> List<T>::insert(Literator<T> itr, T d){
	//if(cp->getprev() == nullptr && cp->getnext() == nullptr()){
		//throw invalid_argument("cannot insert at this position");
	
	if(isEmpty()){
		pushFront(d);
	}
	
	Node<T> *p = itr.current;
	 Node<T> *newNode = new Node<T>(d, p->prev, p);
	 p->prev->next = newNode;
	 p->prev = newNode;
	 itr.current = newNode;
	theSize++;
	return itr;
        
	
    // end insert

}
template <typename T>
void List<T>::pushBack(T d)
{
	if(isEmpty()) 
	{
		Node<T> *cp = new Node<T>(d, head, nullptr); //creates new node sets prev to null and next to tail
		tail = cp; //sets the node as head
	}
	else //if node(s) exist in list insert additional object before the first
	{
		Node<T> * cp = new Node<T>(d, nullptr, tail);
		tail = cp; //the pointer for the new node is now the starting node
	}
}
template<typename T>
void List<T>::print()
{

		//Node<T> *cp = new Node<T>();
       
		cout << "The contents of the list is: ";
		Literator<T> it;
		it = listTop();
		

		 for(int i = 0; i < theSize; i++){
		
		 cout << *it << " ";
		 it++; //moves to next node in list
		 }
		} 
template<typename T>
int List<T>::listSize(){

	return theSize;

}

template<typename T>
Literator<T> List<T>::listTop(){
	Literator<T> it;
	it.current = head->getnext(); 
	return it;

}
 template<typename T>
 Literator<T> List<T>::erase(Literator<T> itr){
	 if(itr.current != nullptr){
	 Node<T> *p = itr.current;
	 Literator<T> rtrn;
	 rtrn.current = p->getnext();

	  
		 p->getprev()->setNext(p->getnext()); 
		 p->getnext()->setPrev(p->getprev());
	    delete p;
	    theSize --; 
		return rtrn;
	
	 }
	 else 
		 cout << "cant";
		 itr.current = head;
		 return itr;

}

template<typename T>
Node<T>* List<T>::find(T d){
	
	
	if(isEmpty()){
		cout << "no items in List" << " ";
		return head;
	}
	
	Node<T> *cp = head; 
		for(int i = 0; i <= listSize(); i++){
			
			if (cp->rturnData() == d){
				cout << "found item" << d << " ";
				return cp;
			}
			else {
				cp = cp->getnext();
			}
			}
	
		cout << d << "was not found in the list" << endl;
		return head;
	}






