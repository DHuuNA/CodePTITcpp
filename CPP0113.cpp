#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if(n%10==6){
			n=n/10;
			if(n%10==8){
				cout<<"1"<<endl;
			}else{
				cout<<"0"<<endl;
			}
		}else{
			cout<<"0"<<endl;
		}
	}
}
