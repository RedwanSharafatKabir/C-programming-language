#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp,*fp1;
    char a[1000];
    fp=fopen("file_advanced.txt","r+");     /// "w+" mode দিয়ে  write করা  যায়,  কিন্তু  read করার  জন্য  নতুন  করে  data ইনপুট  করতে  হবে  এবং  আগের  data সব  মুছে  যাবে
    fp1=fopen("file_advanced.txt","r+");    /// "r+" mode দিয়ে  read করা  যায় , কিন্তু  আবার  write করার সময়  আগের  data মুছে  যায়
    fprintf(fp,"Advanced Mode");            /// "a+" mode দিয়ে  আগের   data থাকবে  এবং  নতুন  data লিখলে  আগের  data এর  পরে  থেকে  লেখা  হবে
    fscanf(fp1,"%s",a);                     ///       এবং  read করতে  চাইলে  আগের  data read করা  যাবে
    printf("%s\n",a);
    fclose(fp);
    fclose(fp1);
    return 0;
}
