#include <bits/stdc++.h>
using namespace std;


int main()
{
    int N;
    cin >> N;
    if(N == 1)
    {
        cout << "1" << endl;
        return 0;
    }
    if(N==2)
    {
        cout << "3" << endl;
        return 0;
    }
    if(N==3)
    {
        cout << "5" << endl;
        return 0;
    }
    if(N==4)
    {
        cout << "7" << endl;
        return 0;
    }
    if(N==5)
    {
        cout << "9" << endl;
        return 0;
    }
    queue<int>q;
    q.push(1);
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(9);
    int p = 1;
    for(int i = 2;i<=N;i++)
    {
        int x = q.front();
        q.pop();
        for(int j = 0;j<5;j++)
        {
            q.push(x*10 + p);
            p += 2;
            p = p%10;
        }
        p = 1;
    }
    int ans = q.front();
    q.empty();
    cout << ans << endl;
}
