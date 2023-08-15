#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long tg=n,m=0;
		while(n>0){
			m=m*10+n%10;
			n=n/10;
		}
		if(m==tg){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
