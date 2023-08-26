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
		sort(a,a+n);
		int kc=10000;
		for(int i=0;i<n-1;i++){
			kc=min(kc,a[i+1]-a[i]);
		}
		cout<<kc<<endl;
	}
}
