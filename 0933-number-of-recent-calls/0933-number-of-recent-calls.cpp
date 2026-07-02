class RecentCounter {
public:
    RecentCounter() {
        
    }
    queue<int> q;
    int ping(int t) {
        int count = 0;
        int arr[2];
        arr[0] = t-3000;
        arr[1] = t;
        q.push(t);
        int n = q.size();
        for(int i = 0;i<n;i++){
            if(q.front()>=arr[0] && q.front()<=arr[1]){
                count++;
                int x = q.front();
                q.pop();
                q.push(x);
            }
            else {int x = q.front();
            q.pop();
            q.push(x);
            }
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */