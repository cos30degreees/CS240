#include "Node.h"
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std; 

template<class T>
Node<T>::Node(){
	data = NULL;
	prev = nullptr;
	next = nullptr;

}

     
template<class T>
Node<T>::Node(T d){
	data = d;
	prev = nullptr;
	next = nullptr;

}
template<class T>
Node<T>::Node(T d, Node *p, Node *n){
	prev = p; 
	next = n;
	data = d;

}
template<class T>
T Node<T>::rturnData(){

	return data; 
}

template<class T>
Node<T>* Node<T>::getnext(){

	return next; 
}

template<class T>
Node<T>* Node<T>::getprev(){

	return prev; 
}

template<class T>
void Node<T>::setNext(Node<T> *sn){

     next = sn;
}


template<class T>
void Node<T>::setPrev(Node<T> *sp){


	prev = sp;  
}




	
	



