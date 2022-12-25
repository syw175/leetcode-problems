#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // Naive Solution
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    vector<int> twoSum(vector<int>& nums, int target)
	{
        vector<int> solution;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i+1; j < nums.size(); j++)
            {
                // If the sum of two pairs is the target, add them to our solution vector
                if (nums.at(i) + nums.at(j) == target)
                {
                    solution.push_back(i);
                    solution.push_back(j);
                }
            }
        }
        return solution;
    }

    // Solution using a hashtable
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> twoSum(vector<int>& nums, int target)
    {
        vector<int> solutionSet;
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++)
        {
            if (seen.find(target - nums.at(i)) != seen.end())
            {
                solutionSet.push_back(i);
                solutionSet.push_back(seen.at(target-nums.at(i)));
            }
            seen.insert({nums.at(i), i});

        }
        return solutionSet;
    }
};
