#include <stdio.h>
void printArray(const char** arr, int len){
    for (int i=0; i<len;i++)
    printf("Array [%d]:%s, ", i, arr[i]);
    printf("\n");
}
void swap(const char** pstr1,const char** pstr2)
{
    const char* temp = *pstr1;
    *pstr1 = *pstr2;
    *pstr2 = temp;
    
}
int main()
{
    const char* strArr[] ={"aaa","bbb"};
    printArray(strArr, sizeof(strArr)/sizeof(char*));
    const char* str1 = strArr[0];
    const char* str2 = strArr[1];
    swap(&str1, &str2);
    printf("Array [0]:%s, [1]:%s,",str1, str2);
 
    return 0; 
}