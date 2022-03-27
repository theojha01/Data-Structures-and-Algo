class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        
        map<int,int> m;
        vector<int> res;
        int i=0,j=0,c=0;
        while(j<n){
            m[A[j]]++;
            if(m[A[j]]==1)
                c++;
            if(j>=k-1){
                res.push_back(c);
                m[A[i]]--;
                if(m[A[i]] <=0)
                    c--;
                i++;
            }
            j++;
        }
        return res;

    }
};
