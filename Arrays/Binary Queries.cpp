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
    int n, q;
    cin>>n;
    cin>>q;
    vector<int> a;
    for(int i=0; i<n; i++) {
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    for(int i=0; i<q; i++) {
        int temp;
        cin>>temp;
        if(temp == 1) {
            int x;
            cin>>x;
            if(a[x-1] == 0)
                a[x-1] = 1;
            else
                a[x-1] = 0;
        }
        else {
            int l,r;
            cin>>l;
            cin>>r;
            if(a[r-1] == 0)
                cout<<"EVEN"<<endl;
            else
                cout<<"ODD"<<endl;
        }
    }
}
