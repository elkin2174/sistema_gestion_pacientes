#include <iostream>
#include "Paciente.h"
int main() {

  Persona* medico =  new Paciente("213123","Elkin tovar", 23, "121212");
  medico->imprimirDatos();
}