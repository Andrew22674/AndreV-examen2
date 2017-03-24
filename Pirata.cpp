#include "Pirata.h"

Pirata::Pirata(){

}

Pirata::Pirata(string raza, int edad, string nombre, bool hakiO, bool hakiA, bool hakiR, string oceano, string tripulacion, string funcion)
: Seres(raza, edad, nombre, hakiO, hakiA, hakiR){
  this -> oceano = oceano;
  this -> tripulacion = tripulacion;
  this -> funcion = funcion;
}

string Pirata::getOceano(){
  return oceano;
}

string Pirata::getTripulacion(){
  return tripulacion;
}

string Pirata::getFuncion(){
  return funcion;
}

Pirata::~Pirata(){

}
