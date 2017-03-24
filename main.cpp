#include <iostream>
#include <string>
#include <vector>

#include "Seres.h"
#include "Marina.h"
#include "Pirata.h"
#include "Revolucionario.h"
#include "FrutaDD.h"
#include "Paramecia.h"
#include "Zoan.h"
#include "Logia.h"


using namespace std;

int main(){
  vector<Seres*> seres;
  vector<FrutaDD*> fruta;

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

        cout << "Ingrese edad" << endl
        int edad;
        cin >> edad;

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

          if((fdd == "s" || fdd == "S") && !frutas.empty()){
            cout << "Ingrese index de fruta que desea agregar" << endl;
            int index;
            cin >> index;

            while(index < 0 || index > frutas.size() - 1){
              cout << "Index invalido , ingrese otra fruta" << endl;
              cin >> index;
            }
          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }

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

          Seres* ser = new Marina(/*atributos*/);

        }else if(opcionser == 2){//agregar pirata
          cout << "Tiene fruta del diablo?[s/n]" << endl;
          string fdd;//fruta del diablo
          cin >> fdd;

          if((fdd == "s" || fdd == "S") && !frutas.empty()){
            cout << "Ingrese index de fruta que desea agregar" << endl;
            int index;
            cin >> index;

            while(index < 0 || index > frutas.size() - 1){
              cout << "Index invalido , ingrese otra fruta" << endl;
              cin >> index;
            }
          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }

          if(hakio == "s" || hakio == "S"){
            haki_o = true;
          }
          if(hakia == "s" || hakia == "S"){
            haki_a = true;
          }
          if(hakir == "s" || hakir == "S"){
            haki_r = true;
          }


        }else if(opcionser == 3){//agregar revo
          cout << "Tiene fruta del diablo?[s/n]" << endl;
          string fdd;//fruta del diablo
          cin >> fdd;

          if((fdd == "s" || fdd == "S") && !frutas.empty()){
            cout << "Ingrese index de fruta que desea agregar" << endl;
            int index;
            cin >> index;

            while(index < 0 || index > frutas.size() - 1){
              cout << "Index invalido , ingrese otra fruta" << endl;
              cin >> index;
            }
          }else{
            cout << "No se puede agregar frutas porque aun no ha agregado una" << endl;
          }

          if(hakio == "s" || hakio == "S"){
            haki_o = true;
          }
          if(hakia == "s" || hakia == "S"){
            haki_a = true;
          }
          if(hakir == "s" || hakir == "S"){
            haki_r = true;
          }


        }

      }else if(seguir == 2){//agregar fruta

      }
  }

  return 0;
}
