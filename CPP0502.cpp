#include<bits/stdc++.h>
using namespace std;
struct ThiSinh{
	string ten,ns;
	double d1,d2,d3;
};
void nhap(ThiSinh& a){
	getline(cin,a.ten);
	getline(cin,a.ns);
	cin>>a.d1>>a.d2>>a.d3;
}
void in(ThiSinh& a){
	cout<<a.ten<<" "<<a.ns<<" "<<fixed<<setprecision(1)<<a.d1+a.d2+a.d3;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
