
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int m;
    cin>>n>>m;
    string ones[] = {"", "one minute", "two minutes", "three minutes", "four minutes", "five minutes", "six minutes", "seven minutes", "eight minutes" "nine minutes"};

    string tens[] = {"ten minutes", "eleven minutes", "twelve minutes", "thirteen minutes", "fourteen minutes",
                        "quarter", "sixteen minutes", "seventeen minutes", "eighteen minutes", "nineteen minutes"};

    string  twenty[] = {"twenty minutes","twenty one minutes","twenty two minutes","twenty three minutes","twenty four minutes",
                            "twenty five minutes","twenty six minutes","twenty seven minutes","twenty eight minutes","twenty nine minutes"};

    string h[12] = {" one", " two", " three", " four", " five", " six",
                    " seven", " eight", " nine", " ten", " eleven", " twelve"};

    int x = m%10;
    int y = m/10;
    if(y==0 && x==0)
    {
        switch(n)
        {
        case 1:
            cout<<"one o' clock";

        case 2:
            cout<<"two o' clock";
            break;

        case 3:
            cout<<"three o' clock";
            break;

        case 4:
            cout<<"four o' clock";
            break;

        case 5:
            cout<<"five o' clock";
            break;

        case 6:
            cout<<"six o' clock";
            break;

        case 7:
            cout<<"seven o' clock";
            break;

        case 8:
            cout<<"eight o' clock";
            break;

        case 9:
            cout<<"nine o' clock";
            break;

        case 10:
            cout<<"ten o' clock";
            break;

        case 11:
            cout<<"eleven o' clock";
            break;

        case 12:
            cout<<"twelve o' clock";
            break;
        }
    }

    else if(y==0)
    {
        cout<<ones[x]<<" past"<<h[n-1];
    }

    else if(y==1)
    {
        cout<<tens[x]<<" past"<<h[n-1];
    }

    else if(y==2)
    {
        cout<<twenty[x]<<" past"<<h[n-1];
    }

    else if(y==3 && x==0)
        cout<<"half past"<<h[n-1];

    else if(m>30)
    {
        m = 60-m;
        x = m%10;
        y = m/10;
        if(y==0)
            cout<<ones[x]<<" to"<<h[n%12];

        else if(y==1)
            cout<<tens[x]<<" to"<<h[n%12];

        else if(y==2)
            cout<<twenty[x]<<" to"<<h[n%12];

    }

}
