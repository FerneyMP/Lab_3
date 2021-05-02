#include "archivo_textto.h"

// CORREGIR ERROR DE IMPRESIÓN (POSIBLEMENTE CICLO MAYOR A 8 Y DEBE SER <= ..
int main()
{
    //Pruebas de conversión de char a bool

    char c = 'h';
    int *a;
    a=Char_a_bool(c);
    for(int u=0;u<=8;u++) cout << *(a+u) << endl;
    // Fin de prueba.. FUNCIONA

    //Pruebas de conversión de bool a entero

    int b[8]={0,1,1,0,1,0,0,0};
    bool_a_char(b);
    // Finde prueba .. FUNCIONA

    // DESARROLLO DEL PROGRAMA ..

    // ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓

    /*
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
        }*/

    return 0;
}
