#include<bits/stdc++.h>
using namespace std;

string longestPalin (string s) 
    {
        int n = s.length();
        int l_index=0;
        int r_index=0;
        int len = 1;
        for(int i=0;i<n;i++)
        {
            int left = i-1;
            int right = i+1;
            while(left >= 0 && right < n)
            {
                if(s[left] == s[right])
                {
                    left--;
                    right++;
                }
                else
                {
                    break;
                }
            }
            left++;
            right--;
            int diff = abs(left-right)+1;
            if(abs(l_index-r_index)+1 < diff)
            {
                l_index = left;
                r_index = right;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            int left =  0;
            int right = 0;
            if(s[i] == s[i+1])
            {
                left = i;
                right = i+1;
                while(left>=0 && right<n)
                {
                    if(s[left] == s[right])
                    {
                        left--;
                        right++;
                    }
                    else
                    {
                        break;
                    }
                }
                left = left+1;
                right = right-1;
                int diff = abs(left-right)+1;
                if(abs(l_index-r_index)+1 < diff)
                {
                    l_index = left;
                    r_index = right;
                }
            }
        }
        string res = "";
        for(int i=l_index;i<=r_index;i++)
        {
            res = res + s[i];
        }
        return res;
        // code here
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
