#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			int dem=1;
			cout<<s[i];
			while(s[i]==s[i+1]){
				dem++;
				i++;
			}
			cout<<dem;
		}
		cout<<endl;
	}
}
