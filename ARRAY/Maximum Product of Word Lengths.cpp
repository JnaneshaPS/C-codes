//Given a string array words, return the maximum value of length(word[i]) * length(word[j]) where the two words do not share common letters. If no such two words exist, return 0.
//Input: words = ["abcw","baz","foo","bar","xtfn","abcdef"]
//Output: 16
//Explanation: The two words can be "abcw", "xtfn"
int maximuLength(vector<string> &words)
{
  int n=words.size();

 int ans=0;
vector<int> bitMask(n);
vector<int> wordlength(n,0);

for(int i=0;i<n;i++)
{
   for(char c:words[i])
{
   bitMask |= (1<<(c-'a'));
}
wordLength=words[i].length();
}

for(int i=0;i<n;i++)
{
  for(int j=i+1;j<n;j++)
{
   if(bitMask[i]&bitMask[j]==0)
{
    ans=max(ans,wordLength[i]*wordLength[j]);
}
}
}
return ans;
}
