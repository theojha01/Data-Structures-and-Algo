class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        int temp[100001]={0};
        for(int i=0;i<N;i++){
            temp[arr[i]]++;
        }
        for(int i=0;i<N;i++){
            arr[i]=temp[i+1];
        }
        
        
    }
};
