class Solution {
public:
    bool isHappy(int n) {
       unordered_set<int>visit;
       while(visit.find(n)==visit.end()){
        visit.insert(n);
        n=getNumber(n);
        if(n==1){
            return true;
        }        
       }
       return false;
    }
private:
    int getNumber(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum=sum+digit*digit;
            n/=10;
        }
        return sum;
    }
};