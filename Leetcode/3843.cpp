#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> freqCount;
        for(int n : nums) {
            freq[n]++;
        }
        for(const auto& pair : freq){
            freqCount[pair.second]++;
        }
        for(int n : nums) {
            if(freqCount[freq[n]] == 1)
                return n;
        }
       
        return -1;
        

    }
};