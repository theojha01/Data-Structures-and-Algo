class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i,j,k;
        vector<int>v;
        int n=nums.size();
        int closesum=nums[0]+nums[1]+nums[nums.size()-1];
        for(i=0;i<n-2;i++){
            j=i+1;
            k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>target){
                    k--;
                }
                else{
                    j++;
                }
                if(abs(sum-target)<abs(closesum-target)){
                    closesum=sum;
                }
            }
        }
        return closesum;
    }
};
