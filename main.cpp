#include <iostream>
#include "Stack.h"

int main()
{
	Stack<int> stack(5);
	stack.push(1);
	stack.push(2);
	stack.push(3);
	stack.push(4);
	stack.pop();
	stack.pop();
	stack.showStack();
	return 0;
}
