#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int ktcbcl(int n){
	int l=0,c=0;
	while(n>0){
		int s=n%10;
		if(s%2==0){
			c++;
		}else{
			l++;
		}
		n=n/10;
	}
	if(l==c){
		return 1;
	}
	return 0;
}
int main(){
	int n;
	cin>>n;
	long long a=pow(10,n-1),b=pow(10,n);
	int dem=0;
	for(long long i=a;i<=b;i++){
		if(ktcbcl(i)==1){
			dem++;
			cout<<i<<" ";
		}
		if(dem==10){
			cout<<endl;
			dem=0;
		}
		
	}
}
