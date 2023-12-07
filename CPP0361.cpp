#include <bits/stdc++.h>
using namespace std;
main()
{
    int n;
    cin>>n;
    string a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j && a[i].find(a[j])!=-1) cnt++;
        }
    }
    cout<<cnt<<endl;
}
