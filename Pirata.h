#pragma once
#include "Seres.h"

using namespace std;
class Pirata : public Seres{
private:
  string oceano;
  string tripulacion;
  string funcion;

public:
  Pirata(string, int, string, bool, bool, bool, string, string, string);

  string getOceano();
  string getTripulacion();
  string getFuncion();

  void setFruta(FrutaDD);

  virtual ~Pirata();
};
