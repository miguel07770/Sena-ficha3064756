#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float flotante=1.354678987654;
	double doble=1.354678987654;
	cout<<"el tama�o para el flotante es:"<<sizeof(float)<<endl;
	cout<<"el tama�o para el doble es:"<<sizeof(double)<<endl;
	cout<<flotante<<endl;
	cout<<doble<<endl;
	flotante=5.12345678987;
	doble=5.12345678987;
	cout<<setprecision(5);
	cout<<flotante<<endl;
	cout<<doble<<endl;
	cout<<setprecision(12);
	cout<<flotante<<endl;
	cout<<doble<<endl;
	cout<<setprecision(8);
	cout<<flotante<<endl;
	cout<<doble<<endl;
	cout<<setprecision(13);
	cout<<flotante<<endl;
	cout<<doble<<endl;
	
}
