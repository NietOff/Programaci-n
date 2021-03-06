#include <iostream>
#include <cmath>
using namespace std;


/*

@brief Lee 3 numeros de entrada para hacer la ecuación de 2º grado.
@param double a, double b y double c para cada uno de los terminos de la ecuación.
@pre debe estar activa la entrada por teclado.
@return no devuelve nada.
@post a,b y c almacenaran x2, x y c respectivamente.

*/
void leerNumeros (double &a, double &b, double &c){

	cout << "Bienvenido al programa que calcula una ecuacion de 2º grado." << endl;
	cout << "Introduce x2, x y c respectivamente: ";
	cin >> a;
	cin >> b;
	cin >> c;

}


/*

@brief Determina si la ecuación tiene solución o no.
@param double a, double b y double c para cada uno de los terminos de la ecuación.
@pre a, b y c para x2, x y c respectivamente.
@return solucionable para saber si tiene solución o no.
@post solucionable nos dará un valor para ver si la ecuacion tiene respuestas o no.

*/
int posibleResultado (double a, double b, double c, int &solucionable){

	if((a == 0 ) || ((b*b - 4*a*c) < 0) || (a == 0 && b == 0 && c == 0) || (a = 0))  {

		solucionable = 0;
	
	} else {

		solucionable++;

	}


	return solucionable;

}


/*

@brief Calcula el resultado de la ecuación.
@param double a, double b y double c para cada uno de los terminos de la ecuación.
@pre debe ser una ecuación con solución.
@return resultado1 y resultado2 cambiando el numero.
@post resultado1 y resultado2 almacenaran las respuestas de x para la ecuación.

*/
void calcularResultado (double a, double b, double c, double &resultado1, double &resultado2){

	double monstruo = 0;

	monstruo = sqrt(b*b - (4 * a * c));
	
	resultado1 = ((-b + monstruo) / 2*a);
	resultado2 = ((-b - monstruo) / 2*a);

} 

/*

@brief Imprime los dos resultados de la ecuación.
@param double resultado1 y double resultado2 para cada uno de los resultados de la ecuación.
@pre debe estar activa la salida por pantalla.
@return no devuelve nada.
@post no tiene.

*/
void imprimirResultado (double resultado1, double resultado2){

	cout << "Las soluciones son " << resultado1 << " y " << resultado2 << endl;;

}

/*

@brief Mensaje de error para cuando la ecuacion no tenga resultado.
@pre debe estar activa la salida por pantalla.
@post no tiene.
@return no devuelve nada.

*/
void errorEcuacion (){

	cout << "No hemos podido solucionar tu ecuacion." << endl;

}

int main(){

	double x2 = 0, x = 0, c = 0, res1 = 0, res2 = 0;
	int solucionable;

	leerNumeros(x2,x,c);

	solucionable = posibleResultado(x2,x,c,solucionable);


	if(solucionable != 0){

		calcularResultado(x2,x,c,res1,res2);
		imprimirResultado(res1,res2);

	} else if (solucionable == 0){

		errorEcuacion();

	}


}