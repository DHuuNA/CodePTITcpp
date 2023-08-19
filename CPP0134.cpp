#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void tk(int n,int k){
	int kt=0;
	if(n<2){
		cout<<"-1"<<endl;
		kt=1;
	}
	int dem=0;
	int check=0;
	for(int i=2;i<=n;i++){
		while(n%i==0){
			dem++;
			n=n/i;
			if(dem==k){
				cout<<i<<endl;
				check=1;
				break;
			}
		}
	}
	if(check==0&&kt==0){
		cout<<"-1"<<endl;
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		tk(n,k);
	}
}
