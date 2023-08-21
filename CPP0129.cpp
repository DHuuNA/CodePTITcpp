#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n>>p;
		int dem=0;
		if(n>p){
			for(int i=1;i<=n;i++){
				int tg=i;
				while(i%p==0){
					dem++;
					i=i/p;
				}
				i=tg;
			}
		}
		cout<<dem<<endl;
	}
}
