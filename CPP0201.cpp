#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long kc=1e10;
		sort(a,a+n);
		for(int i=0;i<n-1;i++){
			kc=min(kc,a[i+1]-a[i]);
		}
		cout<<kc<<endl;
	}
}
