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
		friend void chuanhoanamsinh(string &);
		friend istream& operator >> (istream &in,SinhVien &a);
		friend ostream& operator << (ostream &out,SinhVien a);
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
istream& operator >> (istream &in,SinhVien &a){
	getline(in,a.ten);
	getline(in,a.lop);
	getline(in,a.ns);
	chuanhoanamsinh(a.ns);
	in>>a.gpa;
	in.ignore();
	return in;
}
ostream& operator << (ostream &out,SinhVien a){
	cout<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
	return out;
}
int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}
