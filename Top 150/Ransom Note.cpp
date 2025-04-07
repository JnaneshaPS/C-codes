//iven two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.
//Each letter in magazine can only be used once in ransomNote.


bool canConstruct(string magazine,string ransomNote)
{
  vector<int> freq(26,0);


  for(char ch:magazine)
{
    freq[ch-'a']++;
}

for(char ch:ransomNote){
  if(freq[ch-'a']==0)
       return false;
 freq[char-a]--;
}
return true;
}
