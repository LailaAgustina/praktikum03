#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
	int gp,jk,lembur,gt,pajak;
	
	cout << "Masukkan gaji pegawai : ";
	cin >> gp;
	cout << "Masukkan jam kerja    : ";
	cin >> jk;
	
	lembur= jk - 40;
	gt = (lembur*1.5+40)+gp;
	pajak=gt*0.15;
	gt=gt-pajak;
	
	cout<<"Gaji bersih pegawai : "<< gt<<endl;
	
}
