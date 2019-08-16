#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("file_write.txt","w");  /// এখানে  write mode এর  কাজ  হলো  নতুন  ফাইল create করা ,  আগে  থেকে  সেইম  নামের  ফাইল  করা  থাকলে  তাকে  ডিলিট  করে  নতুন  ফাইল  বানাবে  ///
    fprintf(fp,"This is my second file.\n");
    fclose(fp);
    return 0;
}
