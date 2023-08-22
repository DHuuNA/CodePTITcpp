#include<bits/stdc++.h>
using namespace std;
long long ktsnt(long long n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
long long ktt(long long n){
	while(n>=10){
		int r=n%10;
		if(r<=(n/10)%10){
			return 0;
		}
		n=n/10;
	}
	return 1;
}
long long ktg(long long n){
	while(n>=10){
		int r=n%10;
		if(r>=(n/10)%10){
			return 0;
		}
		n=n/10;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a=pow(10,n-1),b=pow(10,n)-1;
		int dem=0;
		for(int i=a;i<=b;i++){
			if(ktt(i)==1||ktg(i)==1){
				if(ktsnt(i)==1){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}
