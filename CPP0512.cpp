#include<bits/stdc++.h>
using namespace std;
struct PhanSo
{
    long long tu,mau;
} A,B,C,D;
void process(PhanSo A, PhanSo B)
{
    C.tu=A.tu*B.mau+A.mau*B.tu;
    C.mau=A.mau*B.mau;
    long long x= __gcd(C.tu,C.mau);
    C.tu/=x;
    C.mau/=x;
    C.tu*=C.tu;
    C.mau*=C.mau;
    D.tu=A.tu*B.tu*C.tu;
    D.mau=A.mau*B.mau*C.mau;
    long long y=__gcd(D.tu,D.mau);
    D.tu/=y;
    D.mau/=y;
    cout<<C.tu<<"/"<<C.mau<<" ";
    cout<<D.tu<<"/"<<D.mau<<"\n";
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}
