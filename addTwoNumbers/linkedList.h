#ifndef LinkedList_H
#define LinkedList_H

#include <iostream>

struct Node
{
	int number;
	Node *next, *prev;

	Node(int, Node*, Node*);

};

Node::Node(int num, Node *nextPtr = nullptr, Node *prevPtr = nullptr)
{
	number = num;
	next = nextPtr;
	prev = prevPtr;
}

struct LinkedList
{
	private:
		int size;
		Node *head, *tail;

	public:
		LinkedList();
		void print();
		void addToHead(int);
		LinkedList operator + (const LinkedList&);

};

LinkedList::LinkedList()
{
	size = 0;
	head = tail = nullptr;
}

void LinkedList::print()
{
	Node *tmp = head;

	std::cout << tmp->number << " ";
	while (tmp->next != nullptr)
	{
		tmp = tmp->next;
		std::cout << tmp->number << " ";
	}
}

void LinkedList::addToHead(int num)
{
	if (head == nullptr)
		head = tail = new Node(num);
	else
	{
		Node *tmp = head;

		head = new Node(num, head);
		tmp->prev = head;
		tmp = nullptr;
		delete tmp;
	}
	size++;
}

LinkedList LinkedList::operator+ (const LinkedList & passed)
{
	LinkedList tmpList;

	std::cout << size << std::endl;
	std::cout << passed.size << std::endl;

	return tmpList;
}

#endif