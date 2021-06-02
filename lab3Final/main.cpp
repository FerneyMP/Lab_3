#include "funciones.h"
#include "metodo2.h"


int main()
{
    char funcionalidades,menu2;
    short int Semilla;
    string nombre_ar, nombre_ar2;

    cout << "              Bienvenido! " << endl;
    leer_menu();

    cout << "Por favor elija una opcion: " << endl;
    cout << "1. Metodo 1\n2. Metodo 2\n3. Cajero " << endl;  cin >> funcionalidades;
    while ((funcionalidades<'1') || (funcionalidades>'3')){
         cout << "El valor no esta permitido, intente nuevamente  " ; cin>>funcionalidades;
    }

    cout<<"Semilla: "<<endl; cin>> Semilla; //validar

    cout<<"Nombre del archivo fuente: "<<endl; cin>> nombre_ar;
    cout<<"Nombre del archivo salida: "<<endl; cin>> nombre_ar2;

    switch (funcionalidades){

    case '1':{
    cout << "Por favor elija una opcion:\n1. Codificar\n2. Decodificar " << endl;  cin>>menu2;
    while ((menu2<'1') || (menu2>'2')){
         cout << "El valor no esta permitido, intente nuevamente  " ; cin>>menu2;
    }



    break;

        }

    case '2':{
    cout << "Por favor elija una opcion:\n1. Codificar\n2. Decodificar " << endl;  cin>>menu2;
    while ((menu2<'1') || (menu2>'2')){
         cout << "El valor no esta permitido, intente nuevamente  " ; cin>>menu2;
    }

    if (menu2==1)codificacion(Semilla,nombre_ar+".txt",nombre_ar2+".dat");
    decodificacion(Semilla,nombre_ar+".dat",nombre_ar2+".txt");  break;

      }

    case '3':{          //Cajero
    cout<<"caso3"<<endl;
    break;

         }

       }

    return 0;
}
