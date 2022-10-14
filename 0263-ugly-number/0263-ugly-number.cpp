class Solution {
public:
    // divide the num with 2,3,5 until possible
    bool isUgly(int n) {
        if(n==0) return false;
        int flag=1;
        while(flag){
            flag=0;
            while(n%2==0){
                n/=2;
                flag=1;
            }
            while(n%3==0){
                n/=3;
                flag=1;
            }
            while(n%5==0){
                n/=5;
                flag=1;
            }
        }
        if(n==1) return true;
        return false;
    }
};