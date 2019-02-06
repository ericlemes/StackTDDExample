#pragma once

#include <vector>
#include "StackItem.h"
#include "IAllocator.h"
#include "HeapAllocator.h"

template <class T>
class Stack {
private:
	StackItem<T>* top;	
	HeapAllocator<StackItem<T>> heapAllocator;
	IAllocator<StackItem<T>>& allocator;
public:
	Stack() : allocator(heapAllocator) {

	}

	Stack(IAllocator<StackItem<T>>& a) : allocator(a) {

	}

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