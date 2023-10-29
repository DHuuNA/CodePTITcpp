#include<bits/stdc++.h>
using namespace std;
struct Point{
	double x,y;
};
double distance(Point A,Point B){
	double tg1=abs(A.x-B.x);
	double tg2=abs(A.y-B.y);
	return sqrt(tg1*tg1+tg2*tg2);
}
void input(Point& C){
	cin>>C.x>>C.y;
}
int main(){
	struct Point A,B;
	int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
