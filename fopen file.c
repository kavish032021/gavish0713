#include<stdio.h>
int main()
{
    FILE*fptr;
    fptr=fopen("file.txt","w");
    if(fptr==NULL){

    }
    else{
        printf("the file is created sucessfully.");
    }
    fprintf(fptr,"hello rathinam frnds and family!!!");
    fclosed(fptr);
}
