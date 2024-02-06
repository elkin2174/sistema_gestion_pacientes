#ifndef Persona_H
#define Persona_H

#include <iostream>



using namespace std;

class Persona{

  private:
    string id, nombre;
    int edad;

  public:
    Persona() : id(""), nombre(""), edad(0){};
    Persona(string _id, string _nombre, int _edad) : id(_id), nombre(_nombre), edad(_edad){};

    //Getters
    string getId();
    string getNombre();
    int getEdad();

    // Setters
    void setId(string _id);
    void setNombre(string _nombre);
    void setEdad(int _edad);

    virtual void imprimirDatos();
};




#else
  class Persona;
#endif