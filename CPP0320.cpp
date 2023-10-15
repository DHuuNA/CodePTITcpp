#include<bits/stdc++.h>
using namespace std;
int kts(string s){
	if(s[0]=='0'){
		return 0;
	}
	for(int i=0;i<s.length();i++){
		if((int)s[i]<48||(int)s[i]>57){
			return 0;
	    }
	}
	return 1;
}
int ktdd(string s){
	int dem[10]={0};
	for(int i=0;i<s.length();i++){
		int a=(int)s[i]-48;
		dem[a]++;
	}
	for(int i=0;i<10;i++){
		if(dem[i]==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(kts(s)==0){
			cout<<"INVALID"<<endl;
		}else if(ktdd(s)==0){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}
