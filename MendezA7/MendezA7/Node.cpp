#include "Node.h"

template <class T>
T Node<T>::getValue(){ return Value; } // end of getValue

template <class T>
shared_ptr<Node<T>> Node<T>::getNext(){ return next; } // end of shared_ptr<Node

template <class T>
void Node<T>::setNext(shared_ptr<Node<T>> nextPtr) { next = nextPtr; } // end of setNext

template <class T>
shared_ptr<Node<T>> Node<T>::getPrevious() { return prev.lock(); } // end of getPrevious

template <class T>
void Node<T>::setPrevious(shared_ptr<Node<T>> prevPtr) { prev = prevPtr; } // end of setPrevious

template<typename T>
void PrintForward(shared_ptr<Node<T>> start) {
	shared_ptr<Node<T>> temp = start;

	while (temp) {
		cout << temp->getValue() << "-> ";
		temp = temp->getNext();

	} // end of while

	cout << endl;
} // end of PrintForward

template<typename T>
void PrintReverse(shared_ptr<Node<T>> end) {
	shared_ptr<Node<T>> temp = end;

	while (temp) {
		cout << "<-" << temp->getValue() << " ";
		temp = temp->getPrevious();

	} // end of while

	cout << endl;
} // end of PrintReverse
