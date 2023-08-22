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
long long tbcnn(long long a,long long b){
	return (long long)a*b/tucln(a,b);
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long x,y,z,n;
		cin>>x>>y>>z>>n;
		long long bcnn=tbcnn(x,tbcnn(y,z));
		long long k=pow(10,n-1);
		double h=k/bcnn;
		long long m=h;
		if(m*bcnn!=k){
		    m=m+1;
		}
		long long kq=m*bcnn;
		long long dem=0;
		long long tg=kq;
		while(tg>0){
			dem++;
			tg=tg/10;
		}
		if(dem>n){
			cout<<"-1"<<endl;
		}else{
			cout<<kq<<endl;
		}
	}
}
