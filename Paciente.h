#ifndef Paciente_H
#define Paciente_H

#include "Persona.h"

using namespace std;

class Paciente : public Persona{
  private:
    string codigoPaciente;
  public:
    Paciente() : Persona(), codigoPaciente(""){};
    Paciente(string _id, string _nombre, int _edad, string _codigoPaciente) : Persona(_id, _nombre, _edad), codigoPaciente(_codigoPaciente){};

    // Getters
    string getCodigoPaciente();

    // Setters
    void setCodigoPaciente(string _codigoPaciente);

    // Metodos
    void imprimirDatos();

};




#else 
  class Paciente;
#endif