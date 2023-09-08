#include<stdio.h>
#include<string.h>
#include<ctype.h>
main()
{
char s[50];
int i,l,alpha=0,digit=0,count=0,vowels=0,consonants=0,space=0,specialchar=0;
printf("enter a string:\n");
gets(s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(isdigit(s[i]))digit++;
else
if(isspace(s[i]))space++;
else
if(ispunct(s[i]))specialchar++;
else
{
alpha++;
if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
vowels++;
else
consonants++;
}
}
printf("number of alphabets=%d\n",alpha);
printf("number of digits=%d\n",digit);
printf("number of vowels=%d\n",vowels);
printf("number of consonants=%d\n",consonants);
printf("number of space=%d\n",space);
printf("number of specialchar=%d\n",specialchar);
}



