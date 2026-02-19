#include <unordered_set>
#include <unordered_map>

#include <vector>

using namespace std;

class RandomizedSet {
public:
        unordered_map<int, int> Map;
        vector<int> list;

    RandomizedSet() {}
    bool search(int val) {
        if(Map.find(val) != Map.end()){
            return true;
        }
        return false;
    }
    bool insert(int val) {
        if(search(val)) return false;
        list.push_back(val);
        Map[val] = list.size()-1;
        return true;
    }
    
    bool remove(int val) {
        if(search(val)) return false;
        auto it = Map.find(val);

    }
    
    int getRandom() {
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */