#ifndef USUARIO_H
#define USUARIO_H

#include<iostream>
#include<string.h>

#include "Prestamo.h"
using namespace std;

class Prestamo;  

class Usuario{
	private:
		string nombre;
		string apellido;
		int edad; 
		string correo;
		string telefono;
		Prestamo idPrestamo;
		
	public:
		//Constructor 
		Usuario();
		Usuario(string,string,int,string,string,Prestamo);
		//Setters
		void setNombre(string);
		void setApellido(string);
		void setEdad(int);
		void setCorreo(string);
		void setTelefono(string);
		void setIdPrestamo(Prestamo);
		
		//Getters
		string getNombre();
		string getApellido();
		int getEdad();
		string getCorreo();
		string getTelefono();
		Prestamo getIdPrestamo();
		//Metodos para llevar y dejar libros
	    void llevarElemento(ElementoBibliografico& elemento);
	    void devolverElemento(ElementoBibliografico& elemento);
		//Imprimir datos
		void imprimirDatos();
};

//Constructor
Usuario::Usuario(){
	nombre = "";
	apellido = "";
	edad = 0;
	correo = "";
	telefono = "";
}

Usuario::Usuario(string _nombre,string _apellido,int _edad,string _correo,string _telefono,Prestamo _idPrestamo){
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	correo = _correo;
	telefono = _telefono;
	idPrestamo = _idPrestamo;
}

//Setters
void Usuario::setNombre(string _nombre){
	nombre = _nombre;
}
void Usuario::setApellido(string _apellido){
	apellido = _apellido;
}
void Usuario::setEdad(int _edad){
	edad = _edad;
}
void Usuario::setCorreo(string _correo){
	correo = _correo;
}
void Usuario::setTelefono(string _telefono){
	telefono = _telefono;
}
void Usuario::setIdPrestamo(Prestamo _idPrestamo){
	idPrestamo = _idPrestamo;
}

//Getter

string Usuario::getNombre(){
	return nombre;
}
string Usuario::getApellido(){
	return apellido;
}
int Usuario::getEdad(){
	return edad;
}
string Usuario::getCorreo(){
	return correo;
}
string Usuario::getTelefono(){
	return telefono;
}

Prestamo Usuario::getIdPrestamo(){
	return idPrestamo;
}

//Llevar y dejar libros
void  Usuario::llevarElemento(ElementoBibliografico& elemento){
	if (elemento.getStatus()) {
        elemento.setStatus(false);
        cout << "El usuario " << nombre << " llevo el elemento con codigo " << elemento.getCodigo() <<endl;
    } else {
    	cout << "El elemento con codigo " << elemento.getCodigo() << " no está disponible para prestamo." <<endl;
    }
}

void Usuario::devolverElemento(ElementoBibliografico& elemento){
	if (!elemento.getStatus()) {
		elemento.setStatus(true);
        cout << "El usuario " << nombre << " devolvio el material con codigo " << elemento.getCodigo() <<endl;
    } else {
        cout << "El usuario " << nombre << " no tiene registrado el material con codigo " << elemento.getCodigo() <<endl;
    }
}

//Imprimir datos
void Usuario::imprimirDatos(){
	cout<<"Nombre del usuario: "<< nombre <<endl;
	cout<<"Apellido del usuario: "<< apellido <<endl;
	cout<<"Edad: "<< edad <<endl;
	cout<<"Correo electronico: "<< correo <<endl;
	cout<<"Numero telefonico: "<< telefono <<endl;
	cout<<"ID del prestamo: "<< idPrestamo.getIdPrestamo() <<endl<<endl;
}

#endif
