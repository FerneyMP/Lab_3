#include "funciones.h"
#include "metodo2.h"


int main()
{
    char funcionalidades;
    short int Semilla;
    string nombre_ar, nombre_ar2;
    cout << "              Bienvenido! " << endl;
    leer_menu();
    cout << "Por favor elija una opcion: " << endl;
    cout << "1. Codificado\n2. Decodificado\n3. Cajero " << endl;  cin >> funcionalidades;
    while ((funcionalidades<'1') || (funcionalidades>'3')){
         cout << "El valor no esta permitido, intente nuevamente  " ; cin>>funcionalidades;
    }
    cout<<"Semilla: "<<endl; cin>> Semilla; //validar

    cout<<"Nombre del archivo fuente: "<<endl; cin>> nombre_ar;
    cout<<"Nombre del archivo salida: "<<endl; cin>> nombre_ar2;

    switch (funcionalidades){

     case '1':{                                         //Codificado
     codificacion(Semilla,nombre_ar+".txt",nombre_ar2+".dat");
     break;

        }

    case '2':{                                       //Decodificado
    cout<<"caso1"<<endl;
    decodificacion(Semilla,nombre_ar2+".dat",nombre_ar+".txt");
    break;

      }

    case '3':{          //Cajero
    cout<<"caso1"<<endl;
    break;

         }

       }

    return 0;
}
