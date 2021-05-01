#include "archivo_textto.h"

int main()
{
    //Pruebas de conversión de char a bool
    /*
    int *ptr = nullptr;
    char cadena[]={"hola"};
    Char_a_entero(cadena);
    Entero_a_Bool(cadena);

    for(int i=0; ptr[i]!='\0'; i++) cout << ptr[i] << endl;
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
