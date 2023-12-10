#include<bits/stdc++.h>
using namespace std;
void chuanhoa(string& s){
	s[0]=toupper(s[0]);
	for(int i=1;i<s.length();i++){
		s[i]=tolower(s[i]);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		vector<string> a;
		if(n==1){
			stringstream ss(s);
	        string tmp;
	        while(ss>>tmp){
		        chuanhoa(tmp);
		        a.push_back(tmp);
	        }
	        cout<<a[a.size()-1]<<" ";
	        for(int i=0;i<a.size()-1;i++){
	        	cout<<a[i]<<" ";
			}
			cout<<endl;
		}
		if(n==2){
			stringstream ss(s);
	        string tmp;
	        while(ss>>tmp){
		        chuanhoa(tmp);
		        a.push_back(tmp);
	        }
	        for(int i=1;i<a.size();i++){
	        	cout<<a[i]<<" ";
			}
			cout<<a[0]<<endl;
		}
	}
}
