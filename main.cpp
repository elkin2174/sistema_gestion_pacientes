#include <iostream>
#include "Medico.h"
int main() {

  Persona* medico =  new Medico("213123","Elkin tovar", 23, "121212");
  medico->imprimirDatos();
}