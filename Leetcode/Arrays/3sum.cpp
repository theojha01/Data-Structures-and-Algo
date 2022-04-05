class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());   //-4 -1 -1 0 1 2 
        int i;
        int j;
        int k;
        int sum=0;
        vector<vector<int>>v;
        int n=nums.size();
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int>a {nums[i],nums[j],nums[k]};
                    v.push_back(a);
                    j++;
                    k--;
                    while(j<k && nums[k]==nums[k+1]){
                      k--;
                    }
                    
                }
                else if(sum>0){
                    k--;
                }
                else{
                    j++;
                }
            }
        }return v;
    }
};
