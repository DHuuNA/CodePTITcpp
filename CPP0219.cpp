#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1){
					for(int k=0;k<n;k++){
						if(a[k][j]==0){
							a[k][j]=2;
						}
					}
					for(int f=0;f<m;f++){
						if(a[i][f]==0){
							a[i][f]=2;
						}
					}
				}
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==2){
					a[i][j]=1;
				}
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
