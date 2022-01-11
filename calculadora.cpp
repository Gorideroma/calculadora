#include<iostream>
using namespace std;


float suma(float, float);

float resta(float, float);

float division(float, float);

float multiplicacion(float, float);

void mostrarResultado(float);

void pedirNumeros(float&, float&);

int main(void){

    float n1, n2,resultado;
    int op = 5;

    cout << "Bienvenido a la calculadora" << endl << endl;

    do{
        cout << "<<Sumar>> = opcion 1" << endl;
        cout << "<<Restar>> = opcion 2" << endl;
        cout << "<<Multiplicar>> = opcion 3" << endl;
        cout << "<<Dividir>> = opcion 4" << endl;
        cout << "<<Salir>> = opcion 0" << endl;
        cout << endl;
        cout << "Ingrese una opcion" << endl;
        cin >> op;
        switch(op){
        case 1:
            pedirNumeros(n1, n2);
            resultado = suma(n1, n2);
            mostrarResultado(resultado);
            system("pause");
            system("cls");
            break;
        case 2:
            pedirNumeros(n1, n2);
            resultado = resta(n1, n2);
            mostrarResultado(resultado);
            system("pause");
            system("cls");
            break;
        case 3:
            pedirNumeros(n1, n2);
            resultado = multiplicacion(n1, n2);
            mostrarResultado(resultado);
            system("pause");
            system("cls");
            break;
        case 4:
            pedirNumeros(n1, n2);
            resultado = division(n1, n2);
            mostrarResultado(resultado);
            system("pause");
            system("cls");
            break;
        case 0:
            op = 0;
            break;
        default:
            break;

        }
    }while(op!=0);


	return 0;
}
float suma(float a, float b){
    return a + b;
}

float resta(float a, float b){
    return a - b;

}

float division(float a, float b){
    return a / b;
}

float multiplicacion(float a, float b){
    return a * b;
}

void mostrarResultado(float res){
    cout << res << endl;
}

void pedirNumeros(float& a, float& b){
    cout << "Ingrese el primer numero" << endl;
    cin >> a;
    cout << "Ingrese el segundo numero" << endl;
    cin >> b;
}
