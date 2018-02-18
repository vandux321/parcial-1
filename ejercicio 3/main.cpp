#include <iostream>                                                                     // libreria o biblioteca

using namespace std;                                                                    // linea base de comandos

int main()                                                                              // estructura o cuerpo
{
    int importe_bruto =0,importe_neto =0 ,total=0  ;                                    // declarqacion de variables
    cout << "ingrese el importe bruto : " ;                                             // codigo de impresion de texto
    cin >> importe_bruto ;                                                              // ingreso de variables

    if (importe_bruto>15000)                                                            // bucle
        {
                total=importe_bruto*0.16  ;
                cout << "  el importe neto es de : " << total ;                         // imprime el resultado
                cout << "  y la suma de todo es : "  << total+importe_bruto;
        }
    else
        {
                total=importe_bruto*0.10  ;
                cout << "  el importe neto es de : " << total ;                         // imprime el resultado
                cout << "  y la suma de todo es : "  << total+importe_bruto;
        }
    return 0;                                                                           // mantiene la consola de comandos
}
