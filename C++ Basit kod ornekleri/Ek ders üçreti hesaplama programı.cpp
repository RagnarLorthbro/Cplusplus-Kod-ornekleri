#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "TURKISH");

	int a, s, m, k;
	
	cout<<"Maa��n�z� girin: ";
	cin>>m;

	cout << "Ek ders saatini gir: ";
	cin >> s;

	if ( s<10 )
	{
		a = s * 30;
		cout << "�denecek ek �cret: " << a << endl;
	}
	else
	{
		if (s<20)
		{
			a=(s-10)*35+300;
			cout<<"�denecek ek �cret: "<<a<<endl;
		}
		else
		{
			a=(s-20)*40+650;
			cout<<"�denecek ek �cret: "<<a<<endl;
		}
	}
	k=a+m;
	cout<<"Net kazanc�n�z :"<<k<<endl;
}


