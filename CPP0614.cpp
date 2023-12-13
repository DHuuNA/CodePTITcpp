#include<bits/stdc++.h>
using namespace std;
int dem=0;
class NhanVien{
	public:
		string mnv;
		string ten;
		string gt;
		string ns;
		string dc;
		string mst;
		string nkhd;
		friend istream& operator >> (istream& in,NhanVien& a){
			dem++;
			a.mnv="";
			a.mnv=a.mnv+string(5-to_string(dem).length(),'0')+to_string(dem);
			if(dem==1){
			    in.ignore();
			}
			getline(in,a.ten);
			getline(in,a.gt);
			getline(in,a.ns);
			getline(in,a.dc);
			getline(in,a.mst);
			getline(in,a.nkhd);
			return in;
		}
		friend ostream& operator << (ostream& out,NhanVien a){
			cout<<a.mnv<<" "<<a.ten<<" "<<a.gt<<" "<<a.ns<<" "<<a.dc<<" "<<a.mst<<" "<<a.nkhd<<endl;
			return out;
		}
};
int main(){
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}
