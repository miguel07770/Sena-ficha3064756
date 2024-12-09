#include<iostream>
using namespace std;
main()
{
	char letra;
	int n,n1,n2,n3,n4,resultado,suma,resta,multi,divi;
	cout<<" ingrese una de las siguientes opciones \n";
	cout<<" 1 para suma \n";
	cout<<" 2 para resta \n";
	cout<<" 3 para multi \n";
	cin>>n;
	
	do
	{
		
	
	
	
		switch (n)
		{
		
	
		
			case 1:cout<<"estoy en uno";
			cout<<" ingrese el primer numero de la suma \n ";
			cin>>n1;
			cout<<"ingrese el segundo numero de la suma \n";
			cin>>n2;
			resultado=n1+n2;
			cout<<"el resultado de la suma es:"<<resultado;
			break;
				case 2:cout<<"estoy en dos";
				cout<<"ingrese el primer numero de la resta \n";
				cin>>n1;
				cout<<"ingrese el segundo numero de la resta \n";
				cin>>n2;
				resultado=n1-n2;
				cout<<"el resultado de la resta es:"<<resultado;
				break;
					case 5:cout<<"estoy en cinco";
					cout<<"ingrese el primer numero de la multi";
					cin>>n1;
					cout<<"ingrese el segundo numero de la multi";
					cin>>n2;
					resultado=n1*n2;
					cout<<"el resultado dela multi es:"	<<resultado;
					break;
						case 4:cout<<"estoy en cuatro";
						cout<<"ingrese el  primer numero de la divi";
						cin>>n1;
						cout<<"ingrese el segundo numero de la divi";
						cin>>n2;
						resultado=n1/n2;
						cout<<"el resultado de la divi es:"<<resultado;
						break;
						default:cout<<"error repite la operacion";
						cout<<"quieres intentar de nuevo \n";
						cin>>n;
						cout<<letra;
						while(letra=='s')
						
		}				
						
			
				
					
	}
	
}
