#pragma once

#include "FrutaDD.h"

class Logia : public FrutaDD{
private:
  string elemento;
public:
  Logia();
  Logia(string, string);

  string getElemento();

  virtual ~Logia();
};
