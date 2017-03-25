#include <iostream>
#include <string>
#include <vector>

#include <ctime>
#include <string.h>
#include <cstdarg>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <typeinfo>
#include <sys/stat.h>

#include "Seres.h"
#include "Marina.h"
#include "Pirata.h"
#include "Revolucionario.h"
#include "FrutaDD.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"


using namespace std;


string fmt(const std::string& fmt, ...) {

    int size = 200;
    string str;
    va_list ap;
    while (1) {
        str.resize(size);
        va_start(ap, fmt);
        int n = vsnprintf((char*)str.c_str(), size, fmt.c_str(), ap);
        va_end(ap);
        if (n > -1 && n < size) {
            str.resize(n);
            return str;
        }
        if (n > -1)
            size = n + 1;
        else
            size *= 2;
    }
    return str;
}

void crearLog(Seres*);

int main(){
  vector<Seres*> seres;
  vector<FrutaDD*> frutas;

  int seguir = 0;

  while(seguir != 3){
      cout << "MENU" << endl <<
      "1. Agregar ser" << endl <<
      "2. Agregar fruta" << endl <<
      "3. Salir" << endl;

      cin >> seguir;

      if(seguir == 1){
        cout << "1. Agregar Marina" << endl <<
        "2. Agregar Pirata" << endl <<
        "3. Agregar Revolucionario" << endl;

        int opcionser;

        cin >> opcionser;

        cout << "Ingrese raza" << endl;
        string raza;

        //gyojin, kyojin, ningyo, humano, mink o skypieans
        cout << "1. Gyojin" << endl <<
        "2. Kyojin" << endl <<
        "3. Ningyo" << endl <<
        "4. Humano" << endl <<
        "5. Mink" << endl <<
        "6. Skypieans" << endl;

        int opcionraza;
        cin >> opcionraza;

        if(opcionraza == 1){
          raza = "Gyojin";
        }else if(opcionraza == 2){
          raza = "Kyojin";
        }else if(opcionraza == 3){
          raza = "Ningyo";
        }else if(opcionraza == 4){
          raza = "Humano";
        }else if(opcionraza == 5){
          raza = "Mink";
        }else if(opcionraza == 6){
          raza = "Skypieans";
        }

        cout << "Ingrese edad" << endl;
        int edad;
        cin >> edad;

        cout << "Ingrese nombre" << endl;
        string nombre;
        cin.ignore();
        getline(cin, nombre);

        cout << "Tiene haki de observacion?[s/n]" << endl;
        string hakio;
        cin >> hakio;

        cout << "Tiene haki de armadura?[s/n]" << endl;
        string hakia;
        cin >> hakia;

        cout << "Tiene haki del rey?[s/n]" << endl;
        string hakir;
        cin >> hakir;

        bool haki_o;
        bool haki_a;
        bool haki_r;

        if(opcionser == 1){//agregar marina
          cout << "Tiene fruta del diablo?[s/n]" << endl;
          string fdd;//fruta del diablo
          cin >> fdd;

          if(hakio == "s" || hakio == "S"){
            haki_o = true;
          }
          if(hakia == "s" || hakia == "S"){
            haki_a = true;
          }
          if(hakir == "s" || hakir == "S"){
            haki_r = true;
          }

          string fecha;
          string rango;

          cout << "Ingrese fecha" << endl;
          cin.ignore();
          getline(cin, fecha);

          cout << "Ingrese rango" << endl;

          //cadete, teniente, vice-almirante, almirante y almirante de flota

          cout << "1. Cadete" << endl <<
          "2. Teniente" << endl <<
          "3. Vice-almirante" << endl <<
          "4. Almirante" << endl <<
          "5. Almirante de flota" << endl;

          int opcionrango;
          cin >> opcionrango;

          if(opcionrango == 1){
            rango = "Cadete";
          }else if(opcionrango == 2){
            rango = "Teniente";
          }else if(opcionrango == 3){
            rango = "Vice-almirante";
          }else if(opcionrango == 4){
            rango = "Almirante";
          }else if(opcionrango == 5){
            rango = "Almirante de flota";
          }


          Seres* ser = new Marina(raza, edad, nombre, haki_o, haki_a, haki_r, fecha, rango);

          if((fdd == "s" || fdd == "S") && !frutas.empty()){
            cout << "Ingrese index de fruta que desea agregar" << endl;
            int index;
            cin >> index;

            while(index < 0 || index > frutas.size() - 1){
              cout << "Index invalido , ingrese otra fruta" << endl;
              cin >> index;
            }

            ((Revolucionario*)ser) -> setFruta(*frutas[index]);
            frutas.erase(frutas.begin() + index);
          }else if(fdd == "n" || fdd == "N"){

          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }

          seres.push_back(ser);
        }else if(opcionser == 2){//agregar pirata
          cout << "Tiene fruta del diablo?[s/n]" << endl;
          string fdd;//fruta del diablo
          cin >> fdd;

          if(hakio == "s" || hakio == "S"){
            haki_o = true;
          }
          if(hakia == "s" || hakia == "S"){
            haki_a = true;
          }
          if(hakir == "s" || hakir == "S"){
            haki_r = true;
          }

          cout << "Ingrese oceano" << endl;
          string oceano;

          int opcionoceano;
          //east,   west,   south,   north , blue, grand line y new world
          cout << "1. East" << endl <<
          "2. West" << endl <<
          "3. South" << endl <<
          "4. North" << endl <<
          "5. Blue" << endl <<
          "6. Grand Line" << endl <<
          "7. New World" << endl;

          cin >> opcionoceano;

          if(opcionoceano == 1){
            oceano = "East";
          }else if(opcionoceano == 2){
            oceano = "West";
          }else if(opcionoceano == 3){
            oceano = "South";
          }else if(opcionoceano == 4){
            oceano = "North";
          }else if(opcionoceano == 5){
            oceano = "Blue";
          }else if(opcionoceano == 6){
            oceano = "Grand Line";
          }else if(opcionoceano == 7){
            oceano = "New World";
          }

          cout << "Ingrese tripulacion a la que pertenece" << endl;
          string tripulacion;
          cin >> tripulacion;

          cout << "Ingrese funcion" << endl;
          string funcion;
          cin >> funcion;

          Seres* ser = new Pirata(raza, edad, nombre, haki_o, haki_a, haki_r, oceano, tripulacion, funcion);

          if((fdd == "s" || fdd == "S") && !frutas.empty()){
            cout << "Ingrese index de fruta que desea agregar" << endl;
            int index;
            cin >> index;

            while(index < 0 || index > frutas.size() - 1){
              cout << "Index invalido , ingrese otra fruta" << endl;
              cin >> index;
            }

            ((Revolucionario*)ser) -> setFruta(*frutas[index]);
            frutas.erase(frutas.begin() + index);
          }else if(fdd == "n" || fdd == "N"){

          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }

          seres.push_back(ser);

        }else if(opcionser == 3){//agregar revo
          cout << "Tiene fruta del diablo?[s/n]" << endl;
          string fdd;//fruta del diablo
          cin >> fdd;

          if(hakio == "s" || hakio == "S"){
            haki_o = true;
          }
          if(hakia == "s" || hakia == "S"){
            haki_a = true;
          }
          if(hakir == "s" || hakir == "S"){
            haki_r = true;
          }

          cout << "Ingrese fecha" << endl;
          string fecha;
          cin >> fecha;

          Seres* ser = new Revolucionario(raza, edad, nombre, haki_o, haki_a, haki_r, fecha);

          if((fdd == "s" || fdd == "S") && !frutas.empty()){
            cout << "Ingrese index de fruta que desea agregar" << endl;
            int index;
            cin >> index;

            while(index < 0 || index > frutas.size() - 1){
              cout << "Index invalido , ingrese otra fruta" << endl;
              cin >> index;
            }

            ((Revolucionario*)ser) -> setFruta(*frutas[index]);
            frutas.erase(frutas.begin() + index);
          }else if(fdd == "n" || fdd == "N"){

          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }

          seres.push_back(ser);
        }
        crearLog(seres.back());

      }else if(seguir == 2){//agregar fruta
        cout << "1. Paramecia" << endl <<
        "2. Zoan" << endl <<
        "3. Logia" << endl;

        int opcionfruta;
        cin >> opcionfruta;

        string nombre;
        cin.ignore();
        getline(cin, nombre);
        if(opcionfruta == 1){
          cout << "Ingrese descripcion: " << endl;
          string descripcion;
          cin.ignore();
          getline(cin, descripcion);

          frutas.push_back(new Paramecia(nombre, descripcion));
        }else if(opcionfruta == 2){
          cout << "Ingrese tipo" << endl;
          cout << "1. Normal" << endl <<
          "2. Prehistorica" << endl <<
          "3. Legendaria" << endl;

          int opciontipo;
          cin >> opciontipo;

          string tipo;

          if(opciontipo == 1){
            tipo = "Normal";
          }else if(opciontipo == 2){
            tipo = "Prehistorica";
          }else if(opciontipo == 3){
            tipo = "Legendaria";
          }

          cout << "Ingrese animal" << endl;
          string animal;
          cin >> animal;

          frutas.push_back(new Zoan(nombre, tipo, animal));
        }else if(opcionfruta == 3){
          cout << "Ingrese elemento" << endl;
          string elemento;
          cin >> elemento;

          frutas.push_back(new Logia(nombre, elemento));
        }
      }
  }

  return 0;
}


void crearLog(Seres* ser){
  ofstream outfile;
  /*time_t currentTime = time(0);
  tm* currentDate = localtime(&currentTime);*/
  char filename[256] = {0};

  try{
    const int directorio = system("mkdir -p ./log_seres");//-p es para crear directorio solo si no existe
  } catch (...) {

  }

  strcpy(filename, "./log_seres/log.log");
  //strcat(filename, fmt("%s.log", ser -> getNombre()).c_str());

  stringstream  ss;

  if(typeid(*ser).name() == typeid(Marina).name()){
    ss << " Raza: " << ser -> getRaza() << "\n Edad: " << ser -> getEdad() << "\n Nombre: " << ser -> getNombre();

    //if(ser -> getFruta() != NULL){
      if(typeid(ser -> getFruta()).name() == typeid(Paramecia).name()){
        //Paramecia* p = new Paramecia(ser -> getFruta().getNombre(), )
        //ss << "\n\tNombre de fruta: " << ser -> getFruta().getNombre() /*<< "\n\tDescripcion: " <<  p.getDescripcion()*/;
      }else if(typeid(ser -> getFruta()).name() == typeid(Zoan).name()){

      }else if(typeid(ser -> getFruta()).name() == typeid(Logia).name()){

      }
  //  }
  }else if(typeid(*ser).name() == typeid(Pirata).name()){

  }else if(typeid(*ser).name() == typeid(Revolucionario).name()){

  }

  ss << "\n Haki de observacion: ";
  if(ser -> getHakiO() == true){
    ss << "Si tiene";
  }else{
    ss << "No tiene";
  }

  ss << "\n Haki de armadura: ";
  if(ser -> getHakiA() == true){
    ss << "Si tiene";
  }else{
    ss << "No tiene";
  }

  ss << "\n Haki del rey: ";
  if(ser -> getHakiR() == true){
    ss << "Si tiene";
  }else{
    ss << "No tiene";
  }
  //ss << "\t\tGameHub\n\nFecha: " << fecha << "\nHora: " << hora << "\nVendedor: " << venta -> getUsuario() << "\nCliente: " << venta -> getNombreCliente() <<"\n\nCantidad de Articulos: "<< venta -> getCantidadArticulos() << "\n\n";


  outfile.open(filename, std::ios::app);
  outfile << ss.str();
  outfile.close();

}
