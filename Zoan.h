#pragma once

#include "FrutaDD.h"

class Zoan : public FrutaDD{
private:
  string tipo;
  string animal;
public:
  Zoan();
  Zoan(string, string, string);

  string getTipo();
  string getAnimal();

  virtual ~Zoan();
};
