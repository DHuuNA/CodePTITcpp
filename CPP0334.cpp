#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		long long sum=0;
		for(int i=0;i<s.length();i++){
			long long tg=0;
			while((int)s[i]-48>=0&&(int)s[i]-48<=9){
				tg=tg*10+(int)s[i]-48;
				i++;
			}
			sum=sum+tg;
		}
		cout<<sum<<endl;
	}
}
