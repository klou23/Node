#pragma once

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
};
