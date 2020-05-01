#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1,s2;
	getline(cin, s1);
    getline(cin, s2);

    int l1 = s1.length();
    int l2 = s2.length();

    string m, g;

    for(int i=0; i<l1; i++){
        if(s1[i]>=65 && s1[i]<=90)
            m.push_back(s1[i]+32);

        if(s1[i]>=97 && s1[i]<=122)
            m.push_back(s1[i]);
    }

    for(int i=0; i<l2; i++){
        if(s2[i]>=65 && s2[i]<=90)
            g.push_back(s2[i]+32);

        if(s2[i]>=97 && s2[i]<=122)
            g.push_back(s2[i]);
    }


    if(m.length() == g.length())
        cout<<"YES";

    else
        cout<<"NO";
	return 0;
}
