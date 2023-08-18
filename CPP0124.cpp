#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
void pttsnt(long long n){
	int tg=sqrt(n);
	for(int i=2;i<=tg;i++){
		int dem=0;
		while(n%i==0){
			dem++;
			n=n/i;
		}
		if(dem!=0){
			cout<<i<<" "<<dem<<endl;
		}
	}
	if(n!=1){
		cout<<n<<" 1";
	}
}
int main(){
	long long n;
	cin>>n;
	pttsnt(n);
}

