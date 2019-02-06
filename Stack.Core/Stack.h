#pragma once

#include <vector>
#include "StackItem.h"

template <class T>
class Stack {
private:
	StackItem<T>* top;	
public:
	void Push(T item) {
		top = new StackItem<T>();
		top->Item = item;		
	}

	T Pop() {						
		return top->Item;
	}
};