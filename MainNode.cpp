#include <iostream>
#include "LinkedList.h"
using namespace std;
int main()
{
	LinkedList obj1;
	cout<<"<<<<LISTA SIMPLEMENTE ENLAZADA>>>>"<<endl;
	int opc, valor;
	do
	{
		cout<<"1)Insertar\n2)Remover\n3)Mostrar\n4)Salir\nOpc:";
		cin>>opc;
		if(opc==1)
		{
			cout<<"Valor:";
			cin>>valor;
			obj1.insert(valor);
		}
		else if(opc==2)
		{
			cout<<"Valor:";
			cin>>valor;
			obj1.remove(valor);
		}
		else
			obj1.print();	
	}
	while(opc!=4);
}
