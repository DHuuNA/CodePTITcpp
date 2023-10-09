#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int a[s.length()];
		for(int i=0;i<s.length();i++){
			a[i]=s[i]-'0';
		}
		int kt=0;
		for(int i=0;i<s.length()/2;i++){
			if(a[i]!=a[s.length()-1-i]){
				kt=1;
				break;
			}
		}
		for(int i=0;i<s.length();i++){
			if(a[i]%2!=0){
				kt=1;
				break;
			}
		}
		if(kt==0){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
}
