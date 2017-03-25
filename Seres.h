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

  virtual string getRaza();
  virtual int getEdad();
  virtual string getNombre();
  virtual FrutaDD getFruta();
  virtual bool getHakiO();
  virtual bool getHakiA();
  virtual bool getHakiR();


  ~Seres();
};
