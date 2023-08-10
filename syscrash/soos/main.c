#include <3ds.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
int main()
{
    printf("\033[12;11ftrying crash");
    sleep(5);
    #define HUGE_VAL 1
    double x = HUGE_VAL;
    mkdir("/" + HUGE_VAL, 0777);
    chdir("/" + HUGE_VAL); 
    sleep(2);
    printf("\033[14;10f %s", HUGE_VAL);
    sleep(5);
    NS_LaunchTitle(0x111326890D921E90AFL, 1, 2); //another method of the first one doesn't work, might break if someone makes that their title id
    printf("\033[16;5ffailed crash");
}