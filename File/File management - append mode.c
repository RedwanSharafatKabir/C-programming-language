#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("file_append.txt","a");   ///  এখানে  append mode এর  কাজ  হলো , যতবার  রান  করা  হবে  ততবার   "This is my file." প্রিন্ট  করা   ///
    fprintf(fp,"This is my file.\n");
    fclose(fp);
    return 0;
}

