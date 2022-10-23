#include <stdio.h>
#include <stdlib.h>
void kelime(int *pnt);
int main()
{
    char arr[100]={};
    printf("Enter the wood=");
    scanf("%s",arr);
     kelime(arr);

    return 0;
}
   void kelime(int *pnt){
   int count=0;
   while(*pnt != NULL){
    count++;
    pnt++;
   }
   printf("Girdiginiz kelime %d harflidir....",count);

   }
