class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());//0012256
        int l=0;
        int h=nums.size()-1;
        int mid;
        while(l<=h){
            mid=(l+h)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
            
            
        }
        return false;
    }
};
