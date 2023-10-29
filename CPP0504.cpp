#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ten,lop,ns;
	string msv="B20DCCN001";
	double diem;
};
void nhap(SinhVien& a){
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.ns);
	cin>>a.diem;
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
void in(SinhVien a){
	cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" ";
	chuanhoa(a.ns);
	cout<<" "<<fixed<<setprecision(2)<<a.diem;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
