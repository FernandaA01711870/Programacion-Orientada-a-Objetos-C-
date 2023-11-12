#include <iostream>
#include <string>
using namespace std;

class ElementoBibliografico{
	private:
		string tipo; //Libro, Revista, Periodico, Articulo, etc...
		int codigo;
		string autor;
		string titulo;
		int anio;
		bool status; //True = activo | False = inactivo
	public:
		//Constructor
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
};

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

