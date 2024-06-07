#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int l[] = {1, 5, 9, 13, 21};
    int r[] = {15, 8, 12, 20, 30};
    int n = sizeof(l) / sizeof(l[0]);
    int maxx = 30;
    // unordered_map<int,int>mp;
    // int ans=0;
    // for(int i=0;i<n;i++){
    //     int b=l[i];
    //     int g=r[i];

    //     for(int j=0;j<maxx;j++){
    //         if(j>=b && j<=g){
    //             mp[j]++;
    //             if(mp[ans]<mp[j]){
    //                 ans=j;
    //             }
    //         }
    //     }

    // }
    // cout<<ans<<"\n";

    vector<int> mp(maxx + 2, 0);

    for (int i = 0; i < n; i++)
    {
        mp[l[i]]++;
        mp[r[i] + 1]--;
    }

    for (int i = 0; i < mp.size(); i++)
    {
        cout << mp[i] << " ";
    }
    int curr = 0;
    int maxi = 0;
    int ans = 0;
    for (int i = 0; i < maxx; i++)
    {
        curr += mp[i];
        if (curr > maxi)
        {
            maxi = curr;
            ans = i;
        }
        else if (curr == maxi && ans > i)
        {
            ans = i;
        }
    }
    cout << ans << "\n";
}