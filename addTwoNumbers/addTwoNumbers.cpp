#include <iostream>
#include "linkedList.h"

int main()
{
	LinkedList list, list2, list3;

	list.addToHead(1);
	list2.addToHead(2);
	list2.addToHead(3);
	list3 = list + list2;

	return 0;
}