//You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
//Find two lines that together with the x-axis form a container, such that the container contains the most water.
//Return the maximum amount of water a container can store.
//Notice that you may not slant the container.


int mostWater(vector<int> &heights)
{

   int i=0,j=height.size()-1;
   int maxArea=0;

while(i<j)
{
   int minHeight=min(height[i],height[j]);
   int area=minHeight*(j-i);

maxArea=max(maxArea,area);

if(height[i]<height[j])
{
   i++;
}else[
    j++;
}
}
return maxArea;
]
