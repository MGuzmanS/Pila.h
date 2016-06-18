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
		fin=new(NPila);
		fin->L=le;
		inicial=fin;
		inicial=inicial->siguiente;
	}
	else{
		aux=new(Ncola);
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
		aux=fin->siguiente;
		fin=aux;
	}
}
