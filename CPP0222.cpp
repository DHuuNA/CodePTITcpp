#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		int dem=0;
		int t[100001]={0};
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(t[a[i][j]]==i){
					t[a[i][j]]++;
				}
			}
		}
		for(int i=1;i<100001;i++){
			if(t[i]==n){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
