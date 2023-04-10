 /*Hecho por: Viviana Davis y Gabriela Garcia*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

//VARIABLES GLOBALES
char nomb1[100], nomb2[100];

void convertirNumero(char num, int *nu){

    if(num=='0'){
        *nu=0;
    }
    else if(num=='1'){
        *nu= 1;
    }
    else if(num=='2'){
        *nu= 2;
    }
    else if(num=='3'){
        *nu= 3;
    }
    else if(num=='4'){
        *nu= 4;
    }
    else if(num=='5'){
        *nu= 5;
    }
    else if(num=='6'){
        *nu= 6;
    }
    else if(num=='7'){
        *nu= 7;
    }
    else if(num=='8'){
        *nu= 8;
    }
    else if(num=='9'){
        *nu= 9;
    }
}
void primeraDesicion(char jugandi[][9], int *tibarco, int *ctbarco, int *totalb, int *fila, int *columna){

    //Primeras desiciones segun el tipo de barco
    if(*tibarco==1){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila][*columna+1]=='~'&& jugandi[*fila][*columna+2]=='~'&& jugandi[*fila][*columna+3]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila][*columna + 1]= 'O';
            jugandi[*fila][*columna + 2]= 'O';
            jugandi[*fila][*columna + 3]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila][*columna+1]!='~'|| jugandi[*fila][*columna+2]!='~'|| jugandi[*fila][*columna+3]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;

        }

    }
    else if(*tibarco==2){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila][*columna+1]=='~'&& jugandi[*fila][*columna+2]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila][*columna + 1]= 'O';
            jugandi[*fila][*columna + 2]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila][*columna+1]!='~'|| jugandi[*fila][*columna+2]!='~'){

            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;
        }

    }
    else if(*tibarco==3){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila][*columna+1]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila][*columna + 1]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila][*columna+1]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;
        }

    }
}
void segundaDesicion(char jugandi[][9], int *tibarco, int *ctbarco, int *totalb, int *fila, int *columna){
    //Segundas desiciones segun el tipo de barco
    if(*tibarco==1){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila][*columna-1]=='~'&& jugandi[*fila][*columna-2]=='~'&& jugandi[*fila][*columna-3]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila][*columna - 1]= 'O';
            jugandi[*fila][*columna - 2]= 'O';
            jugandi[*fila][*columna - 3]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb + 1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila][*columna-1]!='~'|| jugandi[*fila][*columna-2]!='~'|| jugandi[*fila][*columna-3]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;

        }
    }
    else if(*tibarco==2){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila][*columna-1]=='~'&& jugandi[*fila][*columna-2]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila][*columna - 1]= 'O';
            jugandi[*fila][*columna - 2]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb + 1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila][*columna-1]!='~'|| jugandi[*fila][*columna-2]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;

        }

    }
    else if(*tibarco==3){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila][*columna-1]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila][*columna - 1]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila][*columna-1]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;

        }

    }
}
void terceraDesicion(char jugandi[][9], int *tibarco, int *ctbarco, int *totalb, int *fila, int *columna){

    if(*tibarco==1){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila-1][*columna]=='~'&& jugandi[*fila-2][*columna]=='~'&& jugandi[*fila-3][*columna]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila-1][*columna]= 'O';
            jugandi[*fila-2][*columna]= 'O';
            jugandi[*fila-3][*columna]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila-1][*columna]!='~'|| jugandi[*fila-2][*columna]!='~'|| jugandi[*fila-3][*columna]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;

        }
    }
    else if(*tibarco==2){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila-1][*columna]=='~'&& jugandi[*fila-2][*columna]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila-1][*columna]= 'O';
            jugandi[*fila-2][*columna]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila-1][*columna]!='~'|| jugandi[*fila-2][*columna]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;
        }
    }
    else if(*tibarco==3){

        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila-1][*columna]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila-1][*columna]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila-1][*columna]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;
        }
    }
}
void cuartaDesicion(char jugandi[][9], int *tibarco, int *ctbarco, int *totalb, int *fila, int *columna){

    if(*tibarco==1){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila+1][*columna]=='~'&& jugandi[*fila+2][*columna]=='~'&& jugandi[*fila+3][*columna]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila+1][*columna]= 'O';
            jugandi[*fila+2][*columna]= 'O';
            jugandi[*fila+3][*columna]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;
        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila+1][*columna]!='~'|| jugandi[*fila+2][*columna]!='~'|| jugandi[*fila+3][*columna]!='~'){
            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;
        }

    }
    else if(*tibarco==2){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila+1][*columna]=='~'&& jugandi[*fila+2][*columna]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila+1][*columna]= 'O';
            jugandi[*fila+2][*columna]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb+1;

        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila+1][*columna]!='~'|| jugandi[*fila+2][*columna]!='~'){

            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;
        }
    }
    else if(*tibarco==3){
        if(jugandi[*fila][*columna]== '~'&& jugandi[*fila+1][*columna]=='~'){
            jugandi[*fila][*columna]= 'O';
            jugandi[*fila+1][*columna]= 'O';

            *ctbarco= *ctbarco - 1;
            *totalb= *totalb + 1;

        }
        else if(jugandi[*fila][*columna]!= '~'|| jugandi[*fila+1][*columna]!='~'){

            printf("\nLo siento, esta coordenada esta ocupada :(\n");

            *ctbarco= *ctbarco;
            *totalb= *totalb;

        }
    }
}
void primerIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){

    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n1. Hacia la derecha");
    printf("\n4. Hacia abajo");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='1' && dess !='4'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }

    convertirNumero(dess, &desi);
    tbarco= *dibarco;

    if(desi==1){
        primeraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==4){
        cuartaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void segundoIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){
    int desi, tbarco,cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n1. Hacia la derecha");
    printf("\n3. Hacia arriba");
    printf("\n4. Hacia abajo");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='1' && dess!='3' && dess!='4'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }

    convertirNumero(dess, &desi);
    tbarco= *dibarco;

    if(desi==1){
        primeraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==3){
        terceraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==4){
        cuartaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void tercerIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){
    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n1. Hacia la derecha");
    printf("\n3. Hacia arriba");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='1' && dess!='3'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }
    convertirNumero(dess, &desi);

    tbarco= *dibarco;

    if(desi==1){
        primeraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==3){
        terceraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void cuartoIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){

    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n1. Hacia la derecha");
    printf("\n2. Hacia la izquierda");
    printf("\n4. Hacia abajo");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='1' && dess!='2' && dess !='4'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }
    convertirNumero(dess, &desi);
    tbarco= *dibarco;

    if(desi==1){
        primeraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==2){
        segundaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==4){
        cuartaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    *cantb= cbar;
    *bartot= totb;
}
void quintoIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){
    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n1. Hacia la derecha");
    printf("\n2. Hacia la izquierda");
    printf("\n3. Hacia arriba");
    printf("\n4. Hacia abajo");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='1' && dess!='2' && dess!='3' && dess !='4'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }

    convertirNumero(dess, &desi);

    tbarco= *dibarco;

    if(desi==1){
        primeraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==2){
        segundaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==3){
        terceraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==4){
        cuartaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void sextoIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){

    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n1. Hacia la derecha");
    printf("\n2. Hacia la izquierda");
    printf("\n3. Hacia arriba");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='1' && dess!='2' && dess !='3'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }

    convertirNumero(dess, &desi);
    tbarco= *dibarco;

    if(desi==1){
        primeraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==2){
        segundaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==3){
        terceraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void septimoIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){

    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n2. Hacia la izquierda");
    printf("\n4. Hacia abajo");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='2' && dess!='4'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }

    convertirNumero(dess, &desi);
    tbarco= *dibarco;

    if(desi==2){
        segundaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==4){
        cuartaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void octavoIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){

    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n2. Hacia la izquierda");
    printf("\n3. Hacia arriba");
    printf("\n4. Hacia abajo");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='2' && dess!='3' && dess!='4'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }

    convertirNumero(dess, &desi);
    tbarco= *dibarco;

    if(desi==2){
        segundaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);

    }
    else if(desi==3){
        terceraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==4){
        cuartaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void novenoIntervaloDireccion(int *fl, int *cl, char jugand[][9], int *dibarco, int *cantb, int *bartot){

    int desi, tbarco, cbar, totb, fili, coli;
    char dess;

    cbar= *cantb;
    totb= *bartot;
    fili= *fl;
    coli= *cl;

    printf("\n\nDirecciones");
    printf("\n2. Hacia la izquierda");
    printf("\n3. Hacia arriba");
    printf("\n\nIngrese la direccion que desea: ");
    scanf(" %c", &dess);

    while(dess!='2' && dess!='3'){
        printf("\nEsta direccion no existe, por favor ingresarla nuevamente: ");
        scanf(" %c", &dess);
    }

    convertirNumero(dess, &desi);
    tbarco= *dibarco;
    if(desi==2){
        segundaDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }
    else if(desi==3){
        terceraDesicion(jugand, &tbarco, &cbar, &totb, &fili, &coli);
    }

    *cantb= cbar;
    *bartot= totb;
}
void coloresJugador(char jugt[][9], int *fl, int *cl){
        if(jugt[*fl][*cl]=='~'){
            SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),1);
            printf("[%c]", jugt[*fl][*cl]);
        }
        else if(jugt[*fl][*cl]=='O'){
            SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),5);
            printf("[%c]", jugt[*fl][*cl]);
        }
        else if(jugt[*fl][*cl]!='~' && jugt[*fl][*cl]!='O'){
            SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),6);
            printf("[%c]", jugt[*fl][*cl]);
        }
}
void actualizarTablero(char jugar[][9]){
    int fil, col;

    for(fil=0;fil<9;fil++){
        printf("\n");
        printf("\t\t\t\t\t");
        for(col=0;col<9;col++){
            coloresJugador(jugar, &fil, &col);
        }
    }
    printf("\n");

}
void convertirLetra(char cv, int *ci){

    //Cambio de char a int
    if(cv=='A'){
        *ci=1;
    }
    if(cv=='B'){
        *ci=2;
    }
    if(cv=='C'){
        *ci=3;
    }
    if(cv=='D'){
        *ci=4;
    }
    if(cv=='E'){
        *ci=5;
    }
    if(cv=='F'){
        *ci=6;
    }
    if(cv=='G'){
        *ci=7;
    }
    if(cv=='H'){
        *ci=8;
    }

}

void ubicarBarcos(char jugando[][9], int *ba4, int *ba3, int *ba2, int *barcs){
    int f, c, di, barco, obarco;
    char conv, numi, ff;

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
    di=0;
    f=0;
    c=0;

    printf("\n\nUbica tus barcos en el tablero");
    printf("\n\nBarco en su flota:");
    printf("\n\n1.Barco tamano 4 (%d)", *ba4);
    printf("\n2.Barco tamano 3 (%d)", *ba3);
    printf("\n3.Barco tamano 2 (%d)\n", *ba2);
    printf("\nBarcos ubicados: (%d)\n", *barcs);

    printf("\nQue barco desea ubicar?: ");
    scanf(" %c", &numi);

    while(numi !='1' && numi !='2' && numi !='3'){
        printf("\nERROR, coloque un numero entre 1 a 3: ");
        scanf(" %c", &numi);
    }

    convertirNumero(numi, &di);

    if(di==1 && *ba4==0){
        while(di==1){
            printf("\n\nEste barco ya fue ubicado en el tablero, ingrese otro numero: ");
            scanf("%d", &di);
        }
    }
    if(di==2 && *ba3==0){
        while(di==2){
            printf("\n\nEstos barcos ya fueron ubicado en el tablero, ingrese otro numero: ");
            scanf("%d", &di);
        }
    }
    if(di==3 && *ba2==0){
        while(di==3){
            printf("\n\nEstos barcos ya fueron ubicados en el tablero, ingrese otro numero: ");
            scanf("%d", &di);
        }
    }

    //Disminucion de flota segun la eleccion del usuario

    //Ingreso de coordenadas
    printf("\nCoordenada x (A-H): ");
    fflush(stdin);
    scanf(" %c", &conv);
    while(conv !='A'&& conv !='B' && conv !='C'&& conv !='D'&& conv !='E'&& conv !='F' && conv !='G' && conv!='H'){
        printf("\n\nCoordenada X no valida, ingrese otra coordenada: ");
        scanf(" %c", &conv);
    }
    //llamada a funcion que lo convierte en numero

    convertirLetra(conv,&c);

    printf("\nCoordenada y (1-8): ");
    fflush(stdin);
    scanf(" %c", &ff);
    while(ff !='1' && ff !='2' && ff !='3' && ff !='4' && ff !='5' && ff !='6' && ff !='7' && ff!='8'){
        printf("\n\nCoordenada Y no valida, ingrese otra coordenada: ");
        scanf(" %c", &ff);
    }
    convertirNumero(ff, &f);

    barco= *barcs;

    //Barcos tamaño 4
    if(di==1){
        obarco= *ba4;
        if(c>=1 && c<4){
            if(f>=1 && f<4){
                primerIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                *ba4= obarco;
                *barcs= barco;
            }
            else if(f>=4 && f<=5){
                segundoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }
            else if(f>=6 && f<=8){
                tercerIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }
        }
        else if(c>=4 && c<=5){
            if(f>=1 && f<4){
                cuartoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }
            else if(f>=4 && f<=5){
                quintoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }
            else if(f>=6 && f<=8){
                sextoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }

        }
        else if(c>=6 && c<=8){
            if(f>=1 && f<4){
                septimoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }
            else if(f>=4 && f<=5){
                octavoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }
            else if(f>=6 && f<=8){
                novenoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba4= obarco;
                 *barcs= barco;
            }

        }
    }
    //Barcos tamaño 3
    else if(di==2){
        obarco= *ba3;
        if(c>=1 && c<3){
            if(f>=1 && f<3){
                primerIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                *ba3= obarco;
                *barcs= barco;
            }
            else if(f>=3 && f<=6){
                segundoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }
            else if(f>=7 && f<=8){
                tercerIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }
        }
        else if(c>=3 && c<=6){
            if(f>=1 && f<3){
                cuartoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }
            else if(f>=3 && f<=6){
                quintoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }
            else if(f>=7 && f<=8){
                sextoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }

        }
        else if(c>=7 && c<=8){
            if(f>=1 && f<3){
                septimoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }
            else if(f>=3 && f<=6){
                octavoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }
            else if(f>=7 && f<=8){
                novenoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba3= obarco;
                 *barcs= barco;
            }
        }
    }
    //Barcos tamaño 2
    else if(di==3){
        obarco= *ba2;
        if(c==1){
            if(f==1){
                primerIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                *ba2= obarco;
                *barcs= barco;
            }
            else if(f>=2 && f<=7){
                segundoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }
            else if(f==8){
                tercerIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }
        }
        else if(c>=2 && c<=7){
            if(f==1){
                cuartoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }
            else if(f>=2 && f<=7){
                quintoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }
            else if(f==8){
                sextoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }

        }
        else if(c==8){
            if(f==1){
                septimoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }
            else if(f>=2 && f<=7){
                octavoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }
            else if(f==8){
                novenoIntervaloDireccion(&f, &c, jugando, &di, &obarco, &barco);

                 *ba2= obarco;
                 *barcs= barco;
            }

        }
    }

    system("\n\npause");
}

void tableroJug(char jugar[][9]){
    int fi, co;

    //tablero
    jugar[0][0]='-';
    jugar[1][0]='1';
    jugar[2][0]='2';
    jugar[3][0]='3';
    jugar[4][0]='4';
    jugar[5][0]='5';
    jugar[6][0]='6';
    jugar[7][0]='7';
    jugar[8][0]='8';
    jugar[0][1]='A';
    jugar[0][2]='B';
    jugar[0][3]='C';
    jugar[0][4]='D';
    jugar[0][5]='E';
    jugar[0][6]='F';
    jugar[0][7]='G';
    jugar[0][8]='H';
    for(fi=1; fi<9;fi++){
        for(co=1;co<9;co++){
            jugar[fi][co]='~';
        }

    }
}
void intermedioJugador(int jugad, char jugadort[][9]){
    //char  juga1[9][9], juga2[9][9];
    int barcos, bar4, bar3, bar2;

    //Cantidad de barcos
    barcos=0; //Cantidad de barcos ubicados
    bar4= 1;
    bar3= 2;
    bar2= 2;
    if(jugad==1){
        tableroJug(jugadort);
        while (barcos<5){
            system("cls");
            printf("\n\n\t\t\t\t\t  Tablero de: ");
            puts(nomb1);
            actualizarTablero(jugadort);//Para actualizacion de datos, solo va a imprimir
            //Asignando signos iniciales del tablero
            ubicarBarcos(jugadort, &bar4, &bar3, &bar2, &barcos);
        }
        system("cls");
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        printf("Observe su tablero antes de que ingrese el oponente!!!\n");
        actualizarTablero(jugadort);
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        system("pause");
    }
    if(jugad==2){
        tableroJug(jugadort);
        while (barcos<5){
            system("cls");
            system("color 0F");
            printf("\n\n\t\t\t\t\t  Tablero de: ");
            puts(nomb2);
            actualizarTablero(jugadort);//Para actualizacion de datos, solo va a imprimir
            //Asignando signos iniciales del tablero
            ubicarBarcos(jugadort, &bar4, &bar3, &bar2, &barcos);
        }
        system("cls");
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        printf("Observe su tablero antes de que inicie el ataque!!!\n");
        actualizarTablero(jugadort);
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        system("pause");
    }
}


//Tableros de ataques
void caritaFeliz(){
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),6);
    printf("\t\t\t\t\tWWW\t\tWWW");
    printf("\n\t\t\t\t\tWWW\t\tWWW");
    printf("\n\t\t\t\t\tWWW\t\tWWW");
    printf("\n\t\t\t\t\tWWW\t\tWWW");
    printf("\n\t\t\t\t\tWWW\t\tWWW");
    printf("\n\t\t\t\t\tWWW\t\tWWW");
    printf("\n\t\t\t\t\tWWW\t\tWWW");
    printf("\n\t\t\t\t WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
    printf("\n\t\t\t\t WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW");
    printf("\n\t\t\t\t WWW                           WWW");
    printf("\n\t\t\t\t WWW                           WWW");
    printf("\n\t\t\t\t    WWW                     WWW   ");
    printf("\n\t\t\t\t    WWW                     WWW   ");
    printf("\n\t\t\t\t       WWW               WWW");
    printf("\n\t\t\t\t       WWW               WWW");
    printf("\n\t\t\t\t          WWW         WWW");
    printf("\n\t\t\t\t          WWWWWWWWWWWWWWW");
    printf("\n\t\t\t\t               WWWWW ");

}
void tablerosJuntos(int *turn, char ataq[][9],char jg[][9], int *fallido, int *enagua, int *caidos, int *acertado){
    int fl, cl;
    if(*turn==1){
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        printf("   Tablero para atacar a: %s \t\t\t\tTablero de: %s", nomb2, nomb1);
    }
    if(*turn==2){
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        printf("   Tablero para atacar a: %s \t\t\t\tTablero de: %s", nomb1, nomb2);
    }

    for(fl=0;fl<9;fl++){
        printf("\n");
        printf(" ");
        for(cl=0;cl<9;cl++){
            if(ataq[fl][cl]=='~'){
               SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),1);
               printf("[%c]", ataq[fl][cl]);
            }
            else if (ataq[fl][cl]=='*'){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),10);
                printf("[%c]", ataq[fl][cl]);
            }
            else if(ataq[fl][cl]==' '){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),4);
                printf("[%c]", ataq[fl][cl]);
            }
            else if(ataq[fl][cl]!=' '&& ataq[fl][cl]!='~'&& ataq[fl][cl]!='*'){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),6);
                printf("[%c]", ataq[fl][cl]);
            }
        }
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),6);
        if(fl==4){
            printf(" Acertados: %d", *acertado);
        }
        if(fl==5){
            printf(" Fallidos: %d", *fallido);
        }

        //Para controlar espacios
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        if(fl==4){
            printf("\t|       ");
        }
        else if(fl==5){
            printf("\t|       ");
        }
        else{
            printf("\t\t\t|\t");
        }
        for(cl=0;cl<9;cl++){
           if(jg[fl][cl]=='~'){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),1);
                printf("[%c]", jg[fl][cl]);
            }
           else if(jg[fl][cl]=='X'){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),4);
                printf("[%c]", jg[fl][cl]);
            }
            else if(jg[fl][cl]==' '){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),9);
                printf("[%c]", jg[fl][cl]);
            }
            else if(jg[fl][cl]=='O'){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),5);
                printf("[%c]", jg[fl][cl]);
            }
            else if(jg[fl][cl]!=' '&& jg[fl][cl]!='~'&& jg[fl][cl]!='O'&& jg[fl][cl]!='X'){
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),6);
                printf("[%c]", ataq[fl][cl]);
            }
        }
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),6);
        if(fl==4){
            printf(" C. Atacadas: %d", *caidos);
        }
        if(fl==5){
            printf(" En agua: %d", *enagua);
        }
    }
    printf("\n");
}
void validarTurno(int *turr, int *vtu){

    //Para mantener o pasar turno a jugador 2
    if(*turr==1){
        if(*vtu==0){
            *turr= *turr;
        }
        else if(*vtu==1){
            *turr= *turr + 1;
        }
    }
    //Para mantener o pasar turno a jugador 1
    else if(*turr==2){
        if(*vtu==0){
            *turr= *turr;
        }
        else if(*vtu==1){
            *turr= *turr-1;
        }
    }
}
void atacarBarcos(int *turn, char ataque[][9], char jugic[][9], char jugiy[][9], int *fallidoy, int *fallidoc, int *micaido, int *caer, int *vat){
    int f, c, cadm, fallay, fallac, caid, turni;
    char convertir, ff;

    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
    //Ingreso de coordenadas
    printf("\nCoordenada x (A-H): ");
    fflush(stdin);
    scanf(" %c", &convertir);
    while(convertir !='A'&& convertir !='B' && convertir !='C'&& convertir !='D'&& convertir !='E'&& convertir !='F' && convertir !='G' && convertir!='H'){
        printf("\n\nCoordenada X no valida, ingrese otra coordenada: ");
        scanf(" %c", &convertir);
    }
    //llamada a funcion que lo convierte en numero

    convertirLetra(convertir,&c);

    printf("\nCoordenada y (1-8): ");
    fflush(stdin);
    scanf(" %c", &ff);
    while(ff !='1' && ff !='2' && ff !='3' && ff !='4' && ff !='5' && ff !='6' && ff !='7' && ff!='8'){
        printf("\n\nCoordenada Y no valida, ingrese otra coordenada: ");
        scanf(" %c", &ff);
    }

    convertirNumero(ff, &f);
    //Funciones utilizadas unicamente para enviarlas a otra funcion (no es necesario este paso)
    cadm= *micaido;
    fallac= *fallidoc;
    caid= *caer;
    turni= *turn;
    fallay= *fallidoy;

    if(jugic[f][c]=='O'){
        jugic[f][c]='X';
        ataque[f][c]='*';

        caid= caid + 1;
        *caer= caid; //Para que vuelva a la funcion con el valor actualizado
        *vat= *vat;

        system("cls");

        tablerosJuntos(&turni, ataque, jugiy, &fallay, &fallac, &cadm, &caid);
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        if(*caer==14){
            printf("\nFelicidades!! Has derribado todos los barcos de tu contrincante");

        }
        else if(*caer<14){
            printf("\nFelicidades!! Has atacado un barco del contrincante");
        }




    }
    else if(jugic[f][c]=='~'){
        jugic[f][c]= ' ';
        ataque[f][c]= ' ';


        fallay= fallay + 1;
        *fallidoy= fallay; //Para que pueda volver a la funcion con el valor actualizado
        *vat= *vat +1;

        system("cls");
        tablerosJuntos(&turni, ataque, jugiy, &fallay, &fallac, &cadm, &caid);
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        printf("\nOuch! tu ataque ha caido en el agua :(");


    }
    else if(jugic[f][c]=='X' || jugic[f][c]==' '){

        fallay= fallay + 1;
        *fallidoy= fallay;
        *vat= *vat + 1;
        system("cls");
        tablerosJuntos(&turni, ataque, jugiy, &fallay, &fallac, &cadm, &caid);
        SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
        printf("\nOops! Parece que ya habias atacado este punto, mala suerte! :(");
    }

    getch();
}

void intermedioAtaques(char jg1[][9], char jg2[][9]){

    int ganador, turno, barcos1, barcos2, tirof1, tirof2, vt;
    char ataq1[9][9], ataq2[9][9];

    //ataq1 y jg2 siempre seran comparados, ataq1 disminuye barcos2
    //ataq2 y jg1 siempre seran comparados, ataq2 disminuye barcos1

    system("color 0F");
    barcos1= 0; //Casillas caidas que posee el jugador 1
    barcos2= 0; //Casillas caidas que posee el jugador 2
    tirof1= 0; //Tiros fallidos en el tablero del jugador 1
    tirof2= 0; //Tiros fallidos en el tablero del jugador 2
    ganador= 0;//Indica fin de ataques para indicar ganador
    turno= 0; //Indica el turno

    tableroJug(ataq1);//Valores predeterminados para tablero de ataque 1
    tableroJug(ataq2);//Valores predeterminados para tablero de ataque 2


    //Siempre inicia el primero jugador
    turno= turno+1;
    while(ganador==0){
        while(turno==1){
            vt=0; //valida si debe seguir con el turno o no
            system("cls");
            tablerosJuntos(&turno, ataq1, jg1, &tirof2, &tirof1, &barcos1, &barcos2);
            atacarBarcos(&turno, ataq1, jg2, jg1, &tirof2, &tirof1, &barcos1, &barcos2, &vt);
            validarTurno(&turno, &vt);
            if(barcos2==14 && barcos1<14){

                ganador= ganador + 1;
                system("cls");
                caritaFeliz();
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
                turno= turno+2; //Para que salga del ciclo y regrese a la funcion principal
                printf("\n\n\t\t\t\tFelcidades %s!! Has ganado esta batalla Naval", nomb1);
                getch();
                printf("\n\n\t\t\t\tSuerte para la proxima %s, no te rindas!!", nomb2);
                getch();
            }
            else if(barcos2<14){
                ganador= 0;
            }

        }

        while(turno==2){
            vt=0; //valida si debe seguir con el turno o no
            system("cls");
            tablerosJuntos(&turno, ataq2, jg2, &tirof1, &tirof2, &barcos2, &barcos1);
            atacarBarcos(&turno, ataq2, jg1, jg2, &tirof1, &tirof2, &barcos2, &barcos1, &vt);
            validarTurno(&turno, &vt);
            if(barcos1==14 && barcos2<14){

                ganador= ganador + 1;

                system("cls");
                caritaFeliz();
                SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),15);
                turno= turno+1; //Para que salga del ciclo y regrese a la funcion principal
                printf("\n\n\t\t\t\tFelcidades %s!! Has ganado esta batalla Naval", nomb2);
                getch();
                printf("\n\n\t\t\t\tSuerte para la proxima %s, no te rindas!!", nomb1);

            }
            else if(barcos1<14){
                ganador= 0;
            }

        }
    }
    getch();
}

void reglas(int *opc){
    system("cls");
    system("color B0");
    char desi;

    printf("\n\t\t\t\t\t<<<<Reglas del Juego>>>>");
    printf("\n\n\t\t\t\t\t  PARA UBICAR BARCOS");
    printf("\n\n- Al principio solo aparecera un tablero para cada jugador con el fin de que ubiquen");
    printf("\n  sus barcos.");
    printf("\n\n- Coloque las coordenas de donde desee ubicar sus barcos. Su flota esta conformada por \n  2 barcos de tamano 2, dos de tamano 3 y uno de tamano 4.");
    printf("\n\n- Para ubicar sus barcos, debe ingresar las coordenadas X y Y de forma separada.");
    printf("\n EJEMPLO: ");
    printf("\n\t\t\t\t\tCoordenada x(A-H): A");
    printf("\n\t\t\t\t\tCoordenada y(1-8): 1");
    printf("\n\nNOTA: Solo existen coordenadas x de la A a la H, siempre deben ingresar en MAYUSCULA CERRADA.");
    printf("\n      Solo existen coordenadas y desde el 1 hasta el 8");
    printf("\n\n- Segun el tamano del barco que quiera ubicar y la coordenada que escoja,");
    printf("\n  se habilitara un menu de direcciones.");
    printf("\n  Podra colocar su barco:");
    printf("- Hacia la derecha \n\t\t\t - Hacia la izquierda \n\t\t\t - Hacia arriba \n\t\t\t - Hacia abajo");
    printf("\n\n\t\t\t\tNO EXISTE LA DIRECCION DIAGONAL");
    getch();
    system("cls");
    printf("\n\n\t\t\t\t\t    PARA ATACAR");
    printf("\n\n- Encontrara 2 tableros. Uno para atacar al contrincante y el otro para observar \n  el estado de su tablero.\n");
    printf("\n- Derriba los 5 barcos del oponente. Intenta derribar los barcos ingresando el numero\n de fila y la letra de la columna de donde crea que se encuentre el barco\n del oponente.\n");
    printf("\n  IMPORTANTE: Cuando aciertes en un barco, tu turno permanecera, \n  apenas falles, el turno pasara a tu contrincante.");
    printf("\n\n- Cada flota posee 5 barcos que son iguales a 14 casillas.");
    printf("\n\n- El juego finaliza cuando uno de los jugadores hunda toda la flota del oponente.\n");
    getch();
    system("cls");
    printf("\n\n\t\t\t       SIMBOLOS EN EL TABLERO Y SU SIGNIFICADO");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),181);
    printf("\n\n\t\t\t [O]");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),176);
    printf("= Barco ubicado");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),177);
    printf("\t\t [~]");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),176);
    printf("= Agua");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),185);
    printf("\n\n\t\t\t [ ]");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),176);
    printf("= Ataque caido en agua");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),178);
    printf("\t [*]");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),176);
    printf("= Ataque acertado");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),180);
    printf("\n\n\t\t\t [ ]");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),176);
    printf("= Ataque fallido");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),180);
    printf("\t\t [X]");
    SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),176);
    printf("= Casilla caida");



    printf("\n\n\t\t\t\t Desea iniciar la partida? \n\t  Coloque s si desea iniciar su partida o n si desea salir del juego:  ");
    scanf(" %c", &desi);

    while(desi != 's'&& desi != 'S' && desi != 'n'&& desi != 'N'){
        printf("\n\nNO VALIDO, ingrese n o s: ");
        scanf(" %c", &desi);
    }
    if(desi=='s'||desi=='S'){
        system("cls");
        *opc = *opc + 1;
    }
    if(desi=='n'||desi=='N'){
        printf("Usted ha salido de battleship");
        *opc = *opc + 3;
    }
}
//FUNCION PRINCIPAL

int main(){
    //declarativa de variables
    char  juga1[9][9], juga2[9][9];
    int op, jugador;
    char de, num;

    op=0; //Para que inicialice el juego
    while(op>=0 && op<4){
        system("cls");
        //Bloque de instrucciones
        printf("\t\t\t\t\t     BATTLESHIP");
        printf(" \n\n 1. Reglas del Juego\n");
        printf(" 2. Iniciar Partida\n");
        printf(" 3. Salir\n");
        printf("Ingrese una opcion: ");
        scanf(" %c",&num);

        while(num !='1' && num !='2' && num !='3'){
            printf("\n\nNO VALIDO, ingrese otro dato: ");
            scanf(" %c", &num);
        }
        convertirNumero(num, &op);

        if(op==1){
            reglas(&op);
        }
        if(op==2){
            //Tablero del primer Jugador
            system("color 0F");
            jugador=1;
            system("cls");
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tIngrese el nombre del jugador no.1: ");
            fflush(stdin);
            gets(nomb1);

            //Limiar pantalla para tablero
            system("cls");
            intermedioJugador(jugador, juga1);

            system("cls");


            //Tablero del segundo jugador
            jugador=jugador+1;
            printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tIngrese el nombre del jugador no.2: ");
            fflush(stdin);
            gets(nomb2);

            //Limpiar pantalla para tablero
            intermedioJugador(jugador, juga2);


            //Comienza el ataque
            system("cls");
            system("color 0F");
            printf("\t\t\t\t         %s y %s\t\t\t", nomb1, nomb2);
            printf("\n\t\t\t\t List@s para comenzar el ataque?\n");
            system("pause");
            printf("\n\t\tLas creadoras, Viviana y Gabriela, les desean suerte!!!");
            getch();

            //Funcion intermedia para ataques
            intermedioAtaques(juga1, juga2);

            system("cls");
            system("color 0F");
            printf("\n\n\n\n\n\n\t\t\tDesea iniciar una nueva partida o salir del juego?\n(coloque s para iniciar o n para finalizar): ");
            scanf(" %c", &de);

            if(de=='s'||de=='S'){
                system("cls");

                op= op-2;
            }
            if(de=='n'||de=='N'){
                printf("Usted ha salido de battleship");

                op=op+2;
            }

        }
        if(op==3){
            printf("Usted ha salido de battleship");
            op= op+1;
        }
    }
}
