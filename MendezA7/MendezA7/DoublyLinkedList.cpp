#include "Node.h"
#include "Node.cpp"

void createStringDoublyLinkedList();
void createIntDoublyLinkedList();

int main() {

	cout << "String Doubly Linked List: " << endl;
	createStringDoublyLinkedList();

	cout << endl;

	cout << "Integer Doubly Linked List: " << endl;
	createIntDoublyLinkedList();

	return 0;
} // end of main

void createStringDoublyLinkedList() {
	shared_ptr<Node<string>> start;
	shared_ptr<Node<string>> end;
	shared_ptr<Node<string>> nd = make_shared<Node<string>>("Tom");

	start = nd;
	end = start;

	auto nd1 = make_shared<Node<string>>("Dick");

	nd1->setPrevious(end);
	end->setNext(nd1);
	end = nd1;

	auto nd2 = make_shared<Node<string>>("Harry");

	nd2->setPrevious(end);
	end->setNext(nd2);
	end = nd2;

	PrintForward(start);
	PrintReverse(end);

	cout << "Nodes going out of range automatic cleanup:" << endl;
	} // end of createStringDoublyLinkedList

void createIntDoublyLinkedList() {
	shared_ptr<Node<int>> start;
	shared_ptr<Node<int>> end;
	shared_ptr<Node<int>> nd = make_shared<Node<int>>(10);

	start = nd;
	end = start;

	auto nd1 = make_shared<Node<int>>(20);

	nd1->setPrevious(end);
	end->setNext(nd1);
	end = nd1;

	auto nd2 = make_shared<Node<int>>(30);

	nd2->setPrevious(end);
	end->setNext(nd2);
	end = nd2;

	PrintForward(start);
	PrintReverse(end);

	cout << "Nodes going out of range automatic cleanup:" << endl;
} // end of createIntDoublyLinkedList()
