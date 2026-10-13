#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<long long>A(n);long long total=0;

    for(int i=0;i<n;i++){
        cin>>A[i];total+=A[i];
    }

    long long ans=LLONG_MAX;

    for(int i=0;i<(1<<n);i++)
    {
        long long sum=0;
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                sum+=A[j];
            }
        }

        long long diff = abs(total-2*sum);
        ans=min(ans,diff);
    }
    cout<<ans<<endl;
    return 0;
}