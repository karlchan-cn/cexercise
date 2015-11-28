#include <stdio.h>
#include <stdlib.h>
void fortune_cookie(char msg[]){
    printf("str is:%s",msg);
    printf("size of:%lu",sizeof(msg));
}
void go_south_east(int *lat,int *lon){
    *lat -= 1;
    *lon += 1;
}
int main(){
    char str[] = "helloooo karl!";
    printf("%i\n",sizeof(str));
    int intArr[] = {1,2,3,1000};
    printf("%i\n",3[intArr]);
    fortune_cookie(str);
    int latVal = -30;
    int lonVal = 64;
    int *lat = &latVal;
    int *lon = &lonVal;
    go_south_east(lat,lon);
    printf("[%i,%i]",latVal,lonVal);
    printf("[%p,%p]",lat,lon);
} 
