class RandomizedSet {
public:
    unordered_set<int>mp;
    RandomizedSet() {
      //  unordered_map<int,int>mp;
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end()){
             
            return 0;
        }
        mp.insert(val);
        return 1;
    }
    
    bool remove(int val) {
        if(mp.find(val)!=mp.end()){
            mp.erase(val);
            return 1;
        } 
        return 0;
    }
    
    int getRandom() {
        return *next(mp.begin(), rand() % (mp.size()));
       
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */