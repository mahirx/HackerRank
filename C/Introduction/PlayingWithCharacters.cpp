#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    scanf("%c", &ch);
    printf("%c\n", ch);
    
    
    char s[100];
    scanf("%s", s);
    printf("%s\n", s);   
    
    
    char sen[100];
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%s\n", sen);
    return 0;
}