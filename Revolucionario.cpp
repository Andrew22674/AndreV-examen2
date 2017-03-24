#include "Revolucionario.h"



Revolucionario::Revolucionario(string raza, int edad, string nombre, bool hakiO, bool hakiA, bool hakiR, string fecha) : Seres(raza, edad, nombre, hakiO, hakiA, hakiR){
  this -> fecha = fecha;
}

string Revolucionario::getFecha(){
  return fecha;
}

Revolucionario::~Revolucionario(){

}

void Revolucionario::setFruta(FrutaDD fruit){
  fruta = fruit;
}
