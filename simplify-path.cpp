
string simplifyPath(string path)
{
     stack<string> s;

for(int i=0;i<path.size();i++)
{
     stack segment;
   while(i<path.size()&&path[i]=="/")
{
i++;
}
while(i<path.size()&&path[i]!="/")
{
    segment=segment+path[i];
i++;
}

if(segment=="."||segment.empty())
{
       continue;
}
else if(segment=="..")
{
     if(!s.empty())
{
       s.pop();
}
}
else
{
     s.push(segment);
}
}

string reasult;

if(s.empty())
{
       reasult="/";
}
     else {
while(!s.empty())
{
       reasult="/"+s.top()+reasult;
     s.pop();
}
}
return reasult;
}

