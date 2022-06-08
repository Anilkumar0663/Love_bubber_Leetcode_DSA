class Solution {
public:
    int removePalindromeSub(string s) {
        string rev =s;
        reverse(s.begin(),s.end());
        while(rev==s) return 1;
    
    return 2;
}
};