#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int k;
		cin>>k;
		int dem[200]={0};
		for(int i=0;i<s.length();i++){
			dem[(int)s[i]]++;
		}
		int tinh=0;
		for(int i=97;i<122;i++){
			if(dem[i]==0){
				tinh++;
			}
		}
		if(k<tinh){
			cout<<"0"<<endl;
		}else{
			cout<<"1"<<endl;
		}
		cin.ignore();
	}
}
