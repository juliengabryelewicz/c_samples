#include <stdio.h>
int main()
{
    int myarr[] = { 1, 5, 15, 20, 35 };
 
    for (int a = 0; a < 5; a++) {
        switch (myarr[a]) {
        case 0 ... 9:
            printf("%d in range 0 to 9\n", myarr[a]);
            break;
        case 10 ... 20:
            printf("%d in range 10 to 20\n", myarr[a]);
            break;
        default:
            printf("%d not in range\n", myarr[a]);
            break;
        }
    }
    return 0;
}
