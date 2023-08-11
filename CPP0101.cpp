#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long sum=((long long)(n+1)*n)/2;
		cout<<sum<<endl;
	}
}
