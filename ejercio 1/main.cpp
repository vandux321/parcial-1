#include <iostream>

using namespace std;

int main()
{
    float num1=0 ,num2=0 , num3=0;
    cout << "ingrese el primer numero :  " ;
    cin >> num1 ;
    cout << "ingrese el segundo numero : " ;
    cin >> num2 ;
    cout << "ingrese el tercer numero : " ;
    cin >> num3 ;

    if ( num1 + num2 == num3 )

        {
            cout << " el numero es igual al tercero ";
        }

    else
        {
            cout << "el numero no es igual al tercero ";
        }

    return 0;
}
