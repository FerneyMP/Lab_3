#include "archivo_textto.h"

int main()
{
    //Pruebas de conversión de char a bool
    /*
    char c = 'h';
    int *a;
    a=Char_a_bool(c);
    for(int u=0;u<9;u++) cout << *(a+u) << endl;
    */

    bool opciones = false;
    while (opciones == false)
        switch (menu_entrada()) {
        case 1:
            cout << "Funciona con 1." << endl;
            opciones = true;
            break;
        case 2:
            cout << "Funciona con 2." << endl;
            opciones = true;
            break;
        case 3:
            cout << "Funciona con 3." << endl;
            opciones = true;
            break;
        default:
            cout << "Opcion no valida, intente nuevamente.." << endl;
            opciones = true;
        }

    return 0;
}
