#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int c = 0;
    int k = 3;
    int p = 5;
    for(int i = 0; i< n ; i++)
    {
        int temp = p/2;
        c += temp;
        p = temp*3;
    }

    cout<<c;
}

