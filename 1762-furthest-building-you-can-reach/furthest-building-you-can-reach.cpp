class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        priority_queue <int, vector<int>, greater<int>> pq;
        int cnt=0;
        for(int i=0;i<(h.size()-1);i++){
            int diff = h[i + 1] - h[i];
            if (diff > 0) { 
                pq.push(diff);
                if (pq.size() > l) {
                    int h1 = pq.top();
                    pq.pop();
                    b -= h1;
                    if (b < 0) {
                        return i;
                    }
                }
            }
        }
        return h.size()-1;
    }
};