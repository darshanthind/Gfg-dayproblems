class Solution
{
public:
    int countNumberswith4(int n)
    {
        // code here
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            string s1 = to_string(i);
            auto finds = find(s1.begin(), s1.end(), char(4 + '0'));

            if (finds != s1.end())
            {
                ans++;
            }
        }

        return ans;
    }
};