#include<iostream>
#include<cstdlib>
#include<stdlib.h>
#include<time.h>
#include "rlutil.h"

using namespace std;
#include "funciones-juego.h"


int main(){

    rlutil::setBackgroundColor(rlutil::BLUE);
    string usuario;
    int puntaje = 0, opc, subMenu, apuesta = 0, i,j;
    int vec[5]={0};
    int dados[5]={0};


    while (true){
    system("cls");
        lineasVerticales(2,2,40,9);
        lineasHorizontales(2,2,40,9);
        gotoxy(5,3);
        cout<<"BIENVENIDOS AL JUEGO DEL 20"<<endl<<endl;
        gotoxy(5,5);
        cout<<"1) JUEGO NUEVO PARA UN JUGADOR"<<endl;
        gotoxy(5,6);
        cout<<"2) JUEGO NUEVO PARA DOS JUGADORES"<<endl;
        gotoxy(5,7);
        cout<<"3) MOSTRAR PUNTAJE MAS ALTO"<<endl;
        gotoxy(5,8);
        cout<<"4) MODO SIMULADO"<<endl;
        gotoxy(5,9);
        cout<<"0) FIN DEL PROGRAMA"<<endl;
        gotoxy(5,11);
        cout<<endl;
        cin>>opc;
        system("cls");
        switch (opc){
    case 1:
        cargarJugador(usuario, apuesta);
        cout<<endl;
        for(i=0; i<5;i++){
        cargarAleatorio(vec,5,6);
        mostrarVector(vec,5);
        cout<<endl;
        cout<<endl;
        }
        cout<<"EL VALOR MAS ALTO ES: "<< maximoVector(vec,5)<<endl;

        break;
    case 2:
        cargarJugador(usuario, apuesta);
        cargarAleatorio(vec,5,6);
        mostrarVector(vec,5);
        break;
    case 3:
        cout<<"EL PUNTAJE MAS ALTO ES: "<<puntaje<<endl;
        break;
    case 4:
        cargarManual(vec,5);
        break;
    case 0:
        cout<<"GRACIAS POR USAR NUESTRO PROGRAMA"<<endl;
        return 0;
    }
        system("pause");
    }
    return 0;
}
