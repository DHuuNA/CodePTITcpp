#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n][n];
	int b[n*n];
	for(int i=0;i<n*n;i++){
		cin>>b[i];
	}
	sort(b,b+n*n);
	int dem=0;
	int c1=0,h1=0,c2=n-1,h2=n-1;
	while(c1<=c2&&h1<=h2){
		for(int i=c1;i<=c2;i++){
			a[h1][i]=b[dem];
			dem++;
		}
		h1++;
		for(int i=h1;i<=h2;i++){
			a[i][c2]=b[dem];
			dem++;
		}
		c2--;
		if(c2>=c1){
			for(int i=c2;i>=c1;i--){
				a[h2][i]=b[dem];
				dem++;
			}
			h2--;
		}
		if(h2>=h1){
			for(int i=h2;i>=h1;i--){
				a[i][c1]=b[dem];
				dem++;
			}
			c1++;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
