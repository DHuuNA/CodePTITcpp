#include<iostream>
#include<iomanip>
using namespace std;
long long tgt(int n){
	long long sum=1;
	for(int i=1;i<=n;i++){
		sum=sum*i;
	}
	return sum;
}
int main(){
	int n;
	cin>> n;
	long long sum=0;
	for(int i=1;i<=n;i++){
		sum=sum+tgt(i);
	}
	cout<<sum;
}
