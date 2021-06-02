#include "funciones.h"

int main()
{
    char funcionalidades;
    cout << "              Bienvenido! " << endl;
    leer_menu();
    cout << "Por favor elija una opcion: " << endl;
    cout << "1. Codificado\n2. Decodificado\n3. Cajero " << endl;  cin >> funcionalidades;
    while ((funcionalidades<'1') || (funcionalidades>'3')){
         cout << "El valor no esta permitido, intente nuevamente  " ; cin>>funcionalidades;
    }

    return 0;
}
