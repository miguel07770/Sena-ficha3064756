#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float n1,n2,respuestaflotante;
	double numero1,numero2,respuestadoble;
	cout<<"ejercio para realizar divicion \n";
	cout<<"ingrese el primer numero para la divicion flotante";
	cin>>n1;
	cout<<"ingrese el segundo numero para la divicion float";
	cin>>n2;
	respuestaflotante=n1/n2;
	cout<<"el resultado de la divicion flotante es:"<<respuestaflotante<<endl<<endl;
	cout<<"ingrese el primer numero para la divicion double";
	cin>>numero1;
	cout<<"ingrese el segundo numero para la divicion doble";
	cin>>numero2;
	respuestadoble=numero1/numero2;
	cout<<"el resultado dela divicion es:"<<respuestadoble<<endl;
}
