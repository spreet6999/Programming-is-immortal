#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        int n;
        scanf("%d", &n);
        int a[n],a2[n];
        int max1=0;
        int min1=0;
        int max2=0;
        int min2=0;
        int x;
        for(int i=0; i<n; i++){
            scanf("%d", &x);
            a[i]= x+i;
            a2[i]= x-i;
            if(i==0){
                max1 = a[0];
                min1 = a[0];
                max2 = a2[0];
                min2 = a2[0];
            }
            else{
                if(a[i]>=max1)
                    max1 = a[i];

                if(a[i]<min1)
                    min1 = a[i];

                if(a2[i]>=max2)
                    max2 = a2[i];

                if(a2[i]<min2)
                    min2 = a2[i];

                else
                    continue;
            }
        }
        int diff1 = abs(max1-min1);
        int diff2 = abs(max2-min2);

        printf("%d\n", max(diff1, diff2));

    }
}
