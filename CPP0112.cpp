#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		double x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		double sum1=abs(x1-x2)*abs(x1-x2);
		double sum2=abs(y1-y2)*abs(y1-y2);
		double kc=sqrt(sum1+sum2);
		cout<<fixed<<setprecision(4)<<kc<<endl;
	}
}
