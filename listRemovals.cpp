#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

using ordered_set = tree<
    pair<int, int>,
    null_type,
    less<pair<int, int>>,
    rb_tree_tag,
    tree_order_statistics_node_update
>;


int main(){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    ordered_set ost;

    for(int i=0;i<n;i++)
    {
        ost.insert({i+1,a[i]});
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        auto value= ost.find_by_order(x-1);
        cout<<value->second<<" ";
        ost.erase(value);
    }
    cout<<endl;

    return 0;

}