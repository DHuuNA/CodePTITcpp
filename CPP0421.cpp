#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n];
		long long b[n];
		for(long long i=0;i<n;i++){
			b[i]=-1;
		}
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<n;i++){
			if(a[i]<n&&a[i]>=0){
				b[a[i]]=a[i];
			}
		}
		for(long long i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
