#pragma once
#include "Seres.h"

using namespace std;
class Revolucionario : public Seres{
private:
  string fecha;

public:
  Revolucionario();
  Revolucionario(string, int, string, bool, bool, bool, string);

  string getFecha();

  void setFruta(FrutaDD);

  virtual ~Revolucionario();
};
