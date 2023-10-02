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
		int kt=0;
		for(int i=1;i<n;i++){
			for(int j=i-1;j>=0;j--){
				if(a[i]==a[j]){
					cout<<a[i]<<endl;
					kt=1;
					break;
				}
			}
			if(kt==1){
				break;
			}
		}
		if(kt==0){
			cout<<"-1"<<endl;
		}
	}
}
