#include<bits/stdc++.h>
using namespace std;
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
		long long sum=a[0]+a[1];
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if((long long)abs(a[i]+a[j])<abs(sum)){
					sum=a[i]+a[j];
				}
			}
		}
		cout<<sum<<endl;
	}
}
