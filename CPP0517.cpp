#include<bits/stdc++.h>
using namespace std;
struct NhanVien{
	string ten;
	string gt;
	string ns;
	string dc;
	string mst;
	string nkhd;
};
int dem=0;
void nhap(NhanVien &a){
	if(dem==0){
		cin.ignore();
	}
	getline(cin,a.ten);
	getline(cin,a.gt);
	getline(cin,a.ns);
	getline(cin,a.dc);
	getline(cin,a.mst);
	getline(cin,a.nkhd);
	dem++;
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
void inds(NhanVien ds[],int N){
	for(int i=0;i<N;i++){
		if(i+1<10){
			cout<<"0000"<<i+1<<" ";
		}else{
			cout<<"000"<<i+1<<" ";
		}
	    cout<<ds[i].ten<<" "<<ds[i].gt<<" ";
	    chuanhoa(ds[i].ns);
	    cout<<" ";
		cout<<ds[i].dc<<" "<<ds[i].mst<<" ";
		chuanhoa(ds[i].nkhd);
		cout<<endl;
	}
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
