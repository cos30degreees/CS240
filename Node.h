#ifndef NODE_H
#define NODE_H 



using namespace std;

template <typename T>
class Node //nodes to be contained with a list
{
	


	


public:
	T data;  
    Node<T> *next;
    Node<T> *prev;
	
		
		explicit Node(T d);
		explicit Node();
		explicit Node(T d, Node *p , Node *n);
		T rturnData(); 
       void setNext(Node<T> *sn);
       void setPrev(Node<T> *sp);
        Node<T>* getnext();
        Node<T>* getprev();    
		
		


};
#endif