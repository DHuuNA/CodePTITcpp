#include<bits/stdc++.h>
using namespace std;
int a[1000001];
int n=1000000;
void sangsnt(){
	for(int i=0;i<=n;i++){
		a[i]=1;
	}
	a[0]=0;
	a[1]=0;
	for(int i=0;i<=sqrt(n);i++){
		if(a[i]==1){
			for(int j=i*i;j<=n;j=j+i){
				a[j]=0;
			}
		}
	}
}
int main(){
	sangsnt();
	int t;
	cin>>t;
	while(t--){
		long long l,r;
		cin>>l>>r;
		if(l>r){
			swap(l,r);
		}
		int c=sqrt(l),d=sqrt(r);
		if(c*c<l){
			c=c+1;
		}
		int dem=0;
		for(int i=c;i<=d;i++){
			if(a[i]==1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
