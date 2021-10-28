#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int inputMonth= atoi(argv[1]);
    if (inputMonth < 1 || inputMonth > 12)
    {
        printf("Invalid input");
        return 0;
    }
    
    time_t t= time(NULL);
    struct tm time= *localtime(&t);
    char* months[]= {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    printf("%s of %d", months[inputMonth-1], time.tm_year+1900);
    return 0;
}
