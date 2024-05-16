
bool isValid(string s)
{
      stack<string> opening;

    unordered_map<char,char> bracket={ {'(',')'},{'[',']'},{'{','}'};

     for(char c:s)
{
   if(bracket.count(c))
{
       opening.push(c);
}

else if(!opening.empty()&&bracket[opening.top]==c)
{
          opening.pop();
}
else{
return false;
}
} 
return opening.empty();
}
