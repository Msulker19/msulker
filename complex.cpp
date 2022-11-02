#include<iostream>
#include "complex.h"
using namespace std;
int main ()
{
 	complex a, b;
 	char X;
 	cout << "ilk sayinin real kismini girin:";
 	cin >>a.re;
 	cout<<"sayinin sanal kismini girin:";
 	cin>>a.im;
 		cout<<"ilk sayiniz:"<<a.re<<"+"<<a.im<<"i"<<endl; 
 	int f = a.re+a.im;
	cout << "ikinci sayinin real kismini girin:";
 	cin >>b.re;
 	cout<<"ikinci sayinin sanal kismini girin:";
 	cin>>b.im;
 	cout<<"yapmak istediðiniz islemi giriniz:"<<"toplama:+,cikarma:-,bölme:/,carpma:*";
 		cout<<"ikinci sayiniz:"<<b.re<<"+"<<b.im<<"i"<<endl; 	
 	cin>> X;
 	if(X=='+'){
 		complex	c=a.toplama(b);
 		cout<<"toplam sonucu:"<<c.re<<"+"<<c.im<<"i"<<endl;
 		
	 }
	 else if(X=='-'){
 		complex	c=a.cikar(b);
 		cout<<"cýkarma sonucu:"<<c.re<<"+"<<c.im<<"i"<<endl;
 		
	 }
	 else if(X=='*'){
 		complex	c=a.carpma(b);
 		cout<<"carpma sonucu:"<<c.re<<"+"<<c.im<<"i"<<endl;
 		
	 }
	else
	{
		cout << "islem bulunamadý"<<endl;
	}
}


