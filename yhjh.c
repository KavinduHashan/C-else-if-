#include <stdio.h>
main()
{
    int no, p=0, n=0, z=0, counter;

    for (counter=1; counter<=10; counter++)
    {
        printf("Enter %d Number : ", counter);
        scanf("%d ",&no);

        if (no>0)
        p++;
        else if (no<0)
        n++;
        else
        z++;
    }
        printf("Number of Positives : %d\nNumber of Negatives : %d\nNumber of Zeros : %d\n",p,n,z);


}
