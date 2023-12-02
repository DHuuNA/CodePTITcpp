#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int dem=0;
		string s;
		getline(cin,s);
		for(int i=0;i<s.length();i++){
			for(int j=i;j<s.length();j++){
				if(s[i]==s[j]){
					dem++;
				}
			}
		}
		cout<<dem<<endl;
	}
}
