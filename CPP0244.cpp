#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int dem[1001]={0};
	for(int i=0;i<n;i++){
		cin>>a[i];
		dem[a[i]]++;
	}
	for(int i=0;i<1001;i++){
		if(dem[i]!=0){
			cout<<i<<" ";
			dem[i]=0;
		}
	}
}
