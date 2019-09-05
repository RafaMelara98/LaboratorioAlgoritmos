#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo sig;
};

class Cola{
	private:
		Nodo *inicio;
  		Nodo *fin;
  	public:
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
		void invertirCol(){
    		if(!inicio) return; 
    			Nodo n = *inicio;
    		pop();
    		invertir();
    		push(n.dato);  
		}

		int accederPos(int pos){
    		Nodo *aux= inicio;
    		int cont=0;
   		 	while(aux){
    			if(cont ==pos){
          			return aux->dato;
        		}
        	aux = aux->sig;
        	cont++;
    		}
    		return 0;
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
  
};

  


int main(){
	Cola newCola;
	newCola.push(2);
	newCola.push(5);
	newCola.push(7);
	newCola.push(8);
	
	cout<<"Cola"<<endl;
	newCola.mostrarCola();
	cout<<"Cola Invertida"<<endl;
	
	
}
