#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int d;
    long long int o[3], c[4];
    cin>>d;
    cin>>o[0]>>o[1]>>o[2];
    cin>>c[0]>>c[1]>>c[2]>>c[3];
    long long int of = o[0] + ((d-o[1])*o[2]);
    long long int cf = c[1] + (d*c[3]);
    long long int temp2 = floor(d/c[0]);
    temp2 = (temp2*c[2]);
    cf += temp2;
    if(of<=cf)
        cout<<"Online Taxi";
    else
        cout<<"Classic Taxi";
 }
