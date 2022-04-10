/*Input: ops = ["5","2","C","D","+"]
Output: 30
Explanation:
"5" - Add 5 to the record, record is now [5].
"2" - Add 2 to the record, record is now [5, 2].
"C" - Invalidate and remove the previous score, record is now [5].
"D" - Add 2 * 5 = 10 to the record, record is now [5, 10].
"+" - Add 5 + 10 = 15 to the record, record is now [5, 10, 15].
The total sum is 5 + 10 + 15 = 30.
*/

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
