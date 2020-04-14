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
    int t;
    cin>>t;
	while(t>0){
    	int n,k;
        cin>>n;
        cin>>k;
        vector<int> a;
        for(int i=0; i<n; i++) {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        sort(a.begin(), a.end());

        if(a[0]>=k)
            cout<<0<<endl;
        else
            cout<<k-a[0]<<endl;
    --t;
    }

}
