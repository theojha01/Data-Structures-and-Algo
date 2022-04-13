class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int top=0;
        int down=n-1;
        int left=0;
        int right =n-1;
        vector<vector<int>>v (n, vector<int>(n, 0));
        int c=1;
        while(top<=down){
            for(int i=left;i<=right;i++){
                v[top][i]=c;
                c++;
            }
            top++;//1
            for(int i=top;i<=down;i++){
                v[i][right]=c;
                c++;
            }
            right--;
            if(left<=right){
                for(int i=right;i>=left;i--){
                    v[down][i]=c;
                    c++;
                }
                down--;
            }
            if(top<=down){
                for(int i=down;i>=top;i--){
                    v[i][left]=c;
                    c++;
                }
                left++;
            }
        }
        return v;
    }
};
