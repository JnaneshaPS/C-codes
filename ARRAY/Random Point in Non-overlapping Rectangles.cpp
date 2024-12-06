//You are given an array of non-overlapping axis-aligned rectangles rects where rects[i] = [ai, bi, xi, yi] indicates that (ai, bi) is the bottom-left corner point of the ith rectangle 
//and (xi, yi) is the top-right corner point of the ith rectangle. Design an algorithm to pick a random integer point inside the space covered by one of the given rectangles.
//A point on the perimeter of a rectangle is included in the space covered by the rectangle.
//Any integer point inside the space covered by one of the given rectangles should be equally likely to be returned.
//Note that an integer point is a point that has integer coordinates.
//Implement the Solution class:
//Solution(int[][] rects) Initializes the object with the given rectangles rects.
//int[] pick() Returns a random integer point [u, v] inside the space covered by one of the given rectangles.

class Solution
{
   vector<vector<int>> rects;
  vector<int> PrefixArea;
   int totalArea;

Solution()
{
    this.rects=rects;
      PrefixArea.reserve(rects.size());
       totalArea=0;
 for(auto &rect:rects)
{
     int area=(rect[2]-rect[1]+1)*(rect[3]-rect[0]+1);
    totalArea+=area;
     PrefixArea.push_back(totalArea);
}
}

vector<int> pick()
{
int randArea=rand()%totalArea;
int rectIndex=lower_bound(PrefixArea.begin(),PrefixArea.end(),randArea+1)-PrefixArea.begin();
const auto &rect=rects[rectIndex];

int x=rect[0]+rand()%(rect[2]-rect[0]+1);
int y=rect[1]+rand()%(rect[3]-rect[1]+1);

return {x,y};
}
