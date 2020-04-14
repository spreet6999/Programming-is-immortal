#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> h;
    string word;
    for(int i=0; i<26; i++)
    {
        int temp;
        cin>>temp;
        h.push_back(temp);
    }
    cin>>word;
    int len = word.length();
    char c[len+1];

    strcpy(c, word.c_str());

    vector<int> temp;

    for(int i=0; i<word.length(); i++)
    {
        temp.push_back(h[(int)c[i] - 97]);
    }

    auto it= max_element(temp.begin(), temp.end());
    int temp1 = *it;
    int res = temp1*len;
    cout<<res;
//    for(int i=0; i<len; i++)
//        cout<<(int)word[i];
}

