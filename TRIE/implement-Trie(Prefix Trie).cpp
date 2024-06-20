class Treenode {
public:
    char data;
    Treenode* children[26];
    bool isTerminal;

    Treenode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
public:
         Treenode* root;

    Trie(){
        root = new Treenode('\0');
    }
  
    void insertUtil(Treenode *root,string word)
    {
        if(word.size()==0)
        {
          root->isTerminal=true;
            return ;
        }

        int index=word[0]-'a';
        Treenode *child;

        if(root->children[index]!=NULL)
          {
            child=root->children[index];
          }
          else{
            child=new Treenode(word[0]);
            root->children[index]=child;
          }
          insertUtil(child,word.substr(1));
    }
    void insert(string word) {
        insertUtil(root,word);
    }
    bool searchUtil(Treenode* root,string word)
    {
         if(word.length()==NULL)
        {
            return root->isTerminal;
        }
        int index=word[0]-'a';
        Treenode *child;

        if(root->children[index]!=NULL)
        {
            child=root->children[index];
        }
        else{
            return false;
        }
        return searchUtil(child,word.substr(1));
    }

    bool search(string word) {
       return  searchUtil(root,word);
    }
     bool startsWithUtil(Treenode* root, string prefix) {
        if (prefix.length() == 0) {
            return true;
        }

        int index = prefix[0] - 'a';
        Treenode* child;

        // Present
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        // Absent
        else {
            return false;
        }
          return startsWithUtil(child, prefix.substr(1));
    }
    
    bool startsWith(string prefix) {
       return startsWithUtil(root,prefix);
    }
};
