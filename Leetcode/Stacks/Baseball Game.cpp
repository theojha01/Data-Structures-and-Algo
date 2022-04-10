class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>s;
        int h,h1;
        for(int i=0;i<ops.size();i++){ //v[]
            if(ops[i]=="C"){
                s.pop();
            }
            else if(ops[i]=="D"){
                s.push(s.top()*2);
            }
            else if(ops[i]=="+"){
                h= s.top(); 
                s.pop();
                h1= h + s.top();
                s.push(h);
                s.push(h1);
            }
            else{
                s.push(stoi(ops[i]));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum=sum+s.top();
            s.pop();
        }
        return sum;
    }
};
