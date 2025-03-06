class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int> ans(2);
        unordered_map<int,int> mp(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
                if(mp[grid[i][j]]==2) ans[0]=grid[i][j];
            }
        }
        int j=1;
        int x=0;
        for(auto i:mp){
            x=x^j^i.first;
            j++;
        }
        x^=j;
        ans[1]=x;
        return ans;
    }
};
