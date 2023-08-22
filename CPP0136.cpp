#include<bits/stdc++.h>
using namespace std;
int s[1000001];
int c=1000000;
void sangsnt(){
	for(int i=2;i<c;i++){
		s[i]=1;
	}
	for(int i=0;i<=sqrt(c);i++){
		if(s[i]==1){
			for(int j=i*i;j<=c;j=j+i){
				s[j]=0;
			}
		}
	}
}
int main(){
	sangsnt();
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int dem=0;
		for(int i=1;i<=sqrt(n);i++){
			if(s[i]==1){
				dem++;
			}
		}
		cout<<dem<<endl;
	}
}
