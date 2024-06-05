#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Soluation
{
public:
    int findSwapValues(int a[], int n, int b[], int m)
    {
        // Your code goes here
        int sum = accumulate(a, a + n, 0);
        int sum2 = accumulate(b, b + m, 0);
        if (sum == sum2)
        {
            return 1;
        }
        sort(a, a + n);
        sort(b, b + n);

        int i = 0, j = 0;
        while (i < n && j < m)
        {
            int s1 = sum - a[i] + b[j];
            int s2 = sum2 - b[j] + a[i];

            if (s1 == s2)
            {
                return 1;
            }
            if (s1 > s2)
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        // for(int i=0;i<n;i++){
        //     int s=sum;
        //     int f=false;
        //     int s2=sum2;
        //     s-=a[i];
        //     for(int j=0;j<m;j++){
        //         s2-=b[j];
        //         if((s+b[j])==(s2+a[i])){
        //             s+=b[j];
        //             s2+=a[i];
        //             f=true;
        //             break;
        //         }else{
        //             s2+=b[j];
        //         }

        //     }
        //     if(f){
        //         sum=s;
        //         sum2=s2;
        //         break;
        //     }
        // }
        // if(sum==sum2){
        //     return 1;
        // }
        return -1;
    }
};
