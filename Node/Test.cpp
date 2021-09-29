/**
 * Test.cpp
 * Kevin Lou
 * Sept. 28, 2021
 *
 * Main that contains code for testing the Node class
 */

#include "Node.h"

#include <string>
#include <iostream>

using namespace std;

int main() {
	//test constructors and to_string
	Node<string> a;
	Node<string> b("Node b data");
	Node<string> c("Node c data", &a, &b);
	cout << "a: " << a.to_string() << endl;
	cout << "b: " << b.to_string() << endl;
	cout << "c: " << c.to_string() << endl;

	//test getters and setters
	b.set_child(&c);
	a.set_parent(&c);
	a.set_val("Node a data");
	cout << "a: " << a.val1() << endl;
	b.set_val("Node a data");
	cout << "b: " << b.val1() << endl;

	//test equals
	cout << "a equals b: " << a.equals(b) << endl;
}