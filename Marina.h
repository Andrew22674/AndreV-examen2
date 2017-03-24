#pragma once
#include "Seres.h"

using namespace std;
class Marina : public Seres{
private:
  string fecha;
  string rango;

public:
  Marina(string, int, string, bool, bool, bool, string, string);

  string getFecha();
  string getRango();

  void setFruta(FrutaDD);

  virtual ~Marina();
};
