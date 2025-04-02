class Solution {
    public:
        int thirdMax(vector<int>& nums) {
            int n,maxi;
            set<int> numq(nums.begin(), nums.end());
            vector <int> v(numq.begin(), numq.end());
            n = v.size();
             if(n<3) return v.back();
             else return v[n-3];
        }
    }; // time complexity = (nlog n)
