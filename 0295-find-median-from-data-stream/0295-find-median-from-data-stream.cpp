class MedianFinder {
public:
    priority_queue<int> maxh;
    priority_queue<int,vector<int>,greater<int>> minh;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxh.empty()) {
            maxh.push(num);
            return;
        }
        else if(num <= maxh.top()) maxh.push(num);
        else  minh.push(num);
        if(minh.size()>maxh.size()+1){
                maxh.push(minh.top());
                minh.pop();
        }
        else if(minh.size()+1 < maxh.size()){
                minh.push(maxh.top());
                maxh.pop();
        }
    }
    
    double findMedian() {
        if(minh.empty()&& maxh.empty()) return NULL;
        if(minh.size()==maxh.size()) return (minh.top()+maxh.top())/2.0;
       else if(minh.size()>maxh.size()) return minh.top();
       else return maxh.top();
        return 0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */