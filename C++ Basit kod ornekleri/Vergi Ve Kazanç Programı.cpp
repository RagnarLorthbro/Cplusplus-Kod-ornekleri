#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	int e=4,p=5,s=5,m;
	int a,b,c;
	float k,v;
	cout<<"Ürünlerinizin maliyeti: ";
	cin>>m;
	cout<<"Toplam satýlan ekmek sayýsýný gir: ";
	cin>>a;
	cout<<"Toplam satýlan poðaça sayýsýný gir: ";
	cin>>b;
	cout<<"Toplam satýlan simit sayýsýný gir: ";
	cin>>c;
	k=(e*a+p*b+s*c)-m;
	v=(k*18)/100;
	cout<<"Kazancýnýz: "<<k<<" TL"<<endl;
	cout<<"Ödemeniz gerken vergi: "<<v<<" TL"<<endl;
	system("pause");
	return 0;
}
	
