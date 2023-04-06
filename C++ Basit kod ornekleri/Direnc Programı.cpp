#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	char s,p,tur;
	float R1,R2,Res;
	cout<<"Direnc 1 Gir:";
	cin>>R1;
	
	cout<<"Direnc 2 Gir:";
	cin>>R2;
	
	cout<<"seri bagli ise \'s\',paralel bagli ise \'p\' Gir:";
	cin>>tur;
	
	
	
	switch(tur)
	{
		case 's':{
			Res=R1+R2;
			cout<<"Es deger direnc :"<<Res<<endl;
			break;
		}
		case 'p':{
			Res=(R1*R2)/(R1+R2);
			cout<<"Es deger direnc :"<<Res<<endl;
			break;
		}
	}
}
		
