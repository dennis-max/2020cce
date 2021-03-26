#include <stdio.h>
#include <string.h>
/// strcmp() strcpy()
int main()
{
    char line[10] ="majority";
    char line2[10]="ask";
    if( strcmp( line, line2 ) > 0)
    {
        printf("¥ªÃä¤j\n");
    }
    else
    {
        printf("½Ð¬Ý¬Ý­È¬O¦h¤Ö: %d", '\0');
    }
}

