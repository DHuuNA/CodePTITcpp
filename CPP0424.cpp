#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>k>>n;
		int a[k*n];
		int dem=0;
		for(int i=0;i<k;i++){
			for(int j=0;j<n;j++){
				cin>>a[dem];
				dem++;
			}
		}
		sort(a,a+k*n);
		for(int i=0;i<k*n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
