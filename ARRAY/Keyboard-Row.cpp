//Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.
//Note that the strings are case-insensitive, both lowercased and uppercased of the same letter are treated as if they are at the same row.
//In the American keyboard:
//the first row consists of the characters "qwertyuiop",
//the second row consists of the characters "asdfghjkl", and
//the third row consists of the characters "zxcvbnm".
//Input: words = ["Hello","Alaska","Dad","Peace"]
//Output: ["Alaska","Dad"]
//Explanation:
//Both "a" and "A" are in the 2nd row of the American keyboard due to case insensitivity.

vector<string> keyboard(vector<string> &words){

      unordered_map<string,int> charRow;
     string row1="qwertyuiop",row2="asdfghjkl",row3="zxcvbnm";
   for(char c:row1) charRow[c]=1;
   for(char c:row2) charRow[c]=2;
  for(char c:row3) charRow[c]=3;

vector<string> ans;
  
for(auto &word:words)
{
   int row=charRow[tolower(word[0]);
   bool  isValid=true;
for(char c:word)
{
  if(charRow[tolower(c)]!=row)
{
    isValid=false;
break;
}
}
if(isValid)
{
    ans.push_back(word);
}
}
return ans;
}
