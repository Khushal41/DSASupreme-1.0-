#include <iostream>
#include <vector>
using namespace std;

// TrieNode class represents each node in the Trie
class TrieNode
{
public:
        char data;              // Character stored in this node
        TrieNode *children[26]; // Array of pointers to child nodes (26 for each letter of the alphabet)
        bool isTerminal;        // Flag to indicate if this node represents the end of a word

        // Constructor to initialize a node
        TrieNode(char d)
        {
                this->data = d;
                for (int i = 0; i < 26; i++)
                {
                        children[i] = NULL; // Initialize all children to NULL
                }
                this->isTerminal = false; // Initially, the node is not terminal
        }
};

// Function to insert a word into the Trie
void insertWord(TrieNode *root, string word)
{
        // Base case: if the word is empty, mark the current node as terminal
        if (word.length() == 0)
        {
                root->isTerminal = true;
                return;
        }

        char ch = word[0];    // First character of the word
        int index = ch - 'a'; // Calculate index based on character
        TrieNode *child;

        // If the character is already present as a child, use the existing node
        if (root->children[index] != NULL)
        {
                child = root->children[index];
        }
        else
        {
                // Otherwise, create a new node and link it as a child
                child = new TrieNode(ch);
                root->children[index] = child;
        }

        // Recur for the remaining part of the word
        insertWord(child, word.substr(1));
}

// Function to search for a word in the Trie
bool searchWord(TrieNode *root, string word)
{
        // Base case: if the word is empty, check if the current node is terminal
        if (word.length() == 0)
        {
                return root->isTerminal;
        }

        char ch = word[0];    // First character of the word
        int index = ch - 'a'; // Calculate index based on character
        TrieNode *child;

        // If the character is present as a child, continue search
        if (root->children[index] != NULL)
        {
                child = root->children[index];
        }
        else
        {
                // Otherwise, the word is not present
                return false;
        }

        // Recur for the remaining part of the word
        return searchWord(child, word.substr(1));
}

// Helper function to store suggestions from the current Trie node
void storeSuggestions(TrieNode *curr, vector<string> &temp, string &prefix)
{
        // If the current node is terminal, add the prefix to the suggestions
        if (curr->isTerminal)
        {
                temp.push_back(prefix);
        }

        // Iterate through all possible children (a to z)
        for (char ch = 'a'; ch <= 'z'; ch++)
        {
                int index = ch - 'a';
                TrieNode *next = curr->children[index];

                // If the child node exists, add the character to the prefix and recurse
                if (next != NULL)
                {
                        prefix.push_back(ch);
                        storeSuggestions(next, temp, prefix);
                        prefix.pop_back(); // Backtrack to explore other possibilities
                }
        }
}

// Function to get suggestions based on the given input prefix
vector<vector<string>> getSuggestions(TrieNode *root, string input)
{
        TrieNode *prev = root;
        vector<vector<string>> output;
        string prefix = "";

        // Iterate through each character in the input prefix
        for (int i = 0; i < input.length(); i++)
        {
                char lastch = input[i];
                int index = lastch - 'a';
                TrieNode *curr = prev->children[index];

                // If the current character is not found, break out of the loop
                if (curr == NULL)
                        break;
                else
                {
                        // Store suggestions for the current prefix
                        vector<string> temp;
                        prefix.push_back(lastch);
                        storeSuggestions(curr, temp, prefix);
                        output.push_back(temp);
                        prev = curr; // Move to the next node
                }
        }
        return output; // Return the list of suggestions
}

int main()
{
        vector<string> v = {"love", "lover", "loving", "last", "lost", "lane", "lord"};
        string input = "lovi";

        // Create the root of the Trie
        TrieNode *root = new TrieNode('-');

        // Insert all words into the Trie
        for (int i = 0; i < v.size(); i++)
        {
                insertWord(root, v[i]);
        }

        // Get suggestions based on the input prefix
        vector<vector<string>> ans = getSuggestions(root, input);

        // Print the suggestions
        cout << "Printing the answer: " << endl;
        for (int i = 0; i < ans.size(); i++)
        {
                for (int j = 0; j < ans[i].size(); j++)
                {
                        cout << ans[i][j] << ", ";
                }
                cout << endl;
        }

        return 0;
}
