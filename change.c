#include <stdio.h>
int main(){
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    unsigned char c;

    fp = fopen("text.txt","rb");

    if(fp == NULL) 
   {
        perror("打开文件时发生错误");
        return(-1);
   }

   fp1 = fopen("result.txt", "w+b");

    while(!feof(fp)){
        c = fgetc(fp);  
        fprintf(fp1,"0x%02x\n",c);                    
    }

    fclose(fp);
    fclose(fp1);
    return(0);
}



