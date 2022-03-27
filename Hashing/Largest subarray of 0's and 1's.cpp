class Solution{
  public:
    int maxLen(int arr[], int N)
    {
        // Your code here
        int sum=0;
        int len=0;
        unordered_map<int,int>m;
        m[0]=-1;
        for(int i=0;i<N;i++){
            if(arr[i]==0){
                sum=sum-1;
            }
            else{
                sum++;
            }
            if(m.find(sum)==m.end()){
                m[sum]=i;
            }
            else{
                len=max(len,i-m[sum]);
            }
        }
        return len;
    }
};
