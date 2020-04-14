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
	vector<int> a,b,c;
	for(int i=0; i<n; i++) {
		int temp;
		cin>>temp;
		a.push_back(temp);
	}

	for(int i=0; i<n; i++) {
		int temp;
		cin>>temp;
		b.push_back(temp);
	}

	for(int i=0; i<n; i++) {
		int temp;
		temp = a[i]+b[i];
		c.push_back(temp);
	}

	for(int i=0; i<n; i++) {
		cout<<c[i]<<" ";
	}
}
