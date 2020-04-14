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
    vector<int> a;
    for(int i=0; i<n; i++){
        int temp;
        cin>>temp;
        a.push_back(temp);
    }

    for(int i=0; i<n-1; i++){
        int j = i+1;
        int flag = 1;
        while(j<n){
            if(a[j]>a[i]){
                flag = 0;
                break;
            }
            j++;
        }
        if(flag == 1)
            cout<<a[i]<<" ";
    }
    cout<<a[n-1];

}
