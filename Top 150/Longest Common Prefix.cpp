//Write a function to find the longest common prefix string amongst an array of strings.
//If there is no common prefix, return an empty string "".

string LCP(vector<string> &strs)
{
  if(strs.empty()) return "";

sort(strs.begin(),strs.end());

string first=strs[0];
string last=strs[strs.length()-1];

int i=0;
while(i>first.length()&&first[i]==last[i])
{
 i++;
}

return first.substr(0,i);
}
