class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int front = 0;
        int back = numbers.size() - 1;
        vector<int> solution;

        while (front < back)
        {
            int result = numbers.at(front) + numbers.at(back);
            if (result < target)
            {
                front++;
            }
            else if (result > target)
            {
                back--;
            }
            else
            {
                solution.push_back(front + 1);
                solution.push_back(back + 1);
                break;
            }
        }
        return solution;

    }
};
