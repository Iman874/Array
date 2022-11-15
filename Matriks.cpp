/*
	Name: Program menjumlahkan dua buah matriks
	Author: Rosul Iman
	Date: 15/11/2022
	Description: Array dua dimensi 
*/
#include <stdio.h>
#include <iostream>
#define BMAX 6
#define KMAX 6

using namespace std;

int main()
{
	int i,j=1,b1,b2,k1,k2,r;
	int matriks1[BMAX][KMAX];
	int matriks2[BMAX][KMAX];
	int matriks3[BMAX][KMAX];

	//biodata penulis
	cout<<"Programer : Rosul Iman\n";
	cout<<"NIM       : 22342012 \n\n";
	cout<<"Program menjumlahkan dua buah matriks\n";
	cout<<"Nilai maks baris:" <<BMAX<<endl;
	cout<<"Nilai maks kolom:" <<KMAX<<endl;
	cout<<"(Dapat diubah sesuai kebutuhan dalam define)\n";	
	
	//Entry ukuran/ukuran matriks
	cout<<"Masukan ordo matriks pertama. Baris, kolom (ex: 3 3) : ";
	cin>>b1>>k1;fflush(stdin);
	cout<<"Masukan ordo matriks kedua.   Baris, kolom (ex: 3 3) : ";
	cin>>b2>>k2;fflush(stdin);

	if (b1>0 && k1>0 && b1==b2 && k1==k2)
	{
	//Entry Matriks pertama
		cout<<"\n";
		cout<<"Matriks Pertama\n";
		for (i = 1; j<=k1 ; i++)
		{
			cout<<"Baris "<<i<<" Kolom "<<j<<" :";
			cin>>matriks1[i][j];fflush(stdin);
			if(i==b1)
			{
				i=0;
				j++;
			}
		}
	//Entry Matriks kedua
		cout<<"\n";
		cout<<"Matriks Kedua\n";
		for (i = 1,j=1; j<=k1 ; i++)
		{
			cout<<"Baris "<<i<<" Kolom "<<j<<" :";
			cin>>matriks2[i][j];fflush(stdin);
	//Menjumlahkan matriks
			matriks3[i][j]=matriks1[i][j]+matriks2[i][j];fflush(stdin);
			if(i==b1)
			{
				i=0;
				j++;
			}
		}
	//Menampilkan Matriks pertama
		cout<<"\n";
		cout<<"Matriks Pertama\n";
		for (i = 1,j=1; j<=k1 ; i++)
		{
			cout<<matriks1[i][j]<<"   ";
			if(i==b1)
			{
				i=0;
				j++;
				cout<<"\n";
			}
		}
	//Menampilkan Matriks kedua
		cout<<"\n";
		cout<<"Matriks Kedua\n";
		for (i = 1,j=1; j<=k1 ; i++)
		{
			cout<<matriks2[i][j]<<"   ";
			if(i==b1)
			{
				i=0;
				j++;
				cout<<"\n";
			}
		}
	//Menampilkan hasil penjumlahan
		cout<<"\n";
		cout<<"Hasil penjumlahan\n";
		for (i = 1,j=1; j<=k1 ; i++)
		{
			cout<<matriks3[i][j]<<"   ";
			if(i==b1)
			{
				i=0;
				j++;
				cout<<"\n";
			}
		}
	}
	else cout<<"Ordo matriks harus sama!, dan nilai tidak boleh 0!";
	return 0;
}
