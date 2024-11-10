//You are given n points in the plane that are all distinct, where points[i] = [xi, yi]. A boomerang is a tuple of points (i, j, k) such that the distance between i and j equals the distance 
//between i and k (the order of the tuple matters).
//Return the number of boomerangs.
//Input: points = [[0,0],[1,0],[2,0]]
//Output: 2
//Explanation: The two boomerangs are [[1,0],[0,0],[2,0]] and [[1,0],[2,0],[0,0]].

int numberOfBoomberg(vector<vector<int>> &points)
{
   int count=0;

for(int i=0;i<points.size();i++)
{
   unordered_map<int,int> distanceMatch;

for(int j=0;j<points.size();j++)
{
  if(i==j)
    continue;
     int dx=points[i][0]-points[j][0];
    int dy=points[i][1]-points[j][1];
   int dist=dx*dx+dy*dy;
  distanceMatch[dist]++;
}

for(auto& [_,freq]:distanceMatch)
{
    if(freq>1)
{
   count+=freq*(freq-1);
}
}
return count;
}
