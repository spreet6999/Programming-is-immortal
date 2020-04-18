/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    char a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    string p;
    for(int i=0; i<n; i++){
        int s = p.length();

        if(s==0)
            p.push_back(a[i]);

        else{
        if(p[s-1]==a[i] && s>0)
            p.pop_back();
        else
            p.push_back(a[i]);
        }
    }
    cout<<p.length()<<"\n";
    for(int i=0; i<p.length(); i++){
        cout<<p[i];
    }
}
