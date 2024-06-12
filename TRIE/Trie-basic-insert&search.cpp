#include <iostream>
#include <string>

class Trienode {
public:
    char data;
    Trienode* children[26];
    bool isTerminal;

    Trienode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    Trienode* root;

    Trie() {
        root = new Trienode('\0');
    }

    void insertUtil(Trienode* root, const std::string& word) {
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        // Assumption that word will be in caps
        int index = word[0] - 'A';
        Trienode* child;

        // Present
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        // Absent
        else {
            child = new Trienode(word[0]);
            root->children[index] = child;
        }
        // Recursive call
        insertUtil(child, word.substr(1));
    }

    void insertWord(const std::string& word) {
        insertUtil(root, word);
    }

    bool searchUtil(Trienode* root, const std::string& word) {
        // Base case
        if (word.length() == 0) {
            return root->isTerminal;
        }
        // Creating the index
        int index = word[0] - 'A';
        Trienode* child;

        // Present
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return false;
        }
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(const std::string& word) {
        return searchUtil(root, word);
    }
};

int main() {
    Trie* t = new Trie();

    t->insertWord("ABCD");
    if (t->searchWord("ABCD")) {
        std::cout << "Word found" << std::endl;
    } else {
        std::cout << "Word not found" << std::endl;
    }

    delete t;

    return 0;
}
