#ifndef Medico_H
#define Medico_H

#include <iostream>
#include "Persona.h"

class Medico : public Persona{
  private: 
    string licencia;

  public:
    Medico() : Persona(), licencia(""){};
    Medico(string _id, string _nombre, int _edad, string _licencia) : Persona(_id, _nombre, _edad), licencia(_licencia){};

    // Getters
    string getLicencia();

    // Setters
    void setLicencia(string _licencia);

    // Metodos
    void imprimirDatos();
};


#else 
  class Medico;
#endif