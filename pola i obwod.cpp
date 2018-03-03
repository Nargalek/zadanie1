//obliczanie pola i obwodu prostokat, kolo, trojkat, kwadrat
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double a,b,c,d,p;
	int f, ob;
	f,ob = 0;
	cout<<"\nJaka figura ? 1 = trojkat, 2 = kolo, 3 = prostokat, 4 = kwadrat : ";
	cin>>f;
	cout<<"\n co obliczyc? 1 = pole, 2 = obwod : ";
	cin>>ob;
	
	switch(f){
	
		case 1:
			if (ob == 1){
			cout<<"\nPodaj wartosci ";
			cout<<"\n bok a :";
			cin>>a;
			cout<<"\n wysokosc b: ";
			cin>> b;
			p = (a/2.0)*b;
			cout<<"\nPole wynosi: "<<p;
		} else{
			cout<<"\nPodaj wartosci bokow ";
			cout<<"\n bok a :";
			cin>>a;
			cout<<"\n bok b: ";
			cin>>b;	
			cout<<"\n bok c: ";
			cin>>c;
			p = a+b+c;
			cout<<"\nObwod wynosi: "<<p;
		}break;
		case 2:
			if (ob ==1){
			
			cout<<"\nPodaj promien kola: ";
			cin>>a;
			p = M_PI * (a*a);
			cout<<"\nPole wynosi: "<<p;	
		}else {
			cout<<"\nPodaj promien kola: ";
			cin>>a;
			p = 2*M_PI * (a*a);
			cout<<"\nObwod wynosi: "<<p;	
		}break;
		case 3:
			if (ob == 1){
			
			cout<<"\nPodaj dlugosci bokow ";
			cout<<"\n bok a: ";
			cin>>a;
			cout<<"\n bok b :";
			cin>>b;
			p = a*b;
			cout<<"\nPole wynosi: "<<p;
			} else {
			cout<<"\nPodaj dlugosci bokow ";
			cout<<"\n bok a: ";
			cin>>a;
			cout<<"\n bok b :";
			cin>>b;
			p = (a+b)*2;
			cout<<"\nObwod wynosi: "<<p;
			}break;
		
		case 4:
			if (ob == 1){
			
			cout<<"\nPodaj dlugosci bokow ";
			cout<<"\n bok a: ";
			cin>>a;
			p = a*a;
			cout<<"\nPole wynosi: "<<p;	
			} else{
			cout<<"\nPodaj dlugosci bokow ";
			cout<<"\n bok a: ";
			cin>>a;
			p = 4*a;
			cout<<"\nObwod wynosi: "<<p;	
			}break;
		
	}
}
