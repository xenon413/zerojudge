#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    char str[n*n];
    scanf("%s", &str);
    
    for(int i=0;i<n;i++){
        printf("%c", str[i*n+i]);
    }
}