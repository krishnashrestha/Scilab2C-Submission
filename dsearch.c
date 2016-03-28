//Created by: Krishna Shrestha
//E-mail: shresthakrishna1997@gmail.com

//P.S. : Values for bins must be entered in ascending order

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i, j, k, m, n, o;
    int x[20], bins[20];
    int i_bins[20] = {0};
    int count[20] = {0};
    int outside = 0;

    system("cls");

    //Accept the data
    printf("Enter the no of values in X: ");
    scanf("%d", &n);
    printf("\nEnter the values for X: ");
    for (i = 0; i < n; i++)
        scanf("%d", &x[i]);

    printf("\n\nEnter the no of values in bins: ");
    scanf("%d", &m);
    printf("\nEnter the values for bins: ");
    for (i = 0; i < m; i++)
        scanf("%d", &bins[i]);

    //Calculations

    //For i_bins
    //Here, we consider a range where the two consecutive elements of bins are the limits. The 1st two elements form the 1st range, 2nd and 3rd elements form the 2nd range, and so on. Values of each element of i_bins depict the range in which the corresponding element of X lies. For example, value 1 means the corresponding element lies in 1st range, i.e. in between 1st and 2nd element of bins.
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m-1; j++)
        {
            if (j == 0)
                o = bins[j];
            else
                o = bins[j] + 1;
            for (k = o; k <= bins[j+1]; k++)
            {
                if (k == x[i])
                    i_bins[i] = j+1;
            }
        }
    }

    //For outside and counts
    //The number of elements with value zero will be counted as 'outside', as their corresponding values in X lie outside all the ranges.
    //The number of elements lying in each of the range will be counted, and counts will display the number of elements in 1st range, 2nd range, and so on.
    for (i = 0; i < n; i++)
    {
        if (i_bins[i] == 0)
            outside++;
        else
            for (j = 1; j < m; j++)
            {
                if(i_bins[i] == j)
                    count[j-1]++;
            }
    }

    //Display the results
    printf("\n\nResults\n");
    printf("\noutside = \n%d", outside);
    printf("\ncounts = \n");
    for (i = 0; i < m-1; i++)
        printf("%d\t", count[i]);
    printf("\ni_bins = \n");
    for (i = 0; i < n; i++)
        printf("%d\t", i_bins[i]);

    return 0;
}



/*
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
                        Example
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

[i_bin, counts, outside] = dsearch([11 13 1 7 5 2 9], [5 11 15 20])

In the following example, we consider 3 intervals I1 = [5,11], I2 = (11,15] and I3 = (15,20]. We are looking for the location of the entries of X = [11 13 1 7 5 2 9] in these intervals.

Displayed output:

 outside  =
    2.
 counts  =
    4.    1.    0.
 i_bin  =
    1.    2.    0.    1.    1.    0.    1.

-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        Copied from : Scilab Help >> Elementary Functions > Search and sort > dsearch
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

*/
