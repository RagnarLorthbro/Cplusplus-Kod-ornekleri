#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	int sayi,yuzler,onlar,birler,a,b,c;
	
	cout<<"Bir sayý Gir: ";
	cin>>sayi;
	
	a=sayi%100;
	yuzler=sayi-a;
	yuzler=yuzler/100;
	
	birler=sayi%10;
	
	b=sayi%100;
	onlar=b-birler;
	onlar=onlar/10;
	
	cout<<"Yuzler basamaðý: "<<yuzler<<endl;
	cout<<"Onlar basamaðý: "<<onlar<<endl;
	cout<<"Birler basamaðý: "<<birler<<endl;
	
	
	
}
	
	
	
