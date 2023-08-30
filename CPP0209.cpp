#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n+1];
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int l[k+1],r[k+1];
		for(int i=1;i<=k;i++){
			cin>>l[i]>>r[i];
		}
		for(int i=1;i<=k;i++){
			int sum=0;
			for(int j=1;j<=n;j++){
				if(l[i]<=j&&r[i]>=j){
					sum=sum+a[j];
				}
			}
			cout<<sum<<endl;
		}
	}
}
