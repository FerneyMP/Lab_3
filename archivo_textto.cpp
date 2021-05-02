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

//Función que recibe un caracter(en su representación ASCII) y lo convierte en número binario
int *Char_a_bool(char c)
{
    int change;
    int *ptr;
    //int *retorno=new int;  ----> Usar?
    change = int(c); // -> Para convertir el caracter en entero..
    int binario[8]={0,0,0,0,0,0,0,0};
    //For que convierte el caracter ingresado en un número binario mediante divisiones sucesivas
    for(int i=0;i<=8;i++){
        binario[i] = change%2;
        change/=2;
    }

    //Incluir la función que invierte...
    ptr = invertir_binario(binario);
    return ptr;
}

//Función que invierte el arreglo de binarios ..
int *invertir_binario(int b[])
{
    static int invertido[8]={0,0,0,0,0,0,0,0};
    int contador=0;
    //ciclo For que invierte las posciones del número binario
    for(int retorno=7; retorno>=0; retorno--){
        invertido[contador]=b[retorno];
        contador++;
    }
    return invertido;
}

//Función que recibe un número binario y lo convierte en caracter(representación ASCII)
int bool_a_char(int b[])
{
    int potencia=0, acumulador=0, *ptr;

    // Incluir la función que invierte...
    ptr = invertir_binario(b);

    // Ciclo for que multiplica cada posición del arreglo binario por potencias de 2
    //ascendentemente, además, suma cada posición del arreglo ya multiplicado y le da la
    //representación ASCII del caracter en cuestión
    for(int i=0; i<=8; i++){
        ptr[i]= ptr[i]*pow(2,potencia);
        potencia++;
        acumulador += ptr[i];
    }
    cout << acumulador << endl;
    return acumulador;
}




