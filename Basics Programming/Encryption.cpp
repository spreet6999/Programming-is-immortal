#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int n = s.length();
    //cout<<n<<endl;
    int r = floor(sqrt(n));
    int c = ceil(sqrt(n));
    //cout<<r<<" "<<c<<endl;
    vector<string> v;
    for(int i=0; i<c; i++)
    {
        string temp;
        //cout<<temp;
        int j =i;
        while(j<n)
        {
            temp.push_back(s[j]);
            if(r==c)
                j +=r;
            else
                j +=r+1;
        }
        v.push_back(temp);
    }
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}

