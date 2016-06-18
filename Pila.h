/*
 * Pila.h
 *
 *  Created on: 9/06/2016
 *      Author: Martin
 */

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct NPila{
	char L;
	struct NPila *siguiente;

};

struct NPila *fin, *inicial, *aux;

class CPila{
public:
	void Push(char Le);
	void Printer();
	void Top();
	void Pop();

};

void CPila::Push(char le){
	if(fin==NULL){
		fin=new(NPila);					//Se crea un nodo y el puntero fin apuntara a el mismo
		fin->L=le;
		inicial=fin;					//Le indicamos al puntero inicio que apunte a donde apunta el puntero fin
		inicial=inicial->siguiente;			//Le indicamos al puntero siguiente del puntero inicio que apunte a nulo.
	}
	else{
		aux=new(Ncola);					//En esta parte de la funcion se apilan las colas solo que al reves.
		aux->L=le;
		aux->siguiente=fin;
		fin=aux;
	}
}

void CPila::Printer(){
	aux=fin;
	if(fin==NULL){
		cout<<"No existen valores."<<endl;
	}
	else{
		while(aux!=NULL){
			cout<<"En cola:"<<aux->L<<endl;
			aux=aux->siguiente;
		}
	}
}

void CPila::Top(){
	if(fin==NULL){
		cout<<"No hay ningun valor";
	}
	else{
		cout<<"En el frente:"<<fin->L;

	}
}

void CPila::Pop(){
	if(fin==NULL){
		cout<<"No hay ningun valor";
	}
	else{
		aux=fin->siguiente;			//El puntero aux apuntara al penultimo nodo
		fin=aux;				//Le indicamos al puntero fin que apunte al mismo nodo que apunta aux
	}
}
