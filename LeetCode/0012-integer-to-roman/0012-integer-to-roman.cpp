class Solution {
public:
    string intToRoman(int num) {
        vector<string> ones =       {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        vector<string> tens =       {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        vector<string> hundreds =   {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        vector<string> thousands =  {"", "M", "MM", "MMM"};
        
        string ans = "";
        ans += thousands[num/1000];
        num %= 1000;
        ans += hundreds[num/100];
        num %= 100;
        ans += tens[num/10];
        num %= 10;
        ans += ones[num];
        
        
        return ans;
        
    }
};