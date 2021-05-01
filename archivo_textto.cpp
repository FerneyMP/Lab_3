#include "archivo_textto.h"

int menu_entrada()
{
    int funcionalidades;
    leer_menu();
    cout << "Por favor elija una opcipn: " << endl;
    cout << "1. Codificado " << endl;
    cout << "2. Decodificado " << endl;
    //cout << "Por favor elija una opcipn: " << endl;
    //cout << "Por favor elija una opcipn: " << endl;
    cin >> funcionalidades;
    return funcionalidades;
}

void leer_menu()
{
    fstream menu_ent("menu.txt", fstream::in);
    string datos;
    if(menu_ent.is_open()){
        while(!menu_ent.eof()){
            //datos.push_back(menu_ent.get());
            getline(menu_ent,datos);
            cout << datos << endl;
        }
    }
    else cout << "EL archivo no pudo ser abierto.. :/" << endl;
    menu_ent.close();
}
