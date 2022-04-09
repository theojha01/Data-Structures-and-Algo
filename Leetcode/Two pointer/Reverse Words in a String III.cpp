class Solution {
public:
    string reverseWords(string s) {
        int b=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' || i==s.size()-1){
                reverse(s.begin()+b,s.begin()+i+(i==s.size()-1));
                b=i+1;
            }
        }
        return s;
    }
};
