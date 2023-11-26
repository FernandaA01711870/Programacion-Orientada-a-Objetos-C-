#ifndef PRESTAMO_H
#define PRESTAMO_H

#include<iostream>
#include<string>
#include <vector>

#include "ElementoBibliografico.h"

using namespace std;
 

class Prestamo{
	private:
		int idPrestamo;
		string fechaSalida;
		string fechaRegreso;
		vector<ElementoBibliografico*> elementos;
		
	public:
		//Constructor
		Prestamo();
		Prestamo(int,string,string);
		
		//Setters
		void setIdPrestamo(int);
		void setFechaSalida(string);
		void setFechaRegreso(string);
		void agregarElementos(ElementoBibliografico*);
		
		//Getters
		int getIdPrestamo();
		string getFechaSalida();
		string getFechaRegreso();
		vector<ElementoBibliografico*> getElementos();
		
		//Imprimir datos
		void imprimirDatos();	
		
};

//Constructor
Prestamo::Prestamo(){
	idPrestamo = 0;
	fechaSalida = "";
	fechaRegreso = "";
}

Prestamo::Prestamo(int _idPrestamo,string _fechaSalida,string _fechaRegreso){
	idPrestamo = _idPrestamo;
	fechaSalida = _fechaSalida;
	fechaRegreso = _fechaRegreso;
}

//Setters
void Prestamo::setIdPrestamo(int _idPrestamo){
	idPrestamo = _idPrestamo;
}
void Prestamo::setFechaSalida(string _fechaSalida){
	fechaSalida = _fechaSalida;
}
void Prestamo::setFechaRegreso(string _fechaRegreso){
	fechaRegreso = _fechaRegreso;
}
void Prestamo::agregarElementos(ElementoBibliografico* _elemento){
	elementos.push_back(_elemento);
}
//Getters
int Prestamo::getIdPrestamo(){
	return idPrestamo;
}
string Prestamo::getFechaSalida(){
	return fechaSalida;
}
string Prestamo::getFechaRegreso(){
	return fechaRegreso;
}
vector<ElementoBibliografico*> Prestamo::getElementos(){
	return elementos;
}

//Imprimir datos
void Prestamo::imprimirDatos(){
cout <<"ID del prestamo: "<< idPrestamo<<endl;
    cout<<"Fecha de prestamo: "<< fechaSalida<<endl;
    cout<<"Fecha de regreso: "<< fechaRegreso<<endl;

    cout<< "....Codigos de los elementos que constitutuyen el prestamo...." << endl;
   	for (size_t i = 0; i < elementos.size(); ++i) {
        cout << "Codigo del material: " << elementos[i]->getCodigo() << endl;
    }
    cout << endl;
}

#endif
