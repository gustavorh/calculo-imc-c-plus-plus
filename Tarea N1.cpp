#include <iostream>
#include <math.h>
/* Acceso a espacio de nombres para librerias estandar C++ */
using namespace std;

/* Funcion main es para dar el punto de inicio o ejecuion del programa */
int main() {
	/* Se definen las variables */
	int peso = 0;
	double altura = 0;
	
	/* Se pregunta al usuario por su peso */
	cout << "Ingrese su peso: ";
	cin >> peso;
	
	/* Se pregunta al usuario por su altura */
	cout << "Ingrese su altura (Ej: 1.65): ";
	cin >> altura;
	
	/* Se aplica la formula del IMC con los valores leidos anteriormente (peso y altura) */
	/* Se define la variable 'imc' como int ya que la estructura de selección tipo switch solo acepta valores int, y no double */
	int imc = peso / pow(altura, 2);
	/* Estructura Selectiva de tipo switch para determinar el rango del IMC obtenido */
	switch(imc) {
		case 20 ... 25: /* Rango entre 20 y 25 */
			cout << "Su IMC es de: " << imc << "\n";
			cout << "IMC Normal";
			break;
		case 26 ... 28: /* Rango entre 26 y 28 */
			cout << "Su IMC es de: " << imc << "\n";
			cout << "IMC Sobrepeso";
			break;
		case 29 ... 39: /* Rango entre 29 y 39 */
			cout << "Su IMC es de: " << imc << "\n";
			cout << "IMC Obeso";
			break;
		case 40 ... 100: /* Rango mayor a 40 */
			cout << "Su IMC es de: " << imc << "\n";
			cout << "IMC Obreso Morbido";
			break;
		default:
			cout << "Su IMC no esta dentro del rango aceptado.";
	}
		
	return 0;
}
