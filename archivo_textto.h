#ifndef ARCHIVO_TEXTTO_H
#define ARCHIVO_TEXTTO_H
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int menu_entrada();
void leer_menu();

//idea: función que crea un archivo txt y codifica la información ... aún por desarrollar.
void creacion_codificado();

//idea: función para convertir un caracter(representación ASCII) a un número binario ... preguntar si está correcto...
int *Char_a_bool(char c);

//idea: función que invierte las posiciones de un arreglo binario
int *invertir_binario(int b[]);

//idea: función para convertir un número binario a un caracter(representación ASCII)..
int bool_a_char(int b[]);

//seguir desarollando los prototipos hacia abajo ..
// ↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓

#endif // ARCHIVO_TEXTTO_H
