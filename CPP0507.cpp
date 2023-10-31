#include<bits/stdc++.h>
using namespace std;
struct PhanSo{
	long long ts,ms;
};
void nhap(PhanSo& a){
	cin>>a.ts>>a.ms;
}
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
void rutgon(PhanSo& p){
	long long u=gcd(p.ms,p.ts);
	p.ms=p.ms/u;
	p.ts=p.ts/u;
}
PhanSo tong(PhanSo p,PhanSo q){
	PhanSo t;
	rutgon(p);
	rutgon(q);
	long long bcnn=(p.ms*q.ms)/gcd(p.ms,q.ms);
	t.ts=(bcnn/p.ms)*p.ts+(bcnn/q.ms)*q.ts;
	t.ms=bcnn;
	return t;
}
void in(PhanSo t){
	cout<<t.ts<<"/"<<t.ms;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
