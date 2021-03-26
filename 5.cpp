#include <stdio.h>
#include <string.h>
/// strcmp() strcpy()
int main()
{
    char line[10] ="majority";
    char line2[10]="ask";
    if( strcmp( line, line2 ) > 0)
    {
        printf("左邊大\n");
    }
    else
    {
        printf("請看看值是多少: %d", '\0');
    }
}

