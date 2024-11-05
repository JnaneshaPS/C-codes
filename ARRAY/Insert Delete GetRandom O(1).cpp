//Implement the RandomizedSet class:
//RandomizedSet() Initializes the RandomizedSet object.
//bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.
//bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.
//int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). 
//Each element must have the same probability of being returned.
//You must implement the functions of the class such that each function works in average O(1) time complexity.
//Input
//["RandomizedSet", "insert", "remove", "insert", "getRandom", "remove", "insert", "getRandom"]
//[[], [1], [2], [2], [], [1], [2], []]
//Output
//[null, true, false, true, 2, true, false, 2]

class Solution
{
public:
       unordered_map<int,int> valueToIndex;
       vector<int> nums;

    RandomizedSet(vector<int> &nums)
{
    nums.clear();
    valueToIndex.clear();
}

bool insert(int val(
{
    if(valueToIndex.find(val)!=valueToIndex.end())
    {
      return false;
    }

  ans.push_back(val);
  valueToIndex[val]=nums.size()-1;
  return true;
}
bool remove(int val)
{
   if(valueToIndex.find(val)==valueToIndex.end())
{
return false;
}

 int last=nums.back();
int index=valueToIndex[val];
  nums[index]=last;
  valueToInex[last]=index;

nums.pop_back();
valueToIndex.erase();
return true;
}

int getRandom()
{
 int n=nums.size();
 int random=rand()%n;
return ans[random];
}
}
