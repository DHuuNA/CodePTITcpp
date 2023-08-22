#include<bits/stdc++.h>
using namespace std;
long long tucln(long long a,long long b){
	while(a!=0&&b!=0){
		if(a>b){
			a=a%b;
		}else{
			b=b%a;
		}
	}
	return a+b;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,x,y;
		cin>>a>>x>>y;
		long long u=tucln(x,y);
		for(int i=1;i<=u;i++){
			cout<<a;
		}
		cout<<endl;
	}
}
