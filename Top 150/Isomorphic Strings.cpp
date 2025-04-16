//Given two strings s and t, determine if they are isomorphic.
//Two strings s and t are isomorphic if the characters in s can be replaced to get t.
//All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

bool isIsomorphic(String s,String t)
{
  if(s.length()!=t.length()) return false;

unordered_map<char,char> sT,tT;

    for(int i=0;i<s.length();i++)
{
    char c1=s[i],c2=t[i];

if((sT.count(c1)&&sT[c1]=c2)||
  (tT.count(c2)&&tT[c2]!=c1))
return false;


sT[c1]=c2;
tT[c2]=c1;
}
return true;
}
     
