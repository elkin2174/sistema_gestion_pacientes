#include "Paciente.h"

string Paciente::getCodigoPaciente(){
  return this->codigoPaciente; 
}
void Paciente::setCodigoPaciente(string _codigoPaciente){
  this->codigoPaciente = _codigoPaciente;
}
void Paciente::imprimirDatos(){
  Persona::imprimirDatos();
  cout << " Codigo paciente: " << getCodigoPaciente() <<endl;
  cout << "<---------------------------->" << endl;
}