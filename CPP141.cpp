#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int check=0;
		long long f0=0,f1=1;
		for(int i=2;i<95;i++){
			long long tg=f0+f1;
			if(tg==n){
				cout<<"YES"<<endl;
				check=1;
			}
			f0=f1;
			f1=tg;
		}
		if(check==0&&n==0){
			cout<<"YES"<<endl;
		}else if(check==0){
			cout<<"NO"<<endl;
		}
	}
}
