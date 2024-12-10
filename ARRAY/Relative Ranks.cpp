



class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        int n=score.size();
        vector<pair<int,int>> ScoreWithIndex;

        for(int i=0;i<n;i++){
            ScoreWithIndex.push_back({score[i],i});
        }

    sort(ScoreWithIndex.begin(),ScoreWithIndex.end(),[](pair<int,int> &a,pair<int,int> &b)     {
            return a.first > b.first;
        });

        vector<string> ans(n);
          for(int i=0;i<n;i++){
         if(i==0){
            ans[ScoreWithIndex[i].second]="Gold Medal";
         }
         else if(i==1){
            ans[ScoreWithIndex[i].second]="Silver Medal";
         }
        else if(i==2){
            ans[ScoreWithIndex[i].second]="Bronze Medal";
         }
         else{
            ans[ScoreWithIndex[i].second]=to_string(i+1);
         }
          }
          return ans;
    }


};
