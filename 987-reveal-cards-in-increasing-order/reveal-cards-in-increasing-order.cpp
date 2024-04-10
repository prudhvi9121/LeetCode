class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(), deck.end());
        int n = deck.size();
        vector<int> result(n);
        deque<int> qq;
        
        for (int i = 0; i < n; i++) { 
            qq.push_back(i);
        }
        
        for (int card : deck) {
            int idx = qq.front(); 
            qq.pop_front(); 
            result[idx] = card;
            if (!qq.empty()) {
                qq.push_back(qq.front()); 
                qq.pop_front(); 
            }
        }
        
        return result;

    }
};