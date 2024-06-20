




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
