#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int kt=0;
		for(int i=0;i<n;i++){
			if(a[i]==x){
				kt=1;
				cout<<i+1<<endl;
				break;
			}
		}
		if(kt==0){
			cout<<"-1"<<endl;
		}
	}
}
