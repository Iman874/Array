/*
	Name file	: array.cpp
	Author		: Rosul Iman
	Date		: 08/11/22 08:56
	Judul 		: Array dalam mengelola perkalian
*/


#include <iostream>
#include <string.h>
#include <conio.h>
#define N 11
using namespace std;

main (void)
{
	int var[N];
	int i,bil,jum,j;
	
	int var2[8]={1,2,3,4,5,6,7,8};
	char notasi[8]={'a','b','c','d','e','f','g','h'};
	
	cout<<"Masukan bilangan perkalian  : ";
	cin>>bil;
	cout<<"Jumlah perkalian (max = "<<N-1<<") : ";
	cin>>jum;
	cout<<endl;
	
	for(i=1;i<=jum;i++)
	{
		var[i]=bil*i;
		cout<<bil<<"x"<<i<<"="<<var[i]<<endl;
	}
	getch();
	cout<<endl;
	
	cout<<"Notasi papan catur"<<endl;
	for(i=0,j=0;j<8;i++)
	{
		cout<<notasi[i]<<var2[j]<<" ";
		if (i==7)
		{
			j++;
			i=-1;
			cout<<endl;
		}
	}
	
}
