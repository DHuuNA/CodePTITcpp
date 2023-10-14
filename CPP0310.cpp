#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		long long a,b;
		cin>>a>>b;
		string s1 = to_string(a);
		string s2 = to_string(b);
		for(int i=0;i<s1.length();i++){
            if(s1[i]=='5'){
                s1[i]='6';
            }
		}
		for(int i=0;i<s2.length();i++){
            if(s2[i]=='5'){
                s2[i]='6';
            }
		}
		a=stoll(s1);
		b=stoll(s2);
		long long maxx=a+b;
		for(int i=0;i<s1.length();i++){
            if(s1[i]=='6'){
                s1[i]='5';
            }
		}
		for(int i=0;i<s2.length();i++){
            if(s2[i]=='6'){
                s2[i]='5';
            }
		}
		a=stoll(s1);
		b=stoll(s2);
		long long minn=a+b;
		cout<<minn<<" "<<maxx<<endl;
	}
}
