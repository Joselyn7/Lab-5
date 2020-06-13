#include <iostream>
#include "Node.h"
using namespace std;
class LinkedList
{
	int size;
	Node *head; //mi cabecita
	public:
		LinkedList();
		void insert(int valor);
		void remove(int valor);
		void print();
		~LinkedList();
};
LinkedList::LinkedList()
{
	size=0;
	head=NULL;
}
void LinkedList::insert(int valor)
{
	Node *nodo_n=new Node(valor);
	Node *prim=this->head;
	Node *secu;
	while((prim!=NULL)&&(prim->elem<valor))
	{
		secu=prim;
		prim=prim->next;
	}
	if(head==prim){
		head=nodo_n;
	}
	else
		secu->next=nodo_n;
		
	nodo_n->next=prim;
	size++;
}
void LinkedList::remove(int valor)
{	
	if(this->head==NULL)
	{
		cout<<"Lista Vacia"<<endl;
		return;
	}
	if(this->head->elem==valor)
	{
		Node *eliminar=this->head;
		this->head=this->head->next;
		delete(eliminar);
		cout<<"Se elimino"<<endl;
		size--;
		return;
	}
	Node *ptr=this->head;
	while(ptr->next!=NULL && ptr->next->elem!=valor)
		ptr=ptr->next;
	if(ptr->next==NULL)	
	{
		cout<<"No se encontro"<<endl;
		return;		
	}
	Node *eliminar=ptr->next;
	ptr->next=ptr->next->next;
	size--;
	delete(eliminar);
	cout<<"Se elimino"<<endl;
}
void LinkedList::print()
{
	cout<<"Elementos:"<<endl;
	Node *ptr=this->head;
	while(ptr!=NULL)
	{
		cout<<ptr->elem<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
}
LinkedList::~LinkedList()
{
	Node *ptr=this->head;
	Node *next1=NULL;
	while(ptr!=NULL)
	{
		next1=ptr->next;
		delete(ptr);
		ptr=next1;
	}
}

