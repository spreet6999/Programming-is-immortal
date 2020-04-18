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
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>n;
        int a[n];

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a, a+n);

        int j=0;
        int sum=0;
        while(j<n-1){
            sum += a[j];
            j++;
        }
        if(a[n-1]<sum)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
