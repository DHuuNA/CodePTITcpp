#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ktsnt(int n){
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
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n<=3){
			cout<<"-1"<<endl;
		}
		int check=0;
		for(int i=2;i<=n/2;i++){
			if(ktsnt(i)==1&&ktsnt(n-i)==1){
				cout<<i<<" "<<n-i<<endl;
				check=1;
				break;
			}
		}
		if(check==0){
			cout<<"-1"<<endl;
		}
	}
}
