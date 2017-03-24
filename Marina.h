#pragma once
#include "Seres.h"

class Marina : public Seres{
private:
  string fecha;
  string rango;

public:
  Marina();
  Marina(string, int, string, FrutaDD, bool, bool, bool, string, string);

  string getFecha();
  string getRango();

  virtual ~Marina();
};
