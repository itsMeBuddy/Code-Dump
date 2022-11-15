class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        // TC -> O(n)
        // SC -> O(1)
        // intuition --> (a ^ b = c) => (a = b ^ c)
        for(int i=pref.size()-1;i>0;i--)
            pref[i] = pref[i] xor pref[i-1];
        return pref;
    }
};