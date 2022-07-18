#include <stdio.h>
#include <string.h>

//function to reverse a character array
void reverse(char str[])
{
int len=0;

while(str[len]!='\0')
len++;

for(int i=0; i<len/2; i++)
{
char c;
c = str[i];
str[i] = str[len-i-1];
str[len-i-1] = c;
}
}

//function to count the number of vowel
int countVowel(char str[])
{
int vowel=0, i=0;
char c;
while(str[i]!='\0')
{
c = str[i];
if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
{
vowel++;
}
i++;
}
return vowel;
}

int main()
{
//character array declartion and initialization
char str[] = "numair";

//function calling
reverse(str);

//display the result
printf("The reverse string is: %s", str);
printf("\nThe number of vowels is: %d", countVowel(str));

return 0;
}