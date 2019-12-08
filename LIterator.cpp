#include "lIterator.h"
#include "Node.h"




template<typename T>
Literator<T>::Literator(){
	current = new Node<T>();
	
}


template<typename T>
T Literator<T>::operator*(){
	T d;
	d = current->rturnData();
	return d;
}

template<typename T>
Literator<T> *Literator<T>::operator++(){

	current = current->next;
	return this;
}

template<typename T>
Literator<T> Literator<T>::operator++(int){

	 Literator<T> old = *this; 
	 ++(*this);
	 return old;
}
template<typename T>
bool Literator<T>::operator==(Literator<T> *rhs) {

	return (current == rhs->current);
}
template<typename T>
bool Literator<T>::operator!=(Literator<T> *rhs) {

	return  !(*this == rhs);
}

