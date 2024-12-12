#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
main()
{
	char letra;
	int n,n1,n2,n3,resultado,suma,estudiante,calificacion;
	float calificacion1,calificacion2;
	srand(time(NULL));
	n1=rand()%5;
	cout<<"el resultado es:"<<n1<<endl;
	do
	{
		cout<<"el numero de estudiantes es :";
		cin>>resultado;
		if(resultado=n1)
		{
			cout<<"adivinastes el numero \n";
			cout<<"deseas intentar de nuevo \n";
			cout<<"ingrese 5 para intentar otro numero aleatorio";
			cin>>n3;
		}
		else
		{
			cout<<"intentar de nuevo \n";
			cout<<"ingresar 5 \n";
			cin>>n3;	
		}
	}
	while(n2==5);
	cout<<endl;
	cout<<"cuales son las calificaciones del estudiante \n";
	cin>>n;
	for (n1=1;n1<6;n1=n1+1)
	{
		cout<<" este es el resultado de los estudiantes que ganaron ";
		cout<<n1<<endl;
	}
	cout<<"\n\n\n";
	for (n2=10;n2>1;n2=n2-1)
	{
		cout<<" este es el resultado de los estudiantes que perdieron ";
		cout<<n2<<endl;
	}
	do
	{
		switch (n)
		{
			case 1:cout<<"voy calificando en uno:";
			cout<<"ingrese el primer numero dela suma de calificacion \n";
			cin>>n1;
			cout<<"ingrese el segundo numero de la suma de calificacion \n";
			cin>>n2;
			resultado=n1+n2;
			cout<<"el resultado dela suma de calificacion es:"<<resultado;
			break;
				case 2:cout<<"voy calificando en dos:";
				cout<<"ingrese el primer numero dela resta de calificacion \n";
				cin>>n1;
				cout<<"ingrese el segundo numero de la resta de calificacion \n";
				cin>>n2;
				resultado=n1,n2;
				cout<<"el resultado dela resta de calificacion es:"<<resultado;
				break;
		}
	}
	while(letra=='s');
}
