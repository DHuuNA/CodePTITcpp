#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ktsnt(long long n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	long long n;
	cin>>n;
	if(ktsnt(n)==1){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}
