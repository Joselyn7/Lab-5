#include <iostream>
using namespace std;
class Node
{
	int elem;
	Node *next; //mi colita
	public:
		friend class LinkedList; //clase LinkedList accederá a mis privates de clase Node
		Node(int valor);
};
Node::Node(int valor)
{
	elem=valor;
	next=NULL;
}

