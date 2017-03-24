#include "Zoan.h"

Zoan::Zoan(){

}

Zoan::Zoan(string nombre, string tipo, string animal) : FrutaDD(nombre){
  this -> tipo = tipo;
  this -> animal = animal;
}

string Zoan::getTipo(){
  return tipo;
}

string Zoan::getAnimal(){
  return animal;
}

Zoan::~Zoan(){

}
