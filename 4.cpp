#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	int nilai;
	
	cout<<"Masukan Nilai : ";
	cin>>nilai;
	
	if (nilai>0)
		cout<<"Nilai Positif";
	else if (nilai<0)
		cout<<"Nilai Negatif";
	else
		cout<<"Nilai 0";
}
