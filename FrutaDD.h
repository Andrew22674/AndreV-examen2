#pragma once

#include <string>

using namespace std;

class FrutaDD{
private:
  string nombre;
public:
  FrutaDD();
  FrutaDD(string);


  string getNombre();

  virtual int idk();
  virtual ~FrutaDD();
};
