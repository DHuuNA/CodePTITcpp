#include<bits/stdc++.h>
using namespace std;
int n;
class SinhVien
{
public:
    string msv, hten, clas, mail;
    friend istream& operator >>(istream& in, SinhVien &sv)
    {
        getline(in,sv.msv);
        getline(in,sv.hten);
        getline(in,sv.clas);
        getline(in,sv.mail);
        return in;
    }
    friend ostream& operator <<(ostream& out, SinhVien sv)
    {
        out<<sv.msv<<" "<<sv.hten<<" "<<sv.clas<<" "<<sv.mail<<"\n";
        return out;
    }
} ds[1008];
main()
{
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; ++i)
        cin>>ds[i];
    int q;
    string s;
    cin>>q;
    cin.ignore();
    while(q--)
    {
        getline(cin,s);
        transform(s.begin(),s.end(),s.begin(),::toupper);
        cout<<"DANH SACH SINH VIEN NGANH "<<s<<":\n";
        for(int i=0; i<n; ++i)
        {
            if(ds[i].msv[5]==s[0])
            {
                if(ds[i].clas[0]=='D') cout<<ds[i];
                if((s[0]=='V'||s[0]=='D'||s[0]=='V')&&ds[i].clas[0]=='E')
                    cout << ds[i];
            }
        }
    }
}
