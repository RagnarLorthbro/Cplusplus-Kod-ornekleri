#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	int sayi,yuzler,onlar,birler,a,b,c;
	
	cout<<"Bir say� Gir: ";
	cin>>sayi;
	
	a=sayi%100;
	yuzler=sayi-a;
	yuzler=yuzler/100;
	
	birler=sayi%10;
	
	b=sayi%100;
	onlar=b-birler;
	onlar=onlar/10;
	
	cout<<"Yuzler basama��: "<<yuzler<<endl;
	cout<<"Onlar basama��: "<<onlar<<endl;
	cout<<"Birler basama��: "<<birler<<endl;
	
	
	
}
	
	
	
