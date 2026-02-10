class Solution {
    public:
bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int n = s.length();
        int arr[26] = {0};
        for(int i = 0;i < s.length();i++) {
            arr[s.at(i) - 'a']++;
        }
        for(int i = 0;i < t.length();i++) {
            arr[t.at(i) - 'a']--;
        }
        for(int i = 0;i < 26;i++) {
            if(arr[i] != 0) return false;
        }
        return true;
    }
};


// class Solution {
// public:
//     string bubbleSort(string str) {
//         for(int i = 0;i < str.length();i++) {
//             for(int j = 1;j < str.length() - i;j++) {
//                 if(str.at(j) < str.at(j - 1)) {
//                     char temp = str.at(j - 1);
//                     str.at(j - 1) = str.at(j);
//                     str.at(j) = temp;
//                 }
//             }
//         }
//         return str;
//     }
//     bool isAnagram(string s, string t) {
//         if(s.length() != t.length()) return false;
//         s = bubbleSort(s);
//         t = bubbleSort(t);
//         for(int i = 0;i < s.length();i++) {
//             if(s.at(i) != t.at(i)) {
//                 return false;
//             }
//         }
//         return true;
//     }
// };
