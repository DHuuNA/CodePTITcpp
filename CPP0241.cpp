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
		int l=0,r=n-1;
		int dem=0;
		while(l<=r){
			if(a[l]<a[r]){
				a[l+1]=a[l+1]+a[l];
				dem++;
				l++;
			}else if(a[l]>a[r]){
				a[r-1]=a[r-1]+a[r];
				dem++;
				r--;
			}else{
				l++;
				r--;
			}
		}
		cout<<dem<<endl;
	}
}
