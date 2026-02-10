class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        long n = x;
        long ori = x;
        long rev = 0;
        while(n > 0) {
            long rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        if(rev == ori) return true;
        else return false;
    }
};
