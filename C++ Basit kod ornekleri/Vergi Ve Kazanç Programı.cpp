#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
	
	setlocale(LC_ALL, "Turkish");
	int e=4,p=5,s=5,m;
	int a,b,c;
	float k,v;
	cout<<"�r�nlerinizin maliyeti: ";
	cin>>m;
	cout<<"Toplam sat�lan ekmek say�s�n� gir: ";
	cin>>a;
	cout<<"Toplam sat�lan po�a�a say�s�n� gir: ";
	cin>>b;
	cout<<"Toplam sat�lan simit say�s�n� gir: ";
	cin>>c;
	k=(e*a+p*b+s*c)-m;
	v=(k*18)/100;
	cout<<"Kazanc�n�z: "<<k<<" TL"<<endl;
	cout<<"�demeniz gerken vergi: "<<v<<" TL"<<endl;
	system("pause");
	return 0;
}
	
