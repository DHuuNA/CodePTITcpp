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
long long ktshh(long long n){
	for(int i=2;i<=31;i++){
		if(ktsnt(i)==1){
			int tg=pow(2,i)-1;
			if(ktsnt(tg)==1){
				long long c=tg*pow(2,i-1);
				if(c==n){
					return 1;
				}
			}
		}
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(ktshh(n)==1){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
