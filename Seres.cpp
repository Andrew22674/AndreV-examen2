#include "Seres.h"

Seres::Seres(){
  edad = 0;
}

Seres::Seres(string raza, int edad, string nombre, bool hakiO, bool hakiA, bool hakiR){
  this -> raza = raza;
  this -> edad = edad;
  this -> nombre = nombre;
  this -> hakiO = hakiO;
  this -> hakiA = hakiA;
  this -> hakiR = hakiR;
}

string Seres::getRaza(){
  return raza;
}

int Seres::getEdad(){
  return edad;
}

string Seres::getNombre(){
  return nombre;
}

FrutaDD Seres::getFruta(){
  return fruta;
}

bool Seres::getHakiO(){
  return hakiO;
}

bool Seres::getHakiA(){
  return hakiA;
}

bool Seres::getHakiR(){
  return hakiR;
}

Seres::~Seres(){

}
