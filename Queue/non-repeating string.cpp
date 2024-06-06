//first non-repeating string in the queue ;

#include<iostream>
#include<queue>

using namespace std;

string FirstNonRepeating(string A)
{
    unordered_map<char,int> count;
    queue<int> q;
    string ans="";
    for(int i=0;i<A.length();i++)
    {
        char ch=A[i];
        
        //increase the count
        count[ch]++;
        
        //push the ch into the queue
        q.push(ch);
        
        //poping the repeted element in the queue
        while(!q.empty())
        {
            if(count[q.front()>1])
            {
                q.pop();
            }
            else{
               // non-repeating strings
               ans.push_back(q.front());
               break;
            }
            
        }
        if(q.empty())
{
    ans.push_back('#');
}
    
    return ans;

}
