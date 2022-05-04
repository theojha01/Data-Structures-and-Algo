class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
//Method 1      
      unordered_map<int,int>m;
        for(int i: nums){
            m[i]++;
        }
        int count=0;
        for(auto j:m){
            if(m.find(k-j.first)!=m.end()){
                //count++;
                count+= min(j.second,m[k-j.first]);
               
            }
        }
        return count/2; //
 

//Method 2
         unordered_map<int,int> mp;
        int cnt=0;
        for(auto i: nums){
            int val = k - i; 
            if(mp.find(val) != mp.end()){
                if(mp[val] == 1) mp.erase(val);
                else mp[val]--;  
                cnt++;
            }
            else mp[i]++;
        }
        return cnt;
        
    }
};
