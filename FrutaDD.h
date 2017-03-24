#pragma once

#include <string>

class FrutaDD{
private:
  string nombre;
public:
  FrutaDD();
  FrutaDD(string);

  string getNombre();

  virtual ~FrutaDD();
};
