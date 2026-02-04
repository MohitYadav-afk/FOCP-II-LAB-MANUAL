class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int i = 0;
        while(i < s.length()) {
            if(s.at(i) >= 65 && s.at(i) <= 90) {
                str += s.at(i) + 32;
            }else if(s.at(i) >= 97 && s.at(i) <= 122) {
                str += s.at(i);
            }else if(s.at(i) >= 48 && s.at(i) <= 57) {
                str += s.at(i);
            }
            i++;
        }
        int j = 0;
        int k = str.length() - 1;
        while(j < k) {
            if(str.at(j) != str.at(k)) return false;
            j++;
            k--;
        }
        return true;
    }
};
