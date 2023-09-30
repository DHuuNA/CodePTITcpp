#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		cin>>a[0];
		int min1=a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			if(a[i]<=min1){
				min1=a[i];
			}
		}
		int min2=10000000;
		int kt=0;
		for(int i=0;i<n;i++){
			if(a[i]!=min1&&a[i]<=min2){
				min2=a[i];
				kt=1;
			}
		}
		if(kt==0){
			cout<<"-1"<<endl;
		}else{
			cout<<min1<<" "<<min2<<endl;
		}
	}
}
