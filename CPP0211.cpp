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
		int dem=0;
		for(int i=0;i<n;i++){
			for(int j=n-1;j>=i;j--){
				if(j-i<=dem){
					break;
				}
				if(a[i]<=a[j]){
					dem=max(dem,j-i);
				}
			}
		}
		cout<<dem<<endl;
	}
}
