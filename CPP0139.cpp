#include<bits/stdc++.h>
using namespace std;
int ktsnt(int n){
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
int tcs(int n){
	int sum=0;
	while(n>0){
		sum=sum+n%10;
		n=n/10;
	}
	return sum;
}
int pttsnt(int n){
	int sum=0;
	for(int i=2;i<=sqrt(n);i++){
		while(n%i==0){
			sum=sum+tcs(i);
			n=n/i;
		}
	}
	if(n!=1){
		sum=sum+tcs(n);
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(tcs(n)==pttsnt(n)&&ktsnt(n)==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
