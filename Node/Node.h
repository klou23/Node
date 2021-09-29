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
	/**
	 * Default constructor
	 */
	Node() = default;

	/**
	 * Constructor with value
	 * @param val value for node to hold
	 */
	explicit Node(const T& val)
		: val(val) {
	}

	/**
	 * Constructor with value and connected nodes
	 * @param val value for node to hold
	 * @param child pointer to child node
	 * @param parent pointer to parent node
	 */
	Node(const T& val, Node<T>* child, Node<T>* parent)
		: val(val),
		  child(child),
		  parent(parent) {
	}

	/**
	 * Getter for val
	 */
	T val1() const {
		return val;
	}

	/**
	 * Setter for val
	 */
	void set_val(const T& val) {
		this->val = val;
	}

	/**
	 * Getter for child
	 */
	Node<T>* child1() const {
		return child;
	}

	/**
	 * Setter for child
	 */
	void set_child(Node<T>* child) {
		this->child = child;
	}

	/**
	 * Getter for parent
	 */
	Node<T>* parent1() const {
		return parent;
	}

	/**
	 * Setter for parent
	 */
	void set_parent(Node<T>* parent) {
		this->parent = parent;
	}

	/**
	 * To string method
	 */
	std::string to_string() {
		if(typeid(val) == typeid(std::string)) return val;
		return "";
	}

	/**
	 * Tests node equality
	 * @param o node to test against
	 * @return returns true if the node values are equal, false otherwise
	 */
	bool equals(Node o) {
		return this->val == o.val;
	}
};
