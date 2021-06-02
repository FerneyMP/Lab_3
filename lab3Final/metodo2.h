#ifndef METODO2_H
#define METODO2_H

#include "funciones.h"

bool codificacion(int semilla, string nombre, string nombre2); // funcion general para el metodo dos (ejecuta todo) (string)
string conversionTEXT_BIN(string texto); //texto a binario
string conversionINT_BIN(int letra); //entero a binario
string reglas(string binario, int semilla, bool c_d);
string codi_m2(string pedazo);
string deco_m2(string pedazo);
string binario_a_texto(string binario);
char conv_letra(string pedazo);

#endif // METODO2_H
