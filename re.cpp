#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char str[]="gokul",str1[100];
int i,j=0;
for(i=strlen(str)-1;i>=0;i--)
str1[j++]=str[i];
cout<<str1;
return 0;
}
