#include <iostream>
#include "linkedList.h"

int main()
{
	LinkedList list;

	list.addToHead(1);
	list.addToHead(2);
	list.addToHead(3);
	list.addToHead(4);
	list.print();

	return 0;
}