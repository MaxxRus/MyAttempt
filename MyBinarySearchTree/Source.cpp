#include <iostream>

using namespace std;


template <class T>
class Node {
public:
	T data;
	Node *left, *right, *parent;

	Node() {
		left = right = parent = NULL;
	};
	Node(T &value) {
		data = value;
	};
	~Node() {
	};
	void operator= (const Node<T> &other) {
		data = other.data;
	};
	bool operator< (T &other) {
		return (data < other);
	};
};

template <class T>
class Tree {
public:
	Tree() {
		root = NULL;
	};

	~Tree() {
		m_destroy(root);
	};

int main()
{
	cout << "hello world" << endl;

	system("pause");
	return 0;
}