#ifndef FUNCIONES-JUEGO_H_INCLUDED
#define FUNCIONES-JUEGO_H_INCLUDED

void cargarManual(int v[], int tam);
void mostrarVector(int v[], int tam);
void cargarAleatorio(int v[], int tam, int limite);
int maximoVector(int v[], int tam);
int buscarMaximo(int *, int );
int sumarVector(int v[], int tam );
void pintarlinea(int tam);
void cargarJugador(string usuario, int apuesta);
void lineasHorizontales(int x, int y,int ancho, int alto);
void lineasVerticales(int x, int y, int ancho, int alto);
/*-------------------------------------------------------*/
void cargarManual(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
    cout<<"INGRESE NUMERO: ";
    cin>>v[i];
    }
}
/*-------------------------------------------------------*/
void mostrarVector(int v[], int tam){
    int i;
    for(i=0;i<tam;i++){
    cout<<v[i]<<"\t";
    }
}
/*-------------------------------------------------------*/
void cargarAleatorio(int v[], int tam, int limite){
    int i;
    srand(time(NULL));
    for( i=0; i<tam; i++ ){
        v[i]=(rand()% limite)+1;
    }
}
/*-------------------------------------------------------*/
int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
    if(v[i]>v[posMax]) {
        posMax=i;
    }
}
return v[posMax];
}
/*-------------------------------------------------------*/
int buscarMaximo(int *v, int tam){
    int posMax=0, i;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]){
            posMax=i;
        }
    }
    return posMax;
}
/*-------------------------------------------------------*/
int sumarVector(int v[], int tam ){
    int i, suma=0;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}
/*-------------------------------------------------------*/
void pintarlinea(int tam){
    int i;
    for(i=0; i<tam; i++){
        cout<<"-";
    }
}
/*-------------------------------------------------------*/
void cargarJugador(string usuario, int apuesta){
    gotoxy(2,2);
    cout<<"INGRESA TU NOMBRE: ";
    gotoxy(2,3);
    cin>>usuario;
    system("cls");
    gotoxy(2,2);
    cout<<"DE CUANTO VA A SER TU APUESTA?: ";
    gotoxy(2,3);
    cin>>apuesta;
    system("cls");
    pintarlinea(40);
    cout<<endl;
    cout<<"NOMBRE: " + usuario;
    cout<<"   | APUESTA: "<<apuesta<<endl;
    pintarlinea(40);
}
/*-------------------------------------------------------*/
void lineasHorizontales(int x, int y,int ancho, int alto){
    int i;
    for(i=x; i<=x + ancho; i++){
            gotoxy(i,y);
            cout<< "*"<<endl;
            gotoxy(i,y + alto);
            cout<< "*"<<endl;
    }
}
/*-------------------------------------------------------*/
void lineasVerticales(int x, int y, int ancho, int alto){
            int i;
        for(i=y; i<=y + alto; i++){
            gotoxy(x, i);
            cout<< "*"<<endl;
            gotoxy(x + ancho, i);
            cout<< "*"<<endl;
    }
}
/*-------------------------------------------------------*/

#endif // FUNCIONES-JUEGO_H_INCLUDED
