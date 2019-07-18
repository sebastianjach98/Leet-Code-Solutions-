#ifndef linkedList_H
#define linkedList_H

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
		Node *head, *tail;

	public:
		LinkedList();
		void print();
		void addToHead(int);
};

LinkedList::LinkedList()
{
	head = tail = nullptr;
}

void LinkedList::print()
{
	if (head != nullptr)
	{
		Node *tmp = head;

		std::cout << tmp->number << " ";
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
			std::cout << tmp->number << " ";
		}
		delete tmp;
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
		delete tmp;
	}
}

#endif