class Solution {
  public:
    int findMinDiff(vector<int>& a, int m) {
        if(m==0 || a.size()<0)
            return 0;
        sort(a.begin(),a.end());
        int n = a.size();
        int ans=INT_MAX;
        for(int i=0; i<=n-m; i++){
            int diff = a[i+m-1] - a[i];
            ans = min(ans,diff);
        }
        return ans;
        
    }
};