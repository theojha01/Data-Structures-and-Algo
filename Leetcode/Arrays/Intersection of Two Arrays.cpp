class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int>v;
        unordered_set<int>s;
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]); //121
        }
        for(int i=0;i<nums2.size();i++){
            if(s.find(nums2[i])!=s.end()){
                        
               v.push_back(nums2[i]);
            }
        }
        unordered_set<int>s1;
        for(int i=0; i<v.size();i++){
           s1.insert(v[i]);
        }
        //v.clear();
        vector<int> v1(s1.begin(),s1.end());
        return v1;
   
    }
};
