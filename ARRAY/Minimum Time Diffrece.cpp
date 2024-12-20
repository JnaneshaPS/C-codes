//Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
//Input: timePoints = ["23:59","00:00"]
//Output: 1
//Input: timePoints = ["00:00","23:59","00:00"]
//Output: 0


                int minTimeDiff(vector<int> &timePoints)
{

  vector<int> minute;

for(const string& time:timePoints)
{
  int hour=stoi(time.substr(0,2));
int min=stoi(time.substr(3,2));
  minute.push_back(hour*60+min);
}

sort(minutes.begin(),minutes.end());

     int minDiff=INT_MAX;

     for(int i=1;i<minutes.size();i++){
        minDiff=min(minDiff,minutes[i]-minutes[i-1]);
     }

     int dayMin=24*60;
     minDiff=min(minDiff,dayMin-minutes.back()+minutes[0]);
     return minDiff;
    }
