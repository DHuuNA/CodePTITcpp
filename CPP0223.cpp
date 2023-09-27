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
		int dem=0;
		int h1=0,h2=n-1,c1=0,c2=m-1;
		while(h1<=h2&&c1<=c2){
			for(int i=c1;i<=c2;i++){
				cout<<a[h1][i]<<" ";
				dem++;
			}
			h1++;
			if(dem==m*n){
				break;
			} 
			for(int i=h1;i<=h2;i++){
				cout<<a[i][c2]<<" ";
				dem++;
			}
			c2--;
			if(dem==m*n){
				break;
			} 
			if(c2>=c1){
				for(int i=c2;i>=c1;i--){
					cout<<a[h2][i]<<" ";
					dem++;
				}
				h2--;
			}
			if(dem==m*n){
				break;
			} 
			if(h2>=h1){
				for(int i=h2;i>=h1;i--){
					cout<<a[i][c1]<<" ";
					dem++;
				}
				c1++;
			}
			if(dem==m*n){
				break;
			} 
		}
		cout<<endl;
	}
}
