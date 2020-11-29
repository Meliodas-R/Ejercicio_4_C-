#include <iostream>
using namespace std;

/*
* 4. Pedir al usuario que introduzca dos numeros, después, mostrar por pantalla la suma, resta, multiplicación y division de ambos números.
*
*/
int main()
{
	int numero1;
	int numero2;
	int suma = 0;
	int resta = 0;
	int multiplicacion = 0;
	int division = 0;

	cout << "Introduzca el primer numero: ";
	cin >> numero1;
	cout << "Introduzca el segundo numero: ";
	cin >> numero2;
	cout << "------------------------------" << endl;

	suma = numero1 + numero2;
	resta = numero1 - numero2;
	multiplicacion = numero1 * numero2;
	division = numero1 / numero2;

	cout << "El resultado de la suma es: " << suma << endl;
	cout << "El resultado de la resta es: " << resta << endl;
	cout << "El resultado de la multiplicacion es: " << multiplicacion << endl;
	cout << "El resultado de la division es: " << division << endl;

	return 0;
}

