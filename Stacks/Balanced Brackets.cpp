
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    for(int j = 1; j<=q; j++)
    {
        string s;
    vector<char> t;
    cin>>s;
    int f =0;
    for(int i=0; i<s.length(); i++)
    {

        char p = s[i];
        if(t.empty() != 1 && p == t.back() )
        {
            t.pop_back();
            //cout<<t.back();
            //cout<<t.back();
        }

        else
        {
            if(p == '(')
                t.push_back(')');

            else if(p == '{')
                t.push_back('}');

            else if(p == '[')
                t.push_back(']');

            else
            {
                f=1;
                break;
            }
        }

    }
    if(t.empty()==1 && f == 0)
        printf("YES\n");
    else
        printf("NO\n");
    }
}
