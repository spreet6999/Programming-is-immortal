#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,g;
	cin>>n>>m>>g;
	vector<int> time,cl;

	for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        time.push_back(temp);
    }

	for(int i=0; i<m; i++)
    {
        int temp;
        cin>>temp;
        cl.push_back(temp);
    }
	int check =0;
	vector<int> cc;
	for(int i=1; i<n; i++)
	{
        int c=0;
	    int diff = time[i] - time[i-1];
	    for(int j=0; j<m; j++)
	    {
	        if(cl[j]<=diff)
	       {
	           c++;
	           cl[j];
	       }
	    }
	    if(c!=0)
            cc.push_back(c);
	    check++;
	    if(check == g)
	    {
	        cout<< *max_element(cc.begin(), cc.end());
	        return 0;
	    }
	}
	cout<< *max_element(cc.begin(), cc.end());
	return 0;
}
