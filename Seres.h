#pragma once

#include <string>
#include <iostream>
#include "FrutaDD.h"

using namespace std;

class Seres{
private:
  string raza;
  int edad;
  string nombre;
  bool hakiO;
  bool hakiA;
  bool hakiR;

protected:
  FrutaDD fruta;
public:
  Seres();
  Seres(string, int, string, bool, bool, bool);

  string getRaza();
  int getEdad();
  string getNombre();
  FrutaDD getFruta();
  bool getHakiO();
  bool getHakiA();
  bool getHakiR();

  virtual int idk();


  ~Seres();
};
