#include<iostream>
#include<stdlib.h>

#include "elementoBiblio.h"
#include "Usuario.h"
#include "Prestamo.h"

using namespace std;

int main(){
	
	//Objetos
	
	ElementoBibliografico objeto1("Libro", 1234, "Augusto", "Las mil letras", 1998, true);
	cout<<"Tipo de material: "<<objeto1.getTipo()<<", Codigo: "<<objeto1.getCodigo()<<", Autor: "<<objeto1.getAutor()<<
	", Titulo: "<<objeto1.getTitulo()<<", Anio: "<<objeto1.getAnio()<<", Status: ";objeto1.verStatus();
	
	Usuario persona1("nombre1", "apellido1", 15, "@correo", 4415247854, 2);
	cout<<endl<<"Nombre: "<<persona1.getNombre()<<", Apellido: "<<persona1.getApellido()<<", Edad: "<<persona1.getEdad()<<
	", Correo: "<<persona1.getCorreo()<<", Numero Telefonico: "<<persona1.getTelefono()<<", Numero de sanciones: "<<persona1.getSancion()<<endl<<endl;
	
	Prestamo prestamo1(1234, 1, "1 de Marzo", "10 de Marzo");
	cout<<"El libro con codigo: "<<prestamo1.getCodigo()<<" fue prestado el dia: "<<prestamo1.getFechaSalida()<<
	" y fue devuleto el dia: "<<prestamo1.getFechaRegreso()<<endl<<endl;
	
	
	system("pause");
	return 0;
}

