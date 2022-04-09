class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        unordered_map<int, int>::iterator it;
        priority_queue<pair<int,int>>pq;
        for(it=m.begin();it!=m.end();it++){
            pq.push(make_pair(it->second,it->first));
        }
        vector<int>v;
        while(k--){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
