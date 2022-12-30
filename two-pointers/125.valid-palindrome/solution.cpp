class Solution {
public:
    bool isPalindrome(string s) {
        int front = 0;
        int back = s.length()-1;

        while (front < back)
        {
            // Get the next alphanumerical front and back indices
            while (!isalnum(s[front]) && front < back) front++;
            while (!isalnum(s[back]) && front < back) back--;

            if (tolower(s[front]) != tolower(s[back])) return false;
            front++;
            back--;
        }
        return true;
    }
};
