/*
Given a string in roman no format (s)  your task is to convert it to an integer . Various symbols and their values are given below.
I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Input:
s = V
Output: 5
*/

class Solution {
  public:
  int romanToDecimal(string &str) {
        int sum=0;
        for(int i=0;i<str.size()-1;i++){
            int a=checkval(str[i]);
            int b=checkval(str[i+1]);
            if(a>=b){
                sum=sum+a;  //xix---11+10-1
            }
            else{
                sum=sum-a;      //ixx
            }
        }
        sum=sum+checkval(str[str.size()-1]);
        return sum;
    }
    int checkval(char str){
        if(str=='I'){
            return 1;
        }
        else if(str=='V'){
            return 5;
        }
        else if(str=='X'){
            return 10;
        }
        else if(str=='L'){
            return 50;
        }
        else if(str=='C'){
            return 100;
        }
        else if(str=='D'){
            return 500;
        }
        else if(str=='M'){
            return 1000;
        }
        return -1;
    }
};
