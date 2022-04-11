class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>v;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v.push_back(grid[i][j]);
            }
        }
        int mod=n*m;
        k=k%mod;
        if(k==0){
            return grid;
        }
        int idx=mod-k;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j]=v[idx];
                idx=(idx+1)%mod;
            }
        }
        return grid;
    }
};
