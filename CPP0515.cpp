#include<bits/stdc++.h>
using namespace std;
struct SinhVien{
	string ht,l,ns;
	int msv;
	double gpa;
};
void chuanhoaten(string& s){
	stringstream ss(s);
	string tmp;
	string tg;
	while(ss>>tmp){
		tmp[0]=toupper(tmp[0]);
		for(int i=1;i<tmp.length();i++){
			tmp[i]=tolower(tmp[i]);
		}
		tg=tg+tmp;
		tg=tg+' ';
	}
	s=tg;
	s.substr(s.length()-1,1);
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
void nhap(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		cin.ignore();
		ds[i].msv=i+1;
		getline(cin,ds[i].ht);
	    getline(cin,ds[i].l);
	    getline(cin,ds[i].ns);
	    cin>>ds[i].gpa;
	}
}
bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa>b.gpa;
}
void sapxep(SinhVien ds[],int n)
{
    sort(ds,ds+n,cmp);
}
void in(SinhVien ds[],int n){
	for(int i=0;i<n;i++){
		if(ds[i].msv<10){
			cout<<"B20DCCN00"<<ds[i].msv<<" ";
		}else{
			cout<<"B20DCCN0"<<ds[i].msv<<" ";
		}
		chuanhoaten(ds[i].ht);
		cout<<ds[i].ht<<" "<<ds[i].l<<" ";
		chuanhoa(ds[i].ns);
		cout<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
	}
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}
