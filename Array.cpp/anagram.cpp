class Solution {
    public:
        bool isAnagram(string s, string t) {
            if(s.length() != t.length()) return false;
            int hash1[26] ={0};
            int hash2[26] = {0};
            for(char c:s) hash1[c-'a']++;
            for(char c:t) hash2[c-'a']++;
            for (int i = 0; i < 26; i++) {
                if (hash1[i] != hash2[i]) return false;
            }
    
            return true;
        }
    }; // time complexity = O(n)
