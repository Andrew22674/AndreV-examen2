#pragma once

#include <string>
#include <iostream>
#include "FrutaDD.h";

using namespace std;

class Seres{
private:
  string raza;
  int edad;
  string nombre;
  FrutaDD fruta;
  bool hakiO;
  bool hakiA;
  bool hakiR;

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

  void setFruta(FrutaDD);

  virtual ~Seres();
};
