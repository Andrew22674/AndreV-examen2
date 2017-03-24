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
        cin >> raza;

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
          cin >> rango;


          Seres* ser = new Marina(raza, edad, nombre, haki_o, haki_a, haki_r, fecha, rango);

          if((fdd == "s" || fdd == "S") && !frutas.empty()){
            cout << "Ingrese index de fruta que desea agregar" << endl;
            int index;
            cin >> index;

            while(index < 0 || index > frutas.size() - 1){
              cout << "Index invalido , ingrese otra fruta" << endl;
              cin >> index;
            }

            ((Marina*)ser) -> setFruta(*frutas[index]);
          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }
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
          cin >> oceano;

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

            ((Pirata*)ser) -> setFruta(*frutas[index]);
          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }

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
          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }
        }

      }else if(seguir == 2){//agregar fruta

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

  strcpy(filename, "./log_seres/");
  strcat(filename, fmt("%s.log", ser -> getNombre()).c_str());

  stringstream  ss;
  /*ss << "\t\tGameHub\n\nFecha: " << fecha << "\nHora: " << hora << "\nVendedor: " << venta -> getUsuario() << "\nCliente: " << venta -> getNombreCliente() <<"\n\nCantidad de Articulos: "<< venta -> getCantidadArticulos() << "\n\n";


  ss << "\nSubTotal: "<< venta -> getSubtotal() << "\nImpuesto: " << impuesto << "\nTotal: "<< total;*/
  outfile.open(filename, std::ios::app);
  outfile << ss.str();
  outfile.close();

}
