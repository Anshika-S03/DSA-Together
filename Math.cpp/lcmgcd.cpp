//ques -

//sol -
class Solution {
    public:
      vector<int> lcmAndGcd(int a, int b) {
          // code here
          int lcm,gcd;
          int t,u;
          t=a;
          u=b;
          while(a>0 && b >0){
          if(a>b) a = a-b;
          else b= b-a;
          }
          gcd = (a > 0 ? a : b) ;
          lcm = (t*u)/gcd;
          
          return {lcm,gcd};
      }
  };