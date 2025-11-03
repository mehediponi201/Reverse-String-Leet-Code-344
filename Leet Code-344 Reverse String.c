
#include<stdio.h>
#include<string.h>
void reverseString(char* s, int sSize)
{
    int left=0,right=sSize-1;
    while(left<right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    printf("%s",s);
}
int main()
{
    char str[] = {'H','a','n','n','a','h','\0'};
    int len = strlen(str);
    reverseString(str,len);
}
