#include "my_header_file.h"
///  #if #else #elif #endif
///  #ifdef #ifndef #undef
///  ##
int main()
{
    int r;
    scanf("%d",&r);
    #ifdef PI
    #undef PI
    #endif // PI
    //printf("%.2lf\n",2*PI*r*r);
    #ifndef PI
    double PI = 3.1416;
    printf("%.2lf\n",2*PI*r*r);
    #endif // PI
    return 0;
}
