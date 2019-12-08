#include <iostream>
#include <ctime>
#include "Node.h"
#include "List.h"
#include "lIterator.h"

using namespace std;

int main()
{
	int age = 3;
List<int> myList; 
Literator<int> it;
Node<int> *temp = new Node<int>();


 for (int i=1; i<=5; ++i){
	 myList.pushFront(i);
 }
it = myList.listTop();

myList.print();
myList.erase(it);

myList.print();
 age = myList.listSize();

cout << age;

cin >>  age;
}