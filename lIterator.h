#ifndef LITERATOR_H
#define LITERATOR_H
#include "Node.h"



template<typename T>
class Literator {


	

	
public:
	Node<T> *current; 
	explicit Literator();

	T  operator* ();
	Literator<T>  *operator++ ();
	Literator<T>  operator++ (int);
	bool operator== (Literator<T> *rhs);
	bool operator!=(Literator<T> *rhs);






};




#endif // !ITERATOR_H
