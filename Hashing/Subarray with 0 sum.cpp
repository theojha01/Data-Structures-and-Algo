class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        unordered_set<int> sumSet;
       
       int sum=0;
       for(int i=0; i<n; i++){
           sum += arr[i]; //4,6,3,4(wapas 4 ho gya that means beech me sab zero hua h)
           
           if(sum==0 || sumSet.find(sum)!=sumSet.end())
                   return true;
       
           sumSet.insert(sum); //
       }
       return false;
    }
};
