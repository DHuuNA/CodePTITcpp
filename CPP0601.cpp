#include<bits/stdc++.h>
using namespace std;
class SinhVien{
	private:
		string msv="B20DCCN001";
		string ten;
		string lop;
		string ns;
		float gpa;
	public:
		void nhap();
		void xuat();
		friend void chuanhoanamsinh(string &);
};
void chuanhoanamsinh(string &a){
	stringstream ss(a);
	string tg="";
	string tmp;
	while(getline(ss,tmp,'/')){
		if(tmp.length()==1){
			tmp='0'+tmp;
		}
		tg=tg+tmp;
		tg=tg+'/';
	}
	tg.erase(tg.length()-1);
	a=tg;
}
void SinhVien::nhap(){
	getline(cin,this->ten);
	getline(cin,this->lop);
	getline(cin,this->ns);
	chuanhoanamsinh(this->ns);
	cin>>this->gpa;
	cin.ignore();
}
void SinhVien::xuat(){
	cout<<this->msv<<" "<<this->ten<<" "<<this->lop<<" "<<this->ns<<" "<<fixed<<setprecision(2)<<this->gpa;
}
int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
