#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=n-1;i>=0;i--){
			cin>>a[i];
		}
		long long const mod=1e9+7;
		long long sum=0;
		for(int i=n-1;i>=0;i--){
			long long mu=1;
			for(int j=1;j<=i;j++){
				mu=(mu*x)%mod;
			}
			sum=(sum+a[i]*mu)%mod;
		}
		cout<<sum<<endl;
	}
}
