//You have a lock in front of you with 4 circular wheels. Each wheel has 10 slots: '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'. 
//The wheels can rotate freely and wrap around: for example we can turn '9' to be '0', or '0' to be '9'. Each move consists of turning one wheel one slot.
//The lock initially starts at '0000', a string representing the state of the 4 wheels.
//You are given a list of deadends dead ends, meaning if the lock displays any of these codes, the wheels of the lock will stop turning and you will be unable to open it.
//Given a target representing the value of the wheels that will unlock the lock, return the minimum total number of turns required to open the lock, or -1 if it is impossible.
//Input: deadends = ["0201","0101","0102","1212","2002"], target = "0202"
//Output: 6
//Explanation: 
//A sequence of valid moves would be "0000" -> "1000" -> "1100" -> "1200" -> "1201" -> "1202" -> "0202".
//Note that a sequence like "0000" -> "0001" -> "0002" -> "0102" -> "0202" would be invalid,
//because the wheels of the lock become stuck after the display becomes the dead end "0102".

int findMatch(vector<string> &deadends,string target)
{
   unordered_set<string> dead(deadends.begin(),deadends.end());
 if(target=="0000"){
return -1;
 }

queue<pair<curr,steps>> q;
unordered_map<string> visited;
q.push({"0000",0);
visited.insert("0000");

while(!q.empty()){
auto[curr,steps]=q.front(); q.pop();

if(curr==target){
return steps;
}

for(int i=0;i<4;i++){
char c=curr[i];
for(int delta:{1:-1}){
char nextChar=(c-'0'+delta+10)%10+'0';
string next=char[i];
next[i]=charNext;

if(!dead.count(next)&&!visited.count(next)){
visited.insert(next);
q.push({next,steps+1});
}
}
}
}
return -1;
}
