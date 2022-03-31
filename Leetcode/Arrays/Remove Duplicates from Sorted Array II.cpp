class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        int count=0;
        for(int i: nums){
            m[i]++;
            if(m[i]>2){
                m[i]=2;
            }
        }
        int n =nums.size();
        nums.clear();
        for(auto i:m){
            while(i.second!=0){
                nums.push_back(i.first);
                i.second--;
            }
        }
        sort(nums.begin(),nums.end());
        return nums.size();
        
    }
};
