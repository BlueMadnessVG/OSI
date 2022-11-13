//LIBRERIAS QUE EL PROGRAMA USUARA
#include <iostream>

using namespace std;

//FUNCION
int funcion() {

    //MATRIZ
    int matriz[2][2] = { { 1, 2 }, {3, 4} };

    int x, y;
    bool cond = 1;
    // CILO FOR
    for(x = 0; x < 2; x++ ) {

        for( y = 0; y < 2; y++ ) {

            printf("numero en esta posicion ( %d, %d ) : %d \n", x, y, matriz[x][y]);

        }

    }

    return 0;
}

//CUERPO PRINCIPAL DEL PROGRAMA
int main()
{

    //DECLARACION DE VARIABLES Y CONSTANTES
        //TIPOS DE DATOS

        bool condicion; // solo puede tener 2 valores 0 o 1
        int numero;     // variable tipo numerica sin punto ( -2,147,483,648 a 2,147,483,647 )
        float punto_32;    // variable tipo numerica con punto
        double punto_64;   // variable tipo numerica con punto ( con mas rango que float )
        char caracter;  // variable tipo caracter

    // OPERADORES
        // ARITMETICOS ( + - * / % ++ -- += -= /= %= *= )
        // RELACIONALES ( == != < > <= >= )
        // CONDICIONALES ( && || )

    numero = 10 ;


    //CONDICION
    if ( numero == 12 || numero == 0 ) {

        //ARREGLO
        int arreglo[5] = { 10, 12, 43, 4, 500 };

        //CICLO WHILE
        int i;
        while( i < 5 ){
            i++;
            printf("numero en esta posicion: %d \n", arreglo[i]);

        }
    }
    else {

        funcion();

    }


    return 0;
}
