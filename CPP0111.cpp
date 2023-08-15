#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		int check=0;
		while(n>0){
			int c=n%10;
			n=n/10;
			if(n>0){
				int tg=n%10;
				if(tg!=c+1&&tg+1!=c){
					check=1;
					break;
				}
			}
		}
		if(check==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
