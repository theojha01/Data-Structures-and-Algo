class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int>v;
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }
        for(int i=1;i<=nums.size();i++){
            if(m[i]==0){
                v.push_back(i);
            }
        }
        return v;
    }
};
