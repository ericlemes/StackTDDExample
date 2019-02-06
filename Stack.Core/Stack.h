#pragma once

#include <vector>
#include "StackItem.h"

template <class T>
class Stack {
private:
	StackItem<T>* top;	
public:
	void Push(T item) {
		
	}

	T Pop() {						
		return top->Item;
	}
};