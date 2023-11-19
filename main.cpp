#include<iostream>
#include<stdlib.h>

#include "ElementoBibliografico.h"
#include "Usuario.h"
#include "Prestamo.h"

using namespace std;

int main(){
	
	//Creacion de objetos
	ElementoBibliografico objeto1("Libro", 1234, "Augusto", "Las mil letras", 1998, true);
	
	Prestamo prestamo1(objeto1, 1, "1 de Marzo", "10 de Marzo");
	
	Usuario persona1("Jose", "Ramirez", 15, "@correo", 4415247854,prestamo1);
	
	//Imprimir datos
	cout<<"--Inventario de material--"<<endl<<endl;;
	objeto1.imprimirDatos();
	cout<<"El status del material es: ";objeto1.verStatus();cout<<endl;
	
	cout<<"--Registro de prestamos--"<<endl<<endl;;
	prestamo1.imprimirDatos();
	
	cout<<"--Usuarios--"<<endl<<endl;;
	persona1.imprimirDatos();
	
	//Usuario lleva y devuelve elementos
	cout<<"--Usuarios llevando y devolviendo elementos--"<<endl<<endl;;
	persona1.llevarElemento(objeto1);
	
	cout<<"El status actual del material es: ";objeto1.verStatus();cout<<endl;
	
	persona1.devolverElemento(objeto1);
	
	cout<<"El status actual del material es: ";objeto1.verStatus();

	system("pause");
	return 0;
}
