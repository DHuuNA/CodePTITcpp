#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		long long m=-1000000001;
		for(int i=0;i<s.length();i++){
			long long tg=0;
			while((int)s[i]-48>=0&&(int)s[i]-48<=9){
				tg=tg*10+(int)s[i]-48;
				i++;
			}
			m=max(m,tg);
		}
		cout<<m<<endl;
	}
}
