#pragma once

#include "FrutaDD.h"

class Paramecia : public FrutaDD{
private:
  string descripcion;
public:
  Paramecia();
  Paramecia(string, string);

  string getDescripcion();

  virtual ~Paramecia();
};
