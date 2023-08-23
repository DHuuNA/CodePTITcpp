#include<bits/stdc++.h>
using namespace std;
int ktsf(int n){
	if(n==0){
		return 1;
	}
	int f0=0,f1=1;
	for(int i=2;i<17;i++){
		int tg=f0+f1;
		if(n==tg){
			return 1;
		}
		f0=f1;
		f1=tg;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			if(ktsf(a[i])==1){
				cout<<a[i]<<" ";
			}
		}
		cout<<endl;
	}
}
