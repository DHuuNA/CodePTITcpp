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
int tuntbn(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(ktsnt(i)==1&&n%i==0){
			return i;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			if(ktsnt(i)==1){
				cout<<i<<" ";
			}else if(i==1){
				cout<<i<<" ";
			}else{
				cout<<tuntbn(i)<<" ";
			}
		}
		cout<<endl;
	}
}
