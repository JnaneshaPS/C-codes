//Given an array of strings strs, return the length of the longest uncommon subsequence between them. If the longest uncommon subsequence does not exist, return -1.
//An uncommon subsequence between an array of strings is a string that is a subsequence of one string but not the others.
//A subsequence of a string s is a string that can be obtained after deleting any number of characters from s.
//For example, "abc" is a subsequence of "aebdc" because you can delete the underlined characters in "aebdc" to get "abc". Other subsequences of "aebdc" include "aebdc", "aeb", and "" (empty string).
//Input: strs = ["aba","cdc","eae"]
//Output: 3
//Input: strs = ["aaa","aaa","aa"]
//Output: -1

   bool isSubsequence(string &a,string &b)
{
      int i=0,j=0;
   while(i<a.size()&&j<b.size())
{
   if(a[i]==b[j])
{
  i++;
}
j++;
}
return i==a.size();
}

int longUncommon(vector<string> &strs)
{
   sort(strs.begin(),strs.end(),[](string &a,string &b){
      return a.size()>b.size();
   });

unordered_map<string,int> freq;

 for(const string &str:strs)
{
    freq[str]++;
}

for(int i=0;i<strs.size();i++)
{
    if(freq[strs[i]]>1) continue;
    bool isUnique=true;
for(int j=0;j<strs.size();j++)
{
    if(i!=j&&isSubsequence(strs[i],strs[j])
{
     isUnique=false;
break;
}
}

if(isUnique){
       return strs[i].size();
}
}
return -1;
}
     


   
