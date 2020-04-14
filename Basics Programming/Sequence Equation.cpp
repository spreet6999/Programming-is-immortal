
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> p;
    int pos[n];
    for(int i=0; i<n; i++)
    {
     //cout<<i<<" ";
     int temp;
     cin>>temp;
     p.push_back(temp);
     pos[i] = i+1;
     //cout<<pos[i];
    }

    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(p[p[i]-1] == pos[j])
                cout<<i+1<<endl;
        }
    }
}
