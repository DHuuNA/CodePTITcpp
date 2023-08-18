#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int k;
		long long tg=n;
		for(int i=2;i<=sqrt(tg);i++){
			while(n%i==0){
				n=n/i;
				k=i;
			}
		}
		if(n!=1){
			cout<<n<<endl;
		}else{
			cout<<k<<endl;
		}
	}
}
