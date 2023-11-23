#include<bits/stdc++.h>
using namespace std;
int ktut(string s){
	int le=0,chan=0;
	int dem=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==' '){
			if((int)s[i-1]%2==0){
				chan++;
			}else{
				le++;
			}
			dem++;
		}
		if(i==s.length()-1){
			if((int)s[i]%2==0){
				chan++;
			}else{
				le++;
			}
		}
	}
	if((le>chan&&(dem+1)%2!=0)||(chan>le&&(dem+1)%2==0)){
		return 1;
	}
	return 0;
}
int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(ktut(s)==0){
			cout<<"NO"<<endl;
		}else{
			cout<<"YES"<<endl;
		}
	}
}

