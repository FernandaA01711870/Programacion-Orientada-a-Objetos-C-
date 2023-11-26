#ifndef DICCIONARIO_H
#define DICCIONARIO_H

#include <iostream>
#include <string>
#include "ElementoBibliografico.h"

using namespace std;

class Diccionario: public ElementoBibliografico{
	private:
		string idioma;
	public:
		//Constructores
		Diccionario();
		Diccionario(string,int,string,string,int,bool,string);
		//Setters
		void setIdioma(string);
		//Getters
		string getIdioma();
		//Imprimir datos
		void imprimirDatos();
};

//Constructores
Diccionario::Diccionario(){
	idioma = "";
}

Diccionario::Diccionario(string _tipo,int _codigo,string _autor,string _titulo,int _anio,bool _status,string _idioma):
	ElementoBibliografico(_tipo,_codigo,_autor,_titulo,_anio,_status){
		
		idioma = _idioma;
}

void Diccionario::setIdioma(string _idioma){
	idioma = _idioma;
}

string Diccionario::getIdioma(){
	return idioma;
}

//Imprimir datos
void Diccionario::imprimirDatos(){
	ElementoBibliografico::imprimirDatos();
	cout<<"El idioma del diccionario es : "<< idioma <<endl;
}

#endif
