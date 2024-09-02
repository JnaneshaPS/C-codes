//You are given a 0-indexed integer array nums of even length and there is also an empty array arr. Alice and Bob decided to play a game where in every round Alice and Bob will do one move. The rules of the game are as follows:

//Every round, first Alice will remove the minimum element from nums, and then Bob does the same.
//Now, first Bob will append the removed element in the array arr, and then Alice does the same.
//The game continues until nums becomes empty.
//Return the resulting array arr.

vector<int> minimum(vector<int> arr)
{
 vector<int> ans;

sort(arr.begin(),arr.end());

int i=0;
while(i<arr.size());
{
   int alice=arr[i];
    if(i<n){

    int bob=arr[i];
         i++;
ans.push_back(bob);
ans.push_back(alice);
    }
}
return ans;
}
