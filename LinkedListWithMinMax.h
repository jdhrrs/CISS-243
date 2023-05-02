#pragma once
#include "LinkedList.h"

template <typename T>
class LinkedListWithMinMax : public LinkedList<T> {
public:
	T getMin() {
		if (this->isEmpty()) {
			throw std::out_of_range("Cannot get min value of empty list");
		}

		T min = this->get(0);
		for (int i = 1; i < this->size(); i++) {
			T value = this->get(i);
			if (value < min) {
				min = value;
			}
		}

		return min;
	}

	T getMax() {
		if (this->isEmpty()) {
			throw std::out_of_range("Cannot get max value of empty list");
		}

		T max = this->get(0);
		for (int i = 1; i < this->size(); i++) {
			T value = this->get(i);
			if (value > max) {
				max = value;
			}
		}

		return max;
	}

	typename LinkedList<T>::Node* getNode(int index) const {
		return this->getNodeAt(index);
	}
};

