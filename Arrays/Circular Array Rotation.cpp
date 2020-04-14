#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,q;
    cin>>n>>k>>q;
    k=k%n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int t;
    for(int i=0; i<q; i++)
    {
        cin>>t;
        cout<<arr[(n-k+t)%n]<<"\n";
    }

}
