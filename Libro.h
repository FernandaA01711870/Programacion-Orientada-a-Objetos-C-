#ifndef LIBRO_H
#define LIBRO_H

#include <iostream>
#include <string>
#include "ElementoBibliografico.h"

using namespace std;

class Libro: public ElementoBibliografico{
	private:
		string editorial;
		string isbn;
	public:
		//Constructor
		Libro();
		Libro(string,int,string,string,int,bool,string,string);
		//Setters
		void setEditorial(string);
		void setIsbn(string);
		//Getters
		string getEditorial();
		string getIsbn();
		//Imprimir datos
		void imprimirDatos();
};

//Constructor

Libro::Libro(){
	editorial = "";
	isbn = "";
}

Libro::Libro(string _tipo,int _codigo,string _autor,string _titulo,int _anio,bool _status,string _editorial,string _isbn):
	ElementoBibliografico(_tipo,_codigo,_autor,_titulo,_anio,_status){
		
		editorial = _editorial;
		isbn = _isbn;
}

void Libro::setEditorial(string _editorial){
	editorial = _editorial;
}

void Libro::setIsbn(string _isbn){
	isbn = _isbn;
}

string Libro::getEditorial(){
	return editorial;
}

string Libro::getIsbn(){
	return isbn;
}

//Imprimir datos
void Libro::imprimirDatos(){
	ElementoBibliografico::imprimirDatos();
	cout<<"La editorial del libro es : "<< editorial << endl;
	cout<<"El ISBN del libro es: "<< isbn <<endl;
}

#endif
