#include <iostream> 
using namespace std;
int main(){
int n=0;
cout << "escriba cuantos numeros seran para el arreglo";
cin >> n;
int num[n];
int impar[n];
int j = 0;
for( int i=0 ; i<n ; i++)
{
    cout << "ingrese un numero entero \n";
    cin >> num[i];
    if (num[i]%2==1)
    {
        impar[j]=num[i];
        j++;
    }
    }
    cout << "el arrgelo riginal es :" << "\n";
    for (int i = 0; i < n ; i++)
    {
    cout << num [i] << "\n";
    }
    cout << "el arreglo de impares es: ";
    for (int k= 0; k < j ; k++)
    {
    cout << impar [k] << "\n";
    }
return 0;
}












