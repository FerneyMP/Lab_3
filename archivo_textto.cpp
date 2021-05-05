#include "archivo_textto.h"
//fstream lectura, escritura

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
    for(int i=0;i<=7;i++){
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
    char resultado;

    // Incluir la función que invierte...
    ptr = invertir_binario(b);

    // Ciclo for que multiplica cada posición del arreglo binario por potencias de 2
    //ascendentemente, además, suma cada posición del arreglo ya multiplicado y le da la
    //representación ASCII del caracter en cuestión
    for(int i=0; i<=7; i++){
        ptr[i]= ptr[i]*pow(2,potencia);
        potencia++;
        acumulador += ptr[i];
    }
    resultado = char(acumulador);
    cout << acumulador << endl;
    cout << resultado << endl;
    return acumulador;
}


void leer_archivo(string name)
{

    //----> FASE 1: Lectura del archivo

    long long int tamanio = 0;
    //int contador_bits=0, semilla;
    int conteo=0, conteo2=0;
    string datos;
    fstream natural(name+".txt", fstream::in);
    int *parte1;

    //----> FASE 3:
    fstream PRUEBA("prueba.txt", fstream::out);

    //cout << "Ingrese el valor de la semilla: "; cin >> semilla;
    if(natural.is_open()){
        cout << "\nEl archivo ha sido abierto correctamente.." << endl << endl;
        while(!natural.eof()){
            tamanio = natural.tellg();
            datos.push_back(natural.get());
        }
        datos.pop_back();
    }
    else cout << name << +".txt no pudo ser abierto, puede que no exista dicho archivo o haya un error de redaccion.." << endl;


    //----> FASE 2: Conversión del archivo en binario

    //idea: por cada iteración en el ciclo, invocar la función caracter a entero, luego entero a bool e ir escribiendo sobre
    // el archivo ...... idea2: un arreglo que almacene strings .....
    while(conteo <= tamanio-1){
        for (int i=0; i<=7; i++){
            parte1= Char_a_bool(datos[conteo2]); //imprime 0 y debería ser la posición 0 del arreglo
            //hasta este parte1, se convierte el dato string, traído del archivo y convierte cada caracter a binario ..

            cout << *(parte1+i);


            //----> FASE 3:
            PRUEBA << *(parte1+i);
        }
        //cout << endl;
        conteo++;
        conteo2++;
    }
    natural.close();
    PRUEBA.close();


    //cout << datos << endl;
    //cout << "El tamanio es: " << tamanio << endl;
}


//ideas parte2
//int *parte2= new int[8]{};
// esto dentro del for ....
//parte2[i]=*parte1;
//bool_a_char(parte2);
//HABILITAR PARTE2, PARA SEGUIR TRABAJANDO MÁS ADELANTE. DEBO MEJORAR ESTA PARTE DEL ALGORITMO
