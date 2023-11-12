#include<iostream>
#include<string.h>

#pragma once
using namespace std;

class Usuario{
	private:
		string nombre;
		string apellido;
		int edad; 
		string correo;
		int telefono;
		int sancion;
		
	public:
		//Constructor 
		Usuario(string,string,int,string,int,int);
		//Setters
		void setNombre(string);
		void setApellido(string);
		void setEdad(int);
		void setCorreo(string);
		void setTelefono(int);
		void setSancion(int);
		
		//Getters
		string getNombre();
		string getApellido();
		int getEdad();
		string getCorreo();
		int getTelefono();
		int getSancion();	
		
};

//Constructor
Usuario::Usuario(string _nombre,string _apellido,int _edad,string _correo,int _telefono,int _sancion){
	nombre = _nombre;
	apellido = _apellido;
	edad = _edad;
	correo = _correo;
	telefono = _telefono;
	sancion = _sancion;
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
void Usuario::setTelefono(int _telefono){
	telefono = _telefono;
}
void Usuario::setSancion(int _sancion){
	sancion = _sancion;
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
int Usuario::getTelefono(){
	return telefono;
}
int Usuario::getSancion(){
	return sancion;
}
