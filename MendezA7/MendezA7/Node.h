#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <memory>

using namespace std;
template <typename T>
class Node {
private:
	T Value;
	shared_ptr<Node<T>> next;
	weak_ptr<Node<T>> prev;

public:
	Node(T val) : Value(val) {}
	~Node() { cout << "Deleting node with a value " << Value << endl; }

	T getValue();
	void setValue(T val) { Value = val; }

	shared_ptr<Node<T>> getNext();
	shared_ptr<Node<T>> getPrevious();

	void setNext(shared_ptr<Node<T>> nextPtr);
	void setPrevious(shared_ptr<Node<T>> previousPtr);

}; // end

#endif