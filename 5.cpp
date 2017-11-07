#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double tinggi, berat, u, o;
	
	cout<<"Masukkan tinggi badan [cm]: ";cin>>tinggi;
	cout<<"Masukkan berat badan [kg]: ";cin>>berat;
	
	u = tinggi/2.5;
	o = tinggi/2.3;
	if (berat < u)
	{
		cout<<"Underweight";
	}
	else if (berat>=u && berat<=o)
	{
		cout<<"Normal";
	}
	else if (berat>o)
	{
		cout<<"Overweight";
	}

}
