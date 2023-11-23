#include<bits/stdc++.h>
using namespace std;
int ktsmm(string s){
	int sum=0;
	for(int i=0;i<s.length();i++){
		sum=sum+(int)s[i]-48;
	}
	if(sum==9){
		return 1;
	}else{
		int tg=sum;
		while(tg>=10){
			int sum1=0;
			while(sum>0){
				sum1=sum1+sum%10;
				sum=sum/10;
			}
			tg=sum1;
			sum=sum1;
		}
		if(tg==9){
			return 1;
		}
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(ktsmm(s)==1){
			cout<<"1"<<endl;
		}else{
			cout<<"0"<<endl;
		}
	}
}
