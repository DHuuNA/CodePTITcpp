#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		int dem=0;
		for(int i=0;i<n;i++){
			int s1=0,s2=0;
			for(int j=i;j<n;j++){
				s1=s1+a[j];
				s2=s2+b[j];
				if(s1==s2){
					dem=max(dem,j-i+1);
				}
			}
		}
		cout<<dem<<endl;
	}
}
