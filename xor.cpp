int subsetXOR(int arr[], int n, int k)
{
    int max_ele = arr[0];
    for i=1,2,3,....,n:
       if arr[i] > max_ele:
           max_ele = arr[i];
 

    int m = (1 << (int)(log2(max_ele) + 1) ) - 1;
    if( k > m  )
       return 0;

    int dp[n+1][m+1];
    

    for i= 0,1,2,3,...,n
        for j = 0,1,2,3....,m
            dp[i][j] = 0;
 

    dp[0][0] = 1;
 

    for i = 1,2,3....,n
        for j = 0,1,2,3...,m:
            dp[i][j] = dp[i-1][j] + dp[i-1][j^arr[i-1]];
 

    return dp[n][k];
}
