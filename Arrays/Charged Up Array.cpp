#include<bits/stdc++.h>
using namespace std;

long long int solve (vector<long long> A, int N) {
   // Write your code here
    int temp = N-1;
    long long int res = 0;
    if(temp<64){
    unsigned long long int po = pow(2, temp);
        for(int i=0; i<N; i++){
            if(A[i]>=po)
                res += (A[i]%1000000007);
        }
    }
    return (res%1000000007);
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        cin >> N;
        vector<long long> A(N);
        for(int i_A=0; i_A<N; i_A++)
        {
        	cin >> A[i_A];
        }

        long long int out_;
        out_ = solve(A, N);
        cout << out_;
        cout << "\n";
    }
}
