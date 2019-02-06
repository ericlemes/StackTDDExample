#pragma once

#include <vector>
#include "StackItem.h"

template <class T>
class Stack {
private:
	StackItem<T>* top;	
public:
	void Push(T item) {
		if (top == nullptr) {
			top = new StackItem<T>();
			top->Item = item;
		}
		else {
			StackItem<T>* newItem = new StackItem<T>();
			newItem->Item = item;
			newItem->Next = top;
			top = newItem;
		}
	}

	T Pop() {			
		if (top == nullptr)
			throw std::exception("Empty stack!");

		T poppedItem = top->Item;
		top = top->Next;
		return poppedItem;
	}
};