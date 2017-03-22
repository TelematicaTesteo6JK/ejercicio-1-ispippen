#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
int pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    // Agrega tus casos de prueba
    cout << "Prueba: 9 horas. Esperado: 81. Resultado: " << pago_estacionamiento(9) << endl;
    cout << "Prueba: 6 horas. Esperado: 54. Resultado: " << pago_estacionamiento(6) << endl;
    cout << "Prueba: 2 horas. Esperado: 20. Resultado: " << pago_estacionamiento(2) << endl;
}

int main()
{

    casos_de_prueba();

	return 0;
}
