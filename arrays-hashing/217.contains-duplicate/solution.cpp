#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        // Initiatize a hashmap for our seen integers
        unordered_set<int> seen;

        // Loop through our vector, check if our map contains the int
        for (auto i : nums)
        {
            if (seen.find(i) != seen.end()) return true;
            seen.insert(i);
        }
        return false;
    }
};