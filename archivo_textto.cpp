#include "archivo_textto.h"
//Función tipo entero que proporiona un menú amigable al usuario y retorna una de las opción para el programa.
int menu_entrada()
{
    int funcionalidades;
    cout << "              Bienvenido! " << endl;
    leer_menu();
    cout << "Por favor elija una opcipn: " << endl;
    cout << "1. Codificado " << endl;
    cout << "2. Decodificado " << endl;
    //cout << "Por favor elija una opcipn: " << endl;
    //cout << "Por favor elija una opcipn: " << endl;
    cin >> funcionalidades;
    return funcionalidades;
}


// Función para leer un archivo en específico, dicho archivo imprime en pantalla un menú
void leer_menu()
{
    //Se usa la librería fstream para abrir un archivo en modo lectura..
    fstream menu_ent("menu.txt", fstream::in);
    string datos;
    // Condicional que evalúa si se abre el archivo
    if(menu_ent.is_open()){
        //Ciclo while que recorre todo el archivo linea por linea y la imprime en pantalla
        while(!menu_ent.eof()){
            getline(menu_ent,datos);
            cout << datos << endl;
        }
    }
    else cout << "EL archivo no pudo ser abierto.. :/" << endl;
    //Se cierra el archivo después de haber sido leído
    menu_ent.close();
}

int *Char_a_entero(char *c)
{
    int *change=new int{};
    int *ptr;
    for(int i=0;c[i]!='\0';i++) change[i]=char_entero(c[i]);
    ptr=change;
    for(int j=0;c[j]!='\0';j++) cout << ptr[j] << endl;
    delete change;
    return ptr;
}

int char_entero(char c)
{
    int change;
    change= int(c);
    return change;
}


int *Entero_a_Bool(char *c)
{
    int *puntero;
    puntero = Char_a_entero(c);
    short binario[8];

    //For primario para recorrer la cadena de caracteres..
    //int decimal;
    for(int i=0;c[i]!='\0';i++){
        binario[i] = puntero[i]%2;
        puntero[i]/=2;
    }
    return puntero;
}
