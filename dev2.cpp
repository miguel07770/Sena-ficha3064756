#include<iostream>
using namespace std;
main()
{
	int n3,edad;
	cout<<"ingrese su edad en numeros \n";
	cin>>n3;
	if(n3>=18)
	{
		cout<<"usted es mayor \n";
	}
	else
	{
	if(n3>50)
		cout<<"anciano \n";
	}
	else
	{
		if(n3>9)
		{
			cout<<"usted es adolecente \n";
		}
		else
		{
			if(n3>3)
			{
				cout<<"usted es un niño \n";
			}
			else
			{
				cout<<"usted es bebe o no a nacido \n";
			}	
		}
	}	
	
}
