#include "Marina.h"


Marina::Marina(string raza, int edad, string nombre, bool hakiO, bool hakiA, bool hakiR, string fecha, string rango) : Seres(raza, edad, nombre, hakiO, hakiA, hakiR){
  this -> fecha = fecha;
  this -> rango = rango;
}

string Marina::getFecha(){
  return fecha;
}

string Marina::getRango(){
  return rango;
}


void Marina::setFruta(FrutaDD fruit){
  fruta = fruit;
}

Marina::~Marina(){

}
