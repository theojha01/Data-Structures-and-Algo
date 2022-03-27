class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<int,int>m;
       for(int i=0;i<S.length();i++){
           m[S[i]]++;
       }
       for(int i=0;i<S.length();i++){
           if(m[S[i]]<2){
               return S[i];
           }
       }
       return '$';  
    }
};
