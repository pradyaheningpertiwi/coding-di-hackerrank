#include <iostream>
using namespace std;
int main(){
	
	
	int s,m,d,ca;
	int kv =4000;
	cin>>kv;
	s=kv/3600;
	ca=kv%3600;
	m=ca/60;
	d=ca%60;
	cout<<s;
	cout<<" ";
	cout<<m;
	cout<<" ";
	cout<<d;
	return 0;
	
	
	
	
}
