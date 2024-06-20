class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

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




void printSuggestion(TrieNode* curr,vector<int> &temp,string prefix)
{
     if(curr->isTerminal)
         temp.push_back(prefix);

for(char ch='a';ch<='z';ch++){
TreeNode* next=curr->children[ch-'a'];

if(next!=NULL)
{
prefix.push_back(ch);
printSuggestion(next,temp,prefix);
prefix.pop_back();
}
}
}

vector<vector<string>> getSugeestion(string str)
{
   TreeNode* prev=root;
vector<vector<string>> output;
string prefix="";

for(int i=0;i<str.length();i++)
{  
    char lastch=str[i];

   prefix.push_back(lastch);

  TreeNode* curr=prev->children[ch-'a'];

 if(curr==NULL)
{
break;
}

vector<int> temp;
printSuggestion(curr,temp,prefix);
output.push_back(temp);
temp.clear();
prev=clear;
}
return output;
}

vector<vector<string>> phoneDirectory(vector<string> &ContactList,string &Strquery)
{
     Trie *t=new Trie();
    for(int i=0;i<ContactList.size();i++)
{
  string str=ContactList[i];
t->insertword(str);
}

//return ans
   getSuggestion(Strquery);
}
