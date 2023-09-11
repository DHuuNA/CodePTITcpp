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
		int dem[100001]={0};
		for(int i=0;i<n;i++){
			dem[a[i]]++;
		}
		int tinh=0;
		for(int i=0;i<n;i++){
			if(dem[a[i]]>1){
				tinh++;
			}
		}
		cout<<tinh<<endl;
	}
}
