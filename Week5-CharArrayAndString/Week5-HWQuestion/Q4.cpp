// Reverse Vowels of a string [Leetcode 345]

// Given a string s, reverse only all the vowels in the string and return it.

// The vowels are 'a','e', 'i', 'o', and'u', and they can appear in both lower and upper cases, more than once.

// Example 1 :
// Input : s = "hello" 
// Output : "holle" 
// Example 2 :
// Input : s = "leetcode" 
// Output : "leotcede"

class Solution
{
public:
    bool isVowel(char ch)
    {
        ch = tolower(ch);
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    string reverseVowels(string s)
    {
        int low = 0;
        int high = s.size() - 1;

        while (low < high)
        {
            if (isVowel(s[low]) && isVowel(s[high]))
            {
                swap(s[low], s[high]);
                low++, high--;
            }
            else if (isVowel(s[low]) == 0)
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        return s;
    }
};