class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first1=-1,last1=-1;
        BinaryS(nums,0,nums.size()-1,target,"first",first1);
        BinaryS(nums,0,nums.size()-1,target,"last",last1);
        return {first1,last1};
    }
public:
    void BinaryS(vector<int>& nums,int l, int r,int target,string mode,int &ans){
        if(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                ans=mid;
                if(mode=="first"){
                    BinaryS(nums,l,mid-1,target,mode,ans);
                    
                }
                else{
                    BinaryS(nums,mid+1,r,target,mode,ans);
                }
            }
            else if(nums[mid]>target){
                BinaryS(nums,l,mid-1,target,mode,ans);
            }
            else{
                BinaryS(nums,mid+1,r,target,mode,ans);
            }
        }
    }
};
