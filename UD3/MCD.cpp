#include <iostream>
using namespace std;

/*

@brief Lee los numeros de entrada necesarios para el intervalo.
@param int numeroIntroducido1 e int numeroIntroducido2 que son valores respectivos para cada valor del intervalo.
@pre debe estar activa la entrada por teclado.
@return cambia el valor de numeroIntroducido1 y numeroIntroducido2.
@post numeroIntroducido1 < numeroIntroducido2.

*/
void leerNumero (int &numeroIntroducido1, int &numeroIntroducido2){

    cout << "Programa que muestra el MCD de un intervalo." << endl;

    cout << "Introduce los numeros del intervalo separados por un espacio: ";

    cin >> numeroIntroducido1 >> numeroIntroducido2; 

}


/*

@brief Calcula el mcd de acuerdo al intervalo introducido.
@param int numero1 e int numero2.
@pre numero1 < numero2 siendo los dos distintos.
@return retorna numero2 que sera el resultado del mcd.
@post numero2 sera el resultado del mcd.

*/
int calcularMCD (int &numero1, int &numero2){

    int resto = 0;

    resto  = numero1 % numero2;
        
        while(resto != 0)
        {
            numero1 = numero2;
            numero2 = resto;
            resto = numero1 % numero2;
        }

    return numero2;

}


/*

@brief Imprime el resultado del mcd calculado anteriormente.
@param int resultado siendo este el resultado del m.c.d.
@pre debe estar activa la salida por pantalla.
@return no devuelve nada.
@post no tiene.

*/
void imprimirResultado (int &resultado){

    cout << "El m.c.d. es: " << resultado << endl;

}

int main()
{
    int a = 0, b = 0, resultado = 0;
    
    
    leerNumero(a,b);

    resultado = calcularMCD(a,b);

    imprimirResultado(resultado);
    
    
}