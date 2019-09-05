#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo sig;
};

Nodo* crearNodo(int valor){
	Nodo *n = new nodo;
	n->dato = valor;
	n->sig = nullptr;
	return n;
}

void push(int valor){
	Nodo *n = crearNodo(valor);
	if(!inicio){
		inicio=n;
		fin=n;
	}else{
		fin->sig=n;
		fin=n;
	}
}

void pop(){
	Nodo *temp = inicio;
	inicio = inicio->sig;
	free(temp);
}

void mostrarCola(){
	Nodo *temp = inicio;
	if(!inicio)
		cout<<"Cola vacia"<<endl;
	else
		while(temp){
			cout<<temp->sig;
		}	
		
}

  int PromedioCol(){
  	int contador=0; 
	int acum= 0; 
	int promedio=0;
    Nodo *temp = inicio;
		if(!inicio){
			cout<<"Cola vacia";
		}else{
			while(temp){
          		acum+= temp->dato;
          		temp = temp -> sig;
          		contador++;
          		
			}
		}
    promedio= acum/contador;
      return promedio;
  }


int main(){
	
	
}
