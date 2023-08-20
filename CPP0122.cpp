#include<iostream>
#include<iomanip>
#include<cmath>
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
long long tbcnn(long long a,long long b){
	return a*b/tucln(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long bcnn=1;
		for(int i=1;i<=n;i++){
			bcnn=tbcnn(i,bcnn);
		}
		cout<<bcnn<<endl;
	}
}
