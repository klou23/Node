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
		return to_string(val);
	}

	bool equals(Node o) {
		return this->val == o.val;
	}
};
