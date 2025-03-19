//A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, 
//it reads the same forward and backward. Alphanumeric characters include letters and numbers.
//Given a string s, return true if it is a palindrome, or false otherwise.

          bool validPlaindrome(string s)
{
           int left=0,right=s.length()-1;

while(left<right)
{
     while(left<right&&!isalnum(s[left])) left++;

   while(left<right&&!isalnum(s[left])) right++;

 if(tolower(s[left])!=tollower(s[right])) return fasle;

left++;
right--;
}
return true;
}
