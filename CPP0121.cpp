#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int tucln(long long a,long long b){
	while(b!=0){
		long long tg=a%b;
		a=b;
		b=tg;
	}
	return a;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b;
		cin>>a>>b;
		long long tich=a*b;
		long long ucln=tucln(a,b);
		cout<<tich/ucln<<" "<<ucln<<endl;
	}
}

