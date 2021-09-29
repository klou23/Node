/**
 * Node.h
 * Kevin Lou
 * Sept. 28, 2021
 *
 * Generic Node class that contains a value and pointers to a child and parent node
 */

#pragma once

#include <string>

template <typename T>
class Node {
private:
	T val;
	Node* child, * parent;
public:
	Node() = default;

	explicit Node(const T& val)
		: val(val) {
	}

	Node(const T& val, Node<T>* child, Node<T>* parent)
		: val(val),
		  child(child),
		  parent(parent) {
	}

	T val1() const {
		return val;
	}

	void set_val(const T& val) {
		this->val = val;
	}

	Node<T>* child1() const {
		return child;
	}

	void set_child(Node<T>* child) {
		this->child = child;
	}

	Node<T>* parent1() const {
		return parent;
	}

	void set_parent(Node<T>* parent) {
		this->parent = parent;
	}

	std::string to_string() {
		if(typeid(val) == typeid(std::string)) return val;
		return "";
	}

	bool equals(Node o) {
		return this->val == o.val;
	}
};
