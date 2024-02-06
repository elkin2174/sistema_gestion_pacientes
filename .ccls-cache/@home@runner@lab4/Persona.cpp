#include "Persona.h"

string Persona::getId(){
  return this->id;
}
string Persona::getNombre(){
  return this->nombre;
}
int Persona::getEdad(){
  return this->edad; 
}

void Persona::setId(string _id){
  this->id = _id;
}
void Persona::setNombre(string _nombre){
  this->nombre = _nombre;
}
void Persona::setEdad(int _edad){
  this->edad = _edad;
}

void Persona::imprimirDatos(){
  cout << "<---------- Datos ----------->" <<endl;
  cout << " Documento: " << getId() << endl;
  cout << " Nombre: " << getNombre() << endl;
  cout << " Edad: " << getEdad() << endl;
  cout << "<---------------------------->" << endl;
}
