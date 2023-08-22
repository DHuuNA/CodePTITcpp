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
int ktss(int n){
	if(n<30){
		return 0;
	}
	int dem=0;
	int tg=n;
	for(int i=2;i<tg;i++){
		int tinh=0;
		while(n%i==0&&n>0){
			tinh++;
			if(ktsnt(i)==0){
				return 0;
			}
			n=n/i;
			if(tinh>1){
				return 0;
			}
			dem++;
		}
	}
	if(dem!=3){
		return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(ktss(n)==1){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
