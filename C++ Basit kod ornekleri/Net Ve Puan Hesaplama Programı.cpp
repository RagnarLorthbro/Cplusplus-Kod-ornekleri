#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	int t=2,f=4,m=5,a,b,c;
	float d,e,l,x,y,z,g,n,o,k,p;
	
	cout<<"T�rk�e do�ru say�s�n� gir: ";
	cin>>a;
	cout<<"T�rk�e yanl�� say�s�n� gir: ";
	cin>>x;
	
	cout<<"fenbilgisi do�ru say�s�n� gir:";
	cin>>b;
	cout<<"fenbilgisi yanl�� say�s�n� gir:";
	cin>>y;
	
	cout<<"matematik do�ru say�s�n� gir:";
	cin>>c;
	cout<<"matematik yanl�� say�s�n� gir:";
	cin>>z;
	
	d=a-(x/4);
	e=b-(y/4);
	l=c-(z/4);
	
	g=d*t;
	n=e*f;
	o=l*m;
	
	k=d+e+l;
	p=g+n+o;
	
	cout<<"T�rk�e net say�n�z: "<<d<<" "<<"T�rk�e puan� "<<g<<endl;
	cout<<"fenbilgisi net say�n�z: "<<e<<" "<<"fenbilgisi puan�: "<<n<<endl;
	cout<<"matematik net say�n�z: "<<l<<" "<<"matematik puan�: "<<o<<endl;
	cout<<"Toplam net say�s�: "<<k<<" "<<"Toplam puan: "<<p<<endl;
	system("pause");
	return 0;
}
	
