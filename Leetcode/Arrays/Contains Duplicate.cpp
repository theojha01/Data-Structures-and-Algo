
/* Using HashMap */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second>1){
                return true;
            }
        }
        return false;
    }
};

/* Using Sort */
sort(nums.begin(),nums.end());
for(int i=0;i<nums.size()-1;i++){
   if(nums[i]==nums[i+1]){
      return true;
   }
}
return false;
