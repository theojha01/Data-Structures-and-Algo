class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>v;
        for(int i=0;i<=n;i++){
            int sum=0;
            int num=i;
            while(num){
                sum+= num%2;
                num=num/2;
            }
            v.push_back(sum);
        }
        return v;
    }
};
