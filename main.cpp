#include<iostream>
#include<stdlib.h>

#include "ElementoBibliografico.h"
#include "Libro.h"
#include "Diccionario.h"
#include "Enciclopedia.h"
#include "Usuario.h"
#include "Prestamo.h"

using namespace std;

int main(){
	
	//Creacion de objetos
	
	//Libro
	Libro* libro1 = new Libro("Libro", 1234, "Augusto", "Las mil letras", 1998, true, "valdovinos", "QTYDS7219S"); 
	Prestamo prestamo1(1, "1 de Marzo", "10 de Marzo");
	prestamo1.agregarElementos(libro1); //Uso del metod de agregacion
	Usuario persona1("Jose", "Ramirez", 15, "@correo", "4415247854", prestamo1);
	
	//Diccionario
	Diccionario* diccionario1 = new Diccionario("Diccionario", 7645, "Lewis", "Diccionario de ingles", 2000, false, "ingles");
	Prestamo prestamo2(2, "3 de diciembre", "12 de diciembre");
	prestamo2.agregarElementos(diccionario1);
	Usuario persona2("Miriam", "Garcia", 23, "@MiriamJos", "4424576724", prestamo2);
	
	//Enciclopedia
	Enciclopedia* enciclopedia1 = new Enciclopedia("Enciclopedia", 2345, "Darwin", "Enciclopedia de animales", 1789, true, "12 edicion", "volumen 3");
	Prestamo prestamo3(3, "12 de enero", "15 de febrero");
	prestamo3.agregarElementos(enciclopedia1);
	Usuario persona3("Roberto", "Serna", 19, "@rob", "234557718", prestamo3);
	
	//Imprimir datos
	cout<<"--Inventario de material--"<<endl<<endl; //Inventario del material
	
	//Elementos: Libros
	libro1->imprimirDatos();
	cout<<"El status del material es: ";
	libro1->verStatus();cout<<endl;
	
	//Elementos: Diccionario
	diccionario1->imprimirDatos();
	cout<<"El status del material es: ";
	diccionario1->verStatus();cout<<endl;
	
	//Elementos: Enciclopedia
	enciclopedia1->imprimirDatos();
	cout<<"El status del material es: ";
	enciclopedia1->verStatus();cout<<endl<<endl;
	
	cout<<"--Registro de prestamos--"<<endl<<endl;
	
	prestamo1.imprimirDatos();
	prestamo2.imprimirDatos();
	prestamo3.imprimirDatos();
	
	cout<<"--Usuarios--"<<endl<<endl;
	
	persona1.imprimirDatos();
	persona2.imprimirDatos();
	persona3.imprimirDatos();
	
	//Usuario lleva y devuelve elementos
	cout<<"--Usuarios llevando y devolviendo elementos--"<<endl<<endl;
	
	//Prestamo 1
	persona1.llevarElemento(*libro1);
	cout<<"El status actual del material es: ";
	libro1->verStatus();
	persona1.devolverElemento(*libro1);
	cout<<"El status actual del material es: ";
	libro1->verStatus();
	
	cout<<endl;
	
	//Prestamo 2
	persona2.llevarElemento(*diccionario1);
	cout<<"El status actual del material es: ";
	diccionario1->verStatus();
	persona2.devolverElemento(*diccionario1);
	cout<<"El status actual del material es: ";
	diccionario1->verStatus();
	
	cout<<endl;
	
	//Prestamo 3
	persona3.llevarElemento(*enciclopedia1);
	cout<<"El status actual del material es: ";
	enciclopedia1->verStatus();
	persona3.devolverElemento(*enciclopedia1);
	cout<<"El status actual del material es: ";
	diccionario1->verStatus();
	
	cout<<endl;
	
	system("pause");
	return 0;
}
