#pragma once

template <class T>
class Stack {
private:
	T item;
public:
	void Push(T item) {
		this->item = item;
	}

	T Pop() {		
		return item;
	}
};