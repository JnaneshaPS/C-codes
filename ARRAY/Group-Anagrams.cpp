//Given an array of strings strs, group the anagrams together. You can return the answer in any order.
class solution{
vector<vector<string>> anagrams(vector<string> &strs){
unordered_map<string,vector<string>> Group;

  for(string str:strs)
    {
           string subStr=str;

      sort(subStr.begin(),sunStr.end());
      Group[subStr].push_back(str);
}
vector<vector<string>> result;
for(auto &pair:Group)
{
      result.push_back(pair.second);
}
return result;
}
};
