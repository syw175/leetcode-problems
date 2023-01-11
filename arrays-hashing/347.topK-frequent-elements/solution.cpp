#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
		// General Idea: Iterate through vector, add each element to a hashmap along with their frequency
		// Iterate through hashmap, adding each element to a max priority queue in order of their frequency
		unordered_map<int, int> counter;
		priority_queue<pair<int, int> > pq;
		vector<int> solution;

		// Iterate through the vector and add the elements to the hashmap
		for (auto num : nums)
		{
			// If hashmap does not contain the element, add it
			if (counter.find(num) == counter.end()) counter[num] = 0;
			counter[num]++;
		}

		// Iterate through the hashmap and add the elements to the priority queue
		for (auto i : counter)
			pq.push(make_pair(i.second, i.first));

		// Iterate through the priority queue and return the top k elements
		for (int i = 0; i < k; i++)
		{
			solution.push_back(pq.top().second);
			pq.pop();
		}
		return solution;
	}
};
