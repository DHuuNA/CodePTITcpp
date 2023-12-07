#include<bits/stdc++.h>
using namespace std;

string s;
bool check(string s)
{
    for(int i=0; i<s.size()-1; i++)
        if(s[i]>s[i+1]) return 0;
    return 1;
}
void dcs(string s)
{
    int cnt=0;
    int n = s.size();
    char maxg= s[n-1];
    int csmax=n-1;
    for(int i= n- 2 ; i >=0; i--)
    {
        if(s[i]==maxg) csmax=i;
        if(s[i]>maxg)
        {
            swap(s[i],s[csmax]);
            break;
        }
        else {
            if(s[i]>s[i+1])
            {
                swap(s[i],s[i+1]);
                break;
            }
        }
    }
    if(s[0]=='0') cout<<-1;
    else cout<<s;
}
main()
{
    int t;
    cin>>t;
    while( t--)
    {
        cin>>s;
        if(check(s)) cout<<-1;
        else dcs(s);
        cout<<"\n";
    }
}
