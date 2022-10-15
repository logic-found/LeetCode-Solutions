class Solution {
public:
    //priority queue
    int nthUglyNumber(int n) {
        if(n<=6) return n;
        priority_queue<long long int,vector<long long int>,greater<long long int>> q;
        q.push(1);
        
        for(int i=1;i<n;++i){
            long long temp=q.top();
            q.pop();
            
            while(!q.empty() && q.top()==temp)
                q.pop();
            
            q.push(2*temp);
            q.push(3*temp);
            q.push(5*temp);
            
        }
        return q.top();
    }
};