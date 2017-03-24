#pragma once
#include "Seres.h"

class Pirata : public Seres{
private:
  string oceano;
  string tripulacion;
  string funcion;

public:
  Pirata();
  Pirata(string, int, string, FrutaDD, bool, bool, bool, string, string);

  string getOceano();
  string getTripulacion();
  string getFuncion();

  virtual ~Pirata();
};
