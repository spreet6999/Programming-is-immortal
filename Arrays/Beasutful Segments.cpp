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
    for(int tt=0; tt<t; tt++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int c=0;
        for(int i=1; i<n-1; i++){
            int f=0, p=0, mid;
            mid = i;
            int j=mid-1;
            int k=mid+1;
            while(j>=0 && k<n){
                if(a[j]<=a[i] && a[j+1]>=a[j] && a[k]<a[i] && a[k-1]>a[k])
                {
                    p++;
                    f++;
                    j--;
                    k++;
                }
                else
                    break;
            }

            if(p==f && p!=0 && f!=0)
                c+=p;

            else
                continue;


        }

        cout<<c<<"\n";

    }
}
