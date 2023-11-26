#ifndef ELEMENTO_BIBLIOGRAFICO_H
#define ELEMENTO_BIBLIOGRAFICO_H

#include <iostream>
#include <string>

using namespace std;

class ElementoBibliografico{
	protected:
		string tipo; //Libro, Revista, Periodico, Articulo, etc...
		int codigo;
		string autor;
		string titulo;
		int anio;
		bool status; //True = activo | False = inactivo
	public:
		//Constructor
		ElementoBibliografico();
		ElementoBibliografico(string,int,string,string,int,bool);
		//Setters
		void setTipo(string);
		void setCodigo(int);
		void setAutor(string);
		void setTitulo(string);
		void setAnio(int);
		void setStatus(bool);
		//Getters
		string getTipo();
		int getCodigo();
		string getAutor();
		string getTitulo();
		int getAnio();
		bool getStatus();
		//Metodos para dar de alta y baja
		void verStatus();
		//Imprimir datos
		void imprimirDatos();
};
//Constructor
ElementoBibliografico::ElementoBibliografico(){
	tipo = "";
	codigo = 0;
	autor = "";
	titulo = "";
	anio = 0;
	status = true ;
}

ElementoBibliografico::ElementoBibliografico(string _tipo,int _codigo,string _autor,string _titulo,int _anio,bool _status){
	tipo = _tipo;
	codigo = _codigo;
	autor = _autor;
	titulo = _titulo;
	anio = _anio;
	status = _status;
}

void ElementoBibliografico::setTipo(string _tipo){
	tipo = _tipo;
}
void ElementoBibliografico::setCodigo(int _codigo){
	codigo = _codigo;
}
void ElementoBibliografico::setAutor(string _autor){
	autor = _autor;
}
void ElementoBibliografico::setTitulo(string _titulo){
	titulo = _titulo;
}
void ElementoBibliografico::setAnio(int _anio){
	anio = _anio;
}
void ElementoBibliografico::setStatus(bool _status){
	status = _status;
}
//Getters
string ElementoBibliografico::getTipo(){
	return tipo;
}
int ElementoBibliografico::getCodigo(){
	return codigo;
}
string ElementoBibliografico::getAutor(){
	return autor;
}
string ElementoBibliografico::getTitulo(){
	return titulo;
}
int ElementoBibliografico::getAnio(){
	return anio;
}
bool ElementoBibliografico::getStatus(){
	return status;
}

//Altas y bajas
void ElementoBibliografico::verStatus(){
	if(status==true){
		cout<<"Activo"<<endl;
	}else{
		cout<<"Inactivo"<<endl;
	}
}

//Imprimir datos
void ElementoBibliografico::imprimirDatos(){
	cout<<"El tipo de material es : "<< tipo << endl;
	cout<<"El codigo del amterial es: "<< codigo << endl;
	cout<<"El autor del material es: "<< autor <<endl;
	cout<<"El titulo del material es: "<< titulo <<endl;
	cout<<"El año de puclicacion es: "<< anio <<endl;
}

#endif
