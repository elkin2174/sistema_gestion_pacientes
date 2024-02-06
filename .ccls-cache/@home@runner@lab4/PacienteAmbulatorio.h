#ifndef PacienteAmbulatorio_H
#define PacienteAmbulatorio_H

#include "Paciente.h"
#include "CitaMedica.h"

using namespace std;

class PacienteAmbulatorio : public Paciente{
  private:
    string fechaCita ;
  public:
    PacienteAmbulatorio() : Paciente(), fechaCita(""){};
    PacienteAmbulatorio(string _id, string _nombre, int _edad, string _codigoPaciente, string _fechaCita) : Paciente(_id, _nombre, _edad,  _codigoPaciente), fechaCita(_fechaCita){};

    // Getters
    string getCodigoPaciente();

    // Setters
    void setCodigoPaciente(string _codigoPaciente);

    // Metodos
    void imprimirDatos();
    void costoConsulta();
    CitaMedica* genetarConsulta();

};




#else 
  class Paciente;
#endif