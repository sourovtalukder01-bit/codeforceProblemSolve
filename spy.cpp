#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        for(int i=0;i<n;i++)
        {
            bool unique = true;

            for(int j=0;j<n;j++)
            {
                if(i != j && v[i]==v[j])
                {
                    unique=false;
                    break;
                }

            }

            if(unique)
            {
                cout<<i+1<<" ";
            }
        }

        cout<<endl;
    }
    return 0;
}