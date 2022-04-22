class Solution {
    public:
        int isValid(string s) {
            // code here
            int c=0;
            for(int i=0;i<s.length();i++){
                if(s[i]=='.'){
                    c++;
                }
            }
            if(c!=3){
                return 0;
            }
            unordered_set<string> s1;
            for(int i=0;i<256;i++){
                s1.insert(to_string(i));
            }
            int count=0;
            string temp="";
            for(int i=0;i<s.length();i++){
                if(s[i]!='.'){
                    temp+=s[i];
                }
                else{
                    if(s1.count(temp)!=0){
                        count++;
                    }
                    temp="";
                }
            }
            if(s1.count(temp)!=0){
                count++;
            }
            if(count==4){
                return 1;
            }
            return 0;
        }
};
