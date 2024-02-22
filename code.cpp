class Solution
{
    public:
    int mod=1e9+7;
     int fun(string s,string t,int i,int j,vector<vector<int>> &dp){
        if(j<0)
            return(1);
        if(i<0)
            return(0);
        if(dp[i][j]!=-1)
            return(dp[i][j]);
        
        if(s[i]==t[j])
            return(dp[i][j]=(fun(s,t,i-1,j-1,dp)%mod+fun(s,t,i-1,j,dp)%mod)%mod);
        return(dp[i][j]=fun(s,t,i-1,j,dp)%mod);
    }
    int subsequenceCount(string s, string t)
    {
      //Your code here
     int n=s.size();
      int m=t.size();
      vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
      return(fun(s,t,n-1,m-1,dp));
    }
};
 
