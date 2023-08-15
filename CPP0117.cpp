#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ttcs(long long n){
	if(n<10){
		return n;
	}
	long long sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return ttcs(sum);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		cout<<ttcs(n)<<endl;
	}
}
