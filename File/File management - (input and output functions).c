#include<stdio.h>
#include<stdlib.h>
struct file_struct
{
    char name[20];
    char id[20];
    char add[20];
};
int main()
{
    FILE *fp;
    struct file_struct input={"Redwan","171-15-8737","Mugda"};
    struct file_struct output;
    //scanf("%s%s%s",input.name,input.id,input.add);
    char a[1000],b[1000];
    //gets(a);                            /// read করার  সময়  console থেকে  ইনপুট  নেয়া  লাগে  না
    fp=fopen("file_function.txt","r");   /// scanf() ==> "r", printf() ==> "w"
    fread(&output,sizeof(output),1,fp);  ///  write ফাংশন  ইউস  করার  সময়   fwrite(&input,sizeof(input),1,fp);  এবং  mode "w"
    //fscanf(fp,"%s",b);                /// getc() ==> "r", putc() ==> "w"
    //b=gets(fp);
    //fgets(b,4,fp);
    //fputs(a,fp);                        /// gets() ==> "r", puts() ==> "w"
    printf("%s\n",output.id);
    fclose(fp);
    return 0;
}
