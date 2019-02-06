#pragma once

#include <vector>

template <class T>
class Stack {
private:
	std::vector<T> items;
public:
	void Push(T item) {
		items.push_back(item);		
	}

	T Pop() {		
		if (items.size() <= 0)
			throw std::exception("Empty stack!");

		auto it = items.end();
		it--;
		T last = items[items.size() - 1];
		items.erase(it);
		
		return last;
	}
};