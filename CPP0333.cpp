#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string& s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
void chuanhoaten(string& s){
	for(int i=0;i<s.length();i++){
		s[i]=toupper(s[i]);
	}
}
int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while(ss>>tmp){
		chuanhoa(tmp);
		v.push_back(tmp);
	}
	chuanhoaten(v[v.size()-1]);
	for(int i=0;i<v.size();i++){
		if(i==v.size()-2){
			cout<<v[i]<<", ";
		}else{
			cout<<v[i]<<" ";
		}
	}
}
