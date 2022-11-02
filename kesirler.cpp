#include "kesirler.h"
#include<iostream>
using namespace std;
main()
{
	kesirler<int> a;
	kesirler<int> b;
	cout<<"sayinizin pay kismini giriniz pleas:";
	cin>>a.pay;
	cout<<"sayinizin payda kismini girin pleas:";
	cin>>a.payda;
	cout<<"ilk sayiniz:"<<a.pay<<"/"<<a.payda<<endl;
	
		cout<<"sayinizin pay kismini giriniz pleas:";
		cin>>b.pay;
		cout<<"sayinizin payda kismini girin pleas:";
		cin>>b.payda;
		cout<<"ilk sayiniz:"<<b.pay<<"/"<<b.payda<<endl;
		
		kesirler<int> c=a.topla(b);
	
	    cout<<"sonucunuz:"<<c.pay<<"/"<<c.payda;
	    
		return 0;
	    
}
