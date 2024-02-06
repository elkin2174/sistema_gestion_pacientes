#include "Medico.h"

string Medico::getLicencia(){
  return this->licencia; 
}
void Medico::setLicencia(string _licencia){
  this->licencia = _licencia;
}
void Medico::imprimirDatos(){
  Persona::imprimirDatos();
  cout << " Licencia Medica: " << getLicencia() <<endl;
  cout << "<---------------------------->" << endl;

}