#ifndef PRESTAMO_H
#define PRESTAMO_H

#include<iostream>
#include<string.h>

#include "Usuario.h"

using namespace std;

class Prestamo{
	private:
		ElementoBibliografico codigo;
		int idPrestamo;
		string fechaSalida;
		string fechaRegreso;
	public:
		//Constructor
		Prestamo();
		Prestamo(ElementoBibliografico,int,string,string);
		//Setters
		void setCodigo(ElementoBibliografico);
		void setIdPrestamo(int);
		void setFechaSalida(string);
		void setFechaRegreso(string);
		//Getters
		ElementoBibliografico getCodigo();
		int getIdPrestamo();
		string getFechaSalida();
		string getFechaRegreso();
		//Imprimir datos
		void imprimirDatos();		
};
//Constructor
Prestamo::Prestamo(){
	idPrestamo = 0;
	fechaSalida = "";
	fechaRegreso = "";
}

Prestamo::Prestamo(ElementoBibliografico _codigo,int _idPrestamo,string _fechaSalida,string _fechaRegreso){
	codigo = _codigo;
	idPrestamo = _idPrestamo;
	fechaSalida = _fechaSalida;
	fechaRegreso = _fechaRegreso;
}

//Setters
void Prestamo::setCodigo(ElementoBibliografico _codigo){
	codigo = _codigo;
}

void Prestamo::setIdPrestamo(int _idPrestamo){
	idPrestamo = _idPrestamo;
}
void Prestamo::setFechaSalida(string _fechaSalida){
	fechaSalida = _fechaSalida;
}
void Prestamo::setFechaRegreso(string _fechaRegreso){
	fechaRegreso = _fechaRegreso;
}

//Getters
ElementoBibliografico Prestamo::getCodigo(){
	return codigo;
}
int Prestamo::getIdPrestamo(){
	return idPrestamo;
}
string Prestamo::getFechaSalida(){
	return fechaSalida;
}
string Prestamo::getFechaRegreso(){
	return fechaRegreso;
}


//Imprimir datos
void Prestamo::imprimirDatos(){
	cout<<"Codigo del material: "<< codigo.getCodigo() << endl;
	cout<<"ID del prestamo: "<< idPrestamo << endl;
	cout<<"Fecha de prestamo: "<< fechaSalida <<endl;
	cout<<"Fecha de regreso: "<<fechaRegreso <<endl<<endl;	
}

#endif
