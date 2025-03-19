//Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

 int findIndex(string haystack,string needle)
{
   size_t pos=haystack.find(needle);
   return (pos!=string::npos)pos:-1;
}
