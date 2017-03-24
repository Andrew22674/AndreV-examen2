#include "Zoan.h"

Zoan::Zoan(){

}

Zoan::Zoan(string nombre, string tipo, string animal) : FrutaDD(nombre){
  this -> tipo = tipo;
  this -> animal = animal;
}

Zoan::getTipo(){
  return tipo;
}

Zoan::getAnimal(){
  return animal;
}

Zoan::~Zoan(){

}
