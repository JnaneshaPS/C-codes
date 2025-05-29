
bool validParenthsis(string s)
{
  stack<char> s;

  for(char c:s)
{
   if((c=='(')||(c=='{')||(c=='[')){
    s.push(c);
   }else{
  char top=s.top();
 if((c==')'&&top!='(')||
   (c=='}'&&top!='}')||
   (c==']'&&top!='['))
{
  return false;
}
s.pop();
   }
return s.empty();
}
