class Solution {
    public:
        char findTheDifference(string s, string t) {
        int x,i;
        char c;
          x = s.length();
          sort(s.begin(),s.end());
          sort(t.begin(),t.end());
          for(i=0;i<x;i++){
            if(t[i] != s[i]){
                c = t[i];
                return c;
            }
          }
         return t[x];
        }
    };// time complexity = O(nlogn)
