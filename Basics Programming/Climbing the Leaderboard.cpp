#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    int score[n];
    for(int i=0; i<n; i++)
    {
        cin>>score[i];
    }
    cin>>m;
    int alice[m];
    for(int i=0; i<m; i++)
    {
        cin>>alice[i];
    }
    int ranks[n];
    for(int i=0; i<n; i++)
    {
        if(i==0)
            ranks[i]=1;
        else if(i>0)
        {
            if(score[i]==score[i-1])
                ranks[i]= ranks[i-1];
            else
                ranks[i]= ranks[i-1] + 1;
        }
        else
            continue;
    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<ranks[i]<<" ";
//    }
//    cout<<endl;
    int alicer[m];
//    cout<<alicer[m-1]<<endl;
    int last = n-1;
    for(int i=0; i<m; i++)
    {
        int temp= alice[i];
        //cout<<temp<<" ";
        for(int j=last; j>=0; j--)
        {
            if(temp==score[j])
            {
                alicer[i]= ranks[j];
                last = j;
                break;
            }
                //cout<<ranks[j]<<endl;
            else if(temp<score[j] && j<=last)
            {
                alicer[i] =ranks[j]+1;
                last=j;
                break;
            }
            if(temp>score[j] && temp==score[j-1] && j-1>=0)
            {
                alicer[i]= ranks[j-1];
                last=j;
                break;
            }

            if(temp>score[j] && temp<score[j-1] && j-1>=0)
            {
                alicer[i]= ranks[j-1]+1;
                last=j;
                break;
            }

                //cout<<(ranks[j]+1)<<endl;
            if(temp>score[j] && j==(0))
            {
                alicer[i]= ranks[j];
                last=j;
                break;
                //cout<<alicer[i]<<" ";
            }
                //cout<<(ranks[j]+1)<<endl;
        }
    }
    //cout<<endl;
    for(int i=0; i<m; i++)
    {
        cout<<alicer[i]<<endl;
    }

}

