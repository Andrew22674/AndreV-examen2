#pragma once

#include <string>

using namespace std;

class FrutaDD{
private:
  string nombre;
public:
  FrutaDD();
  FrutaDD(string);

  virtual string getNombre();

  virtual ~FrutaDD();
};
