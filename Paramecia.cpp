#include "Paramecia.h"

Paramecia::Paramecia(){

}

Paramecia::Paramecia(string nombre, string descripcion) : FrutaDD(nombre){
  this -> descripcion = descripcion;
}

Paramecia::getDescripcion(){
  return descripcion;
}

Paramecia::~Paramecia(){

}
