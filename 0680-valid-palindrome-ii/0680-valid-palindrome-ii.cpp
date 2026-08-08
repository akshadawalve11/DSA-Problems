class Solution {
public:
    bool validPalindrome(string s) {
        int i= 0;
        int n= s.size();
        int  j =n-1;
        while(i<j){
            if(s[i]!=s[j]){
                return val(s,i+1,j) || val(s,i,j-1);
            }
            i++;
            j--;
        }
        return true;
    }

    bool val(string s,int i,int j){
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};