#include <iostream>                                         // biblioteca de datos

using namespace std;                                        // linea base de comandos

int main()                                                  // inicio de programa
{
    float num1=0 ,num2=0 , num3=0;                          // hace las variables igual a cero
    cout << "ingrese el primer numero :  " ;                // comentario impreso de digitacion
    cin >> num1 ;                                           // ingreso de primera variable
    cout << "ingrese el segundo numero : " ;
    cin >> num2 ;                                           //ingreso de variable
    cout << "ingrese el tercer numero : " ;
    cin >> num3 ;                                           // ingreso de variable

    if ( num1 + num2 == num3 )                              // inicio de ciclo

        {
            cout << " el numero es igual al tercero ";      // impresion del resultado
        }

    else
        {
            cout << "el numero no es igual al tercero ";    // impresion del resultado
        }

    return 0;                                               // MANTENER consola de comandos abierta
}
