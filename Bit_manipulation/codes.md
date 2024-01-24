#### The way to  find , the permutaion of string is palindrome or not , possible?
##### it checks the palindrome in O(n) time and o(1) space
 ```c++
int bit_vector=0;
for(int i=0;i<s.length();i++){
    int val = s[i]='0';
    int mask = 1<<val;
    bit_vector^=mask;
}
return (bit_vector&(bit_vector-1))==0;

```