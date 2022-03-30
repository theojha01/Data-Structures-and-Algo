class Solution {
public:
    int arrangeCoins(int n) {
        
        int i=0;
        int sub=0;
        if(n==1){
            return 1;
        }
        while(n>=i){
            sub=n-i;
            i++;
            n=sub;
            
        }
        
        return i-1;
    }
};
