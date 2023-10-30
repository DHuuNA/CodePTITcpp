#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string mnv="00001";
	string ten,gt,ns,dc,mst,nk;
};
void nhap(NhanVien& a){
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.ns);
	getline(cin,a.dc);
	getline(cin,a.mst);
	getline(cin,a.nk);
}
void chuanhoa(string s){
	stringstream ss(s);
	string tmp;
	int dem=0;
	while(getline(ss,tmp,'/')){
		dem++;
		if(tmp.length()==1){
			cout<<"0"<<tmp<<"/";
		}else{
			if(dem==3){
				cout<<tmp;
			}else{
				cout<<tmp<<"/";
			}
		}
	}
}
void cs(string s){
	int dem=0;
	for(int i=0;i<s.length();i++){
		dem++;
	}
	for(int i=0;i<10-dem;i++){
		cout<<"0";
	}
	cout<<s;
	
}
void in(NhanVien a){
	cout<<a.mnv<<" "<<a.ten<<" "<<a.gt<<" ";
	chuanhoa(a.ns);
	cout<<" "<<a.dc<<" ";
	cs(a.mst);
	cout<<" ";
	chuanhoa(a.nk);
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
