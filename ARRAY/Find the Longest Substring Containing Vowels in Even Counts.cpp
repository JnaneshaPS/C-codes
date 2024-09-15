//Given the string s, return the size of the longest substring containing each vowel an even number of times. That is, 'a', 'e', 'i', 'o', and 'u' must appear an even number of times.


int largetstSubString(string s)
{
     int maxCount=0;
      int state=0;
      unordered_map<int,int> storeMap;
storeMap[0]=-1;

for(int i=0;i<s.size();i++)
  
{
             if(s[i]=='a') state^=(1<<0);
             else if(s[i]=='e') state^=(1<<1);
           else if(s[i]=='i') state^=(1<<2);
                  else if(s[i]=='o') state^=(2<<3);
             else if(s[i]=='u') state^=(3<<4);
  if(stateMap.find(state)!=stateMap.find()){
    maxCount=max(maxCount,i-stateMap[state]);
  }
  else{
    stateMap[state]=i;
  }
  return maxCount;
}
