//Given a pattern and a string s, find if s follows the same pattern.
//Here follow means a full match, such that there is a bijection between a letter in pattern and a non-empty word in s. Specifically:
//Each letter in pattern maps to exactly one unique word in s.
//Each unique word in s maps to exactly one letter in pattern.
//No two letters map to the same word, and no two words map to the same letter.

bool wordPattern(string pattern,string s)
{
    unordered_map<char,string> CharToWord;
     unordered_map<string,char> WordToChar;

stringstream ss(s);
string word;
vector<string> words;

while(words>>ss) words.push_back(word);

for(int i=0;i<pattern.length();i++)
{
   char c=pattern[i];
    char w=words[i];

  if ((charToWord.count(c) && charToWord[c] != w) ||
                (wordToChar.count(w) && wordToChar[w] != c))
                return false;

CharToWord[c]=w;
WordToChar[w]=c;
}
return true;
}
