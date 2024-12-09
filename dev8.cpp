#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string nombres;
	int numero=7,edad;
	do
	{
		cout<<" ingrese su nombre \n ";
		cin>>nombres;
		cout<<" ingrese la edad \n ";
		cin>>numero;
		cout<<" mi nombre es: "<<nombres<<" mi edad es "<<numero<<endl;
		numero=numero+1;
	}
	while (numero<8);
}
