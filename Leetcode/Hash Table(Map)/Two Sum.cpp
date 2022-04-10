class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       //2 7 11 15           2-----0   return[2---i,i]
        unordered_map<long, int>m;
        long long sub;
        for(int i=0;i<nums.size();i++){
            sub= target-nums[i];
            if(m.find(sub)!=m.end()){
                return{m[sub],i};
            }
            m[nums[i]]=i; //storing the index with number
        }
        return {0,0};
    }
};
