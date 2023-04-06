#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	int t=2,f=4,m=5,a,b,c;
	float d,e,l,x,y,z,g,n,o,k,p;
	
	cout<<"Türkçe doðru sayýsýný gir: ";
	cin>>a;
	cout<<"Türkçe yanlýþ sayýsýný gir: ";
	cin>>x;
	
	cout<<"fenbilgisi doðru sayýsýný gir:";
	cin>>b;
	cout<<"fenbilgisi yanlýþ sayýsýný gir:";
	cin>>y;
	
	cout<<"matematik doðru sayýsýný gir:";
	cin>>c;
	cout<<"matematik yanlýþ sayýsýný gir:";
	cin>>z;
	
	d=a-(x/4);
	e=b-(y/4);
	l=c-(z/4);
	
	g=d*t;
	n=e*f;
	o=l*m;
	
	k=d+e+l;
	p=g+n+o;
	
	cout<<"Türkçe net sayýnýz: "<<d<<" "<<"Türkçe puaný "<<g<<endl;
	cout<<"fenbilgisi net sayýnýz: "<<e<<" "<<"fenbilgisi puaný: "<<n<<endl;
	cout<<"matematik net sayýnýz: "<<l<<" "<<"matematik puaný: "<<o<<endl;
	cout<<"Toplam net sayýsý: "<<k<<" "<<"Toplam puan: "<<p<<endl;
	system("pause");
	return 0;
}
	
