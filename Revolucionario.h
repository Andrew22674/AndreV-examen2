#pragma once
#include "Seres.h"

class Revolucionario : public Seres{
private:
  string fecha;

public:
  Revolucionario();
  Revolucionario(string, int, string, FrutaDD, bool, bool, bool, string);

  string getFecha();

  virtual ~Revolucionario();
};
