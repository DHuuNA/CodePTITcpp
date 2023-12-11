#include<bits/stdc++.h>
using namespace std;
struct sinhvien{
	int stt;
	string msv;
	string ten;
	string lop;
	string email;
	string dn;
};
struct doanhnghiep{
	string ten;
};
void nhapsv(sinhvien &a,int i){
	a.stt=i+1;
	getline(cin,a.msv);
	getline(cin,a.ten);
	getline(cin,a.lop);
	getline(cin,a.email);
	getline(cin,a.dn);
}
void nhapdn(doanhnghiep &s){
	getline(cin,s.ten);
}
bool cmp(sinhvien a,sinhvien b){
	return a.ten<b.ten;
}
void sapxep(sinhvien ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(sinhvien ds[],int n,doanhnghiep cdn[],int q){
	for(int i=0;i<q;i++){
		for(int j=0;j<n;j++){
			if(ds[j].dn==cdn[i].ten){
				cout<<ds[j].stt<<" "<<ds[j].msv<<" "<<ds[j].ten<<" "<<ds[j].lop<<" "<<ds[j].email<<" "<<ds[j].dn<<endl;
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	sinhvien ds[n];
	cin.ignore();
	for(int i=0;i<n;i++){
		nhapsv(ds[i],i);
	}
	sapxep(ds,n);
	int q;
	cin>>q;
	cin.ignore();
	doanhnghiep cdn[q];
	for(int i=0;i<q;i++){
		nhapdn(cdn[i]);
	}
	in(ds,n,cdn,q);
	return 0;
}
