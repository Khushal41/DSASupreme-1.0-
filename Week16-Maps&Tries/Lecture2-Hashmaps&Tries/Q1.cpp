#include <iostream>
using namespace std;

// Class representing a node in the Trie
class TrieNode
{
public:
        char data;              // Character stored in the node
        TrieNode *children[26]; // Array of pointers to child nodes, one for each letter of the alphabet
        bool isTerminal;        // Flag to check if the node represents the end of a word

        // Constructor to initialize the node
        TrieNode(char d)
        {
                this->data = d; // Assign the character to the node
                for (int i = 0; i < 26; i++)
                {
                        children[i] = NULL; // Initialize all children to NULL
                }
                this->isTerminal = false; // Initialize isTerminal to false
        }
};

// Function to insert a word into the Trie
void insertWord(TrieNode *root, string word)
{
        // Base case: If the word is empty, mark the current node as terminal and return
        if (word.length() == 0)
        {
                root->isTerminal = true;
                return;
        }

        // Get the first character of the word and calculate its index
        char ch = word[0];
        int index = ch - 'a';
        TrieNode *child;

        // If a child node corresponding to the character exists, proceed with that node
        if (root->children[index] != NULL)
        {
                child = root->children[index];
        }
        else
        {
                // If the child node does not exist, create a new node and assign it
                child = new TrieNode(ch);
                root->children[index] = child;
        }

        // Recursively insert the remaining part of the word
        insertWord(child, word.substr(1));
}

// Function to search for a word in the Trie
bool searchWord(TrieNode *root, string word)
{
        // Base case: If the word is empty, return the isTerminal flag of the current node
        if (word.length() == 0)
        {
                return root->isTerminal;
        }

        // Get the first character of the word and calculate its index
        char ch = word[0];
        int index = ch - 'a';
        TrieNode *child;

        // If a child node corresponding to the character exists, proceed with that node
        if (root->children[index] != NULL)
        {
                child = root->children[index];
        }
        else
        {
                // If the child node does not exist, the word is not present in the Trie
                return false;
        }

        // Recursively search for the remaining part of the word
        return searchWord(child, word.substr(1));
}

int main()
{
        // Create the root of the Trie with a dummy character '-'
        TrieNode *root = new TrieNode('-');

        // Insert words into the Trie
        insertWord(root, "coding");
        insertWord(root, "code");
        insertWord(root, "coder");
        insertWord(root, "codehelp");
        insertWord(root, "baba");
        insertWord(root, "baby");
        insertWord(root, "babu");
        insertWord(root, "shona");

        // Search for a word in the Trie
        cout << "Searching World :- " << endl;
        if (searchWord(root, "coding"))
        {
                cout << "Present" << endl; // Word is present in the Trie
        }
        else
        {
                cout << "Absent" << endl; // Word is not present in the Trie
        }

        return 0;
}
