#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j , k;
    cin>>i;
    cin>>j;
    cin>>k;
    int temp = 0;
    int c = 0;
    while(i<=j)
    {
        int temp2 = i;

        while(temp2!=0)
        {
            int rem = temp2%10;
            //cout<< rem << " #### ";
            temp = temp*10 + rem;
            temp2 = temp2/10;
            //cout<<temp<< " ##### " << endl;
        }
        //cout<<temp<< " ##### "<< endl;
        int diff = abs(temp-i);
        if(diff%k == 0)
        {
            c++;
        }
        temp = 0;
        i++;
    }

    cout<<c;

}

