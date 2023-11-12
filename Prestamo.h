#include<iostream>
#include<string.h>
using namespace std;

class Prestamo{
	private:
		int codigo;
		int idPrestamo;
		string fechaSalida;
		string fechaRegreso;
	public:
		//Constructor
		Prestamo(int,int,string,string);
		//Setters
		void setCodigo(int);
		void setIdPrestamo(int);
		void setFechaSalida(string);
		void setFechaRegreso(string);
		//Getters
		int getCodigo();
		int getIdPrestamo();
		string getFechaSalida();
		string getFechaRegreso();
};
//Constructor
Prestamo::Prestamo(int _codigo,int _idPrestamo,string _fechaSalida,string _fechaRegreso){
	codigo = _codigo;
	idPrestamo = _idPrestamo;
	fechaSalida = _fechaSalida;
	fechaRegreso = _fechaRegreso;
}

//Setters
void Prestamo::setCodigo(int _codigo){
	codigo = _codigo;
}

void Prestamo::setIdPrestamo(int _idPrestamo){
	idPrestamo = _idPrestamo;
}
void Prestamo::setFechaSalida(string _fechaSalida){
	fechaSalida = _fechaSalida;
}
void Prestamo::setFechaRegreso(string _fechaRegreso){
	fechaRegreso = _fechaRegreso;
}

//Getters
int Prestamo::getCodigo(){
	return codigo;
}
int Prestamo::getIdPrestamo(){
	return idPrestamo;
}
string Prestamo::getFechaSalida(){
	return fechaSalida;
}
string Prestamo::getFechaRegreso(){
	return fechaRegreso;
}

