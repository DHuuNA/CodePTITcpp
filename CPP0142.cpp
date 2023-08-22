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
int tucln(int a,int b){
	while(a!=0&&b!=0){
		if(a>b){
			a=a%b;
		}else{
			b=b%a;
		}
	}
	return a+b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		int dem=0;
		for(int i=1;i<x;i++){
			if(tucln(i,x)==1){
				dem++;
			}
		}
		if(ktsnt(dem)==1){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
