class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        map<int, int> mp;
        int s = 0, max_len = 0;
        for(int i = 0; i < n; i++)
        {
            s += A[i];
            if(s == 0)
                max_len = i+1;
            else
            {
                if(mp.find(s) == mp.end())
                    mp[s] = i;
                else
                    max_len = max(max_len, i-mp[s]);
            }
            
        }
        return max_len;
    }
};
