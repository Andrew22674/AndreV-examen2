#include "Logia.h"

Logia::Logia(){

}

Logia::Logia(string nombre, string elemento) : FrutaDD(nombre){
  this -> elemento = elemento;
}

Logia::getElemento(){
  return elemento;
}

Logia::~Logia(){

}
