//Winter is coming! During the contest, your first job is to design a standard heater with a fixed warm radius to warm all the houses.
//Every house can be warmed, as long as the house is within the heater's warm radius range. 
//Given the positions of houses and heaters on a horizontal line, return the minimum radius standard of heaters so that those heaters could cover all houses.
//Notice that all the heaters follow your radius standard, and the warm radius will the same.
//Input: houses = [1,2,3], heaters = [2]
//Output: 1
//Explanation: The only heater was placed in the position 2, and if we use the radius 1 standard, then all the houses can be warmed.

int heater(vector<int> &houses,vector<int> &heater)
{
  sort(houses.begin(),houses.end());
  sort(heater.begin(),heater.end());
int hetaerDist=0;

for(int house:houses)
{
    auto upper=lower_bound(heaters.begin(),heaters.end(),heater);
int dist1=(upper==heater)?INT_MAX:(upper-house);
 int dist2=(upper==lower)?INT_MAX:(upper-1-house);
  int radius=min(dist1,dist2);

int heaterDist=max(heaterDist,radius);
}
return heaterDist;
}
