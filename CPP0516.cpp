#include<bits/stdc++.h>
using namespace std;
struct h{
	int mmh;
	string ten,nh;
	double gn,gb,ln;
};
void nhap(h ds[],int n){
	for(int i=0;i<n;i++){
		if(i!=0){
			cin.ignore();
		}
		ds[i].mmh=i+1;
		getline(cin,ds[i].ten);
		getline(cin,ds[i].nh);
		cin>>ds[i].gn>>ds[i].gb;
		ds[i].ln=ds[i].gb-ds[i].gn;
	}
}
bool cmp(h a,h b){
	return a.ln>b.ln;
}
void sapxep(h ds[],int n){
	sort(ds,ds+n,cmp);
}
void in(h ds[],int n){
	for(int i=0;i<n;i++){
		cout<<ds[i].mmh<<" "<<ds[i].ten<<" "<<ds[i].nh<<" "<<fixed<<setprecision(2)<<ds[i].ln<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	h ds[n];
	nhap(ds,n);
	sapxep(ds,n);
	in(ds,n);
}
