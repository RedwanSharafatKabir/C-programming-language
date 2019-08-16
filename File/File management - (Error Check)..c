#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    fp=fopen("file_error.txt","w");
    getc(fp);
    if(ferror(fp)){                   /// if(!fp)  কন্ডিশনের  পরে   perror() ফাংশন  দিতে  হবে ,  "এর  মানে  file missing."
        printf("Error 404.\n");       /// if(feof(fp))  এর  মানে  file read করতে  করতে   EOF এ  গিয়ে শেষ  হয়ে  গেছে
    }                                 /// if(error(fp))  এর  মানে  file এ  কোন   ERROR আছে  কিনা  ?
    clearerr(fp);                     /// clearerr(fp)  ফাংশন  দিয়ে  ফাইল  রিসেট  করা  হয়,  যাতে  কোন  ERROR না  থাকে
    if(ferror(fp)){
        printf("Error 404.\n");
    }
    // perror("What's wrong ? ");
    fclose(fp);
    return 0;
}
