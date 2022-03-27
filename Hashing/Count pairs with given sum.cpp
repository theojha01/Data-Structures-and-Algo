class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        
        unordered_map<int,int> m;
       for(int i=0;i<n;i++){
           m[arr[i]]++; //1--2,5--1,7--1
       }
       int count=0;
       for(int i=0;i<n;i++){
           count+=m[k-arr[i]];//1,3,4
           if(k-arr[i]==arr[i]){
               count--;
           }
   }
   return count/2;
    }
};
