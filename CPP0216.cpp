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
		int l,r;
		cin>>l>>r;
		int check=0;
		for(int i=l;i<r;i++){
			int tg=i;
			while(a[i+1]>=a[i]&&tg==l){
				i++;
			}
			if(a[i+1]>a[i]){
				cout<<"No"<<endl;
				check=1;
				break;
			}
		}
		if(check==0){
			cout<<"Yes"<<endl;
		}
	}
}
