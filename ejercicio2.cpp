#include <iostream> 
using namespace std;
int main(){
    int n = 0 ;
    cout << "ingrese tamano de cuantos numeros seran:";
    cin >> n;
    int num[n];
    int par[n];
    int j=0;
    
for( int i=0 ; i<n ; i++)
{
    cout << "ingrese un numero entero \n";
    cin >> num[i];
    if (num[i]%2==0)
    {
        par[j]=num[i];
        j++;
    }
}
    cout << "el arrgelo riginal es :" << "\n";
    for (int i = 0; i < n ; i++)
    {
        cout << num [i] << "\n";
    }
    cout << "el arreglo de pares es: ";
    for (int k= 0; k < j ; k++)
    {
    cout << par [k] << "\n";
    }
return 0;
}