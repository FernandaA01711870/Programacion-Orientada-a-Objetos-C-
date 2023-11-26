#ifndef ENCICLOPEDIA_H
#define ENCICLOPEDIA_H

#include <iostream>
#include <string>
#include "ElementoBibliografico.h"

using namespace std;

class Enciclopedia: public ElementoBibliografico{
	private:
		string edicion;
		string volumen;
	public:
		//Constructores
		Enciclopedia();
		Enciclopedia(string,int,string,string,int,bool,string,string);
		//Setters
		void setEdicion(string);
		void setVolumen(string);
		//Getters
		string getEdicion();
		string getVolumen();
		//Imprimir datos
		void imprimirDatos();
};

//Constructor

Enciclopedia::Enciclopedia(){
	edicion = "";
	volumen = "";
}

Enciclopedia::Enciclopedia(string _tipo,int _codigo,string _autor,string _titulo,int _anio,bool _status,string _edicion,string _volumen):
	ElementoBibliografico(_tipo,_codigo,_autor,_titulo,_anio,_status){
		
		edicion = _edicion;
		volumen = _volumen;
}

void Enciclopedia::setEdicion(string _edicion){
	edicion = _edicion;
}

void Enciclopedia::setVolumen(string _volumen){
	volumen = _volumen;
}

string Enciclopedia::getEdicion(){
	return edicion;
}

string Enciclopedia::getVolumen(){
	return volumen;
}

//Imprimir datos
void Enciclopedia::imprimirDatos(){
	ElementoBibliografico::imprimirDatos();
	cout<<"La edicion del libro es : "<< edicion << endl;
	cout<<"El volumen del libro es: "<< volumen <<endl;
}

#endif
