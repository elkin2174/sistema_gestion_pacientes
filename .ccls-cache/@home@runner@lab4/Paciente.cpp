#include "Paciente.h"

string Paciente::getCodigoPaciente(){
  return this->codigoPaciente; 
}
void Paciente::setCodigoPaciente(string _codigoP){
  this->codigoPaciente = _codigoP;
}
void Paciente::imprimirDatos(){
  Persona::imprimirDatos();
  cout << " Codigo paciente: " << getCodigoPaciente() <<endl;
  cout << "<---------------------------->" << endl;

}