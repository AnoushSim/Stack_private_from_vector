#ifndef STACK
#define STACK
#include "Vector.h"

template <typename T>
class Stack : private Vector<T>
{
public:
	Stack (const int ssize = 100);
	virtual ~Stack ();
	virtual void push (const T );
	virtual  T pop ();
	virtual int get_size();
	void showStack() const;
	
};

template <typename T>
Stack<T>::Stack(const int ssize ) :Vector<T>(ssize) { }

template <typename T>
Stack<T>::~Stack()
{
	Vector<T>::~Vector();
}

template <typename T>
void Stack<T>::push(const T element )
{
	Vector<T>::push_back(element);
}

template <typename T>
T Stack<T>::pop()
 {
 	Vector<T>::pop_back();
 }
 
template <typename T>
int Stack<T>::get_size() {
		Vector<T>::get_size();
}

template <typename T> 
void Stack<T>::showStack() const 
{
	Vector<T>::showVector();
}

#endif
