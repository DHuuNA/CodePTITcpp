#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	double sum=1+((double)1/n);
	cout<<fixed<<setprecision(4)<<sum;
}
