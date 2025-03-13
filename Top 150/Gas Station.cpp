//There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].
//You have acar with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.
//Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.


     int  gasStation(vector<int> &gas,vector<int> &cost)
{
      int start=0;
       int current=0;
int total=0;

for(int i=0;i<gas.size();i++)
{
     current+=gas[i]-cost[i];
   total+=gas[i]-cost[i];

if(current<=0)
{
  start=i+1;
  current=0;
}
}

(total<0)?-1:start;
}
   
