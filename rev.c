#include<bits/stdc++.h>
 
// Function to reverse a string
rev()
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
 
// Driver program
rev()
{
   string str = "geeksforgeeks";
   reverseStr(str);
   cout << str;
   return 0;
}
