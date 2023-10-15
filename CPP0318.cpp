#include<bits/stdc++.h>
using namespace std;
int kt68(string s){
	for(int i=5;i<s.length();i++){
		if(s[i]!='.'){
			if(s[i]!='6'&&s[i]!='8'){
				return 0;
			}
		}
	}
	return 1;
}
int ktt(string s){
	int a[5];
	int dem=0;
	for(int i=5;i<s.length();i++){
		if(s[i]!='.'){
			a[dem]=(int)s[i]-48;
			dem++;
		}
	}
	for(int i=0;i<4;i++){
		if(a[i+1]<=a[i]){
			return 0;
		}
	}
	return 1;
}
int kt32(string s){
	for(int i=5;i<7;i++){
		if(s[i]!=s[i+1]){
			return 0;
		}
	}
	if(s[9]!=s[10]){
		return 0;
	}
	return 1;
}
int ktb(string s){
	int a[5];
	int dem=0;
	for(int i=5;i<s.length()-1;i++){
		if(s[i]!='.'){
			a[dem]=(int)s[i]-48;
			dem++;
		}
	}
	for(int i=0;i<4;i++){
		if(a[i+1]!=a[i]){
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
		if(kt68(s)==0&&kt32(s)==0&&ktb(s)==0&&ktt(s)==0){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}
