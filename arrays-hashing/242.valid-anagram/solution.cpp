#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t)
    {
        // If the lengths differ, the strings are not anagrams
        if (s.length() != t.length()) return false;

        // Initialize counter arrays for each letter
        int count[256] = { 0 };
        int count2[256] = { 0 };

        // Count each letter in the strings
        for (int i = 0; i < s.length(); i++)
        {
            count[s[i]]++;
            count2[t[i]]++;
        }

        // Iterate through counter arrays and return false if any differ
        for (int i = 0; i < 256; i++)
        {
            if (count[i] != count2[i]) return false;
        }
        return true;        
    }
};