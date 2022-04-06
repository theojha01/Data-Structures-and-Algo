class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n = arr.size(), mod = 1e9+7, ans = 0;
        unordered_map<int, int> m;
        
        for(int i=0; i<n; i++) { //1 2
            ans = (ans + m[target - arr[i]]) % mod; //0
            
            for(int j=0; j<i; j++){ // 0 1
                
             m[arr[i] + arr[j]]++; //2---1, 3---2
            }
        }
        return ans;
    }
};
