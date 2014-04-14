complementi
===========
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	//la funzione sarÃ  y=(i*i)/2+i+4
	double i,a,b;
	
	cout<<"inserisci l'intervallo: \nA=";
	cin>>a;
	cout<<"B=";
	cin>>b;
	
	for(i=a;i<b;i=i+0.001)
	{
		if((i*i)/2+i+4==0)
		{
			cout<<"la funzione Ã¨ 0 in "<<i<<endl;
		}
	}
	
system("pause");
	return 0;
}
