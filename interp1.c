//Created by: Krishna Shrestha
//E-mail: shresthakrishna1997@gmail.com

//P.S. : Since the numeric values are equal in case of each method, the optional parameters 'method' and 'extrapolation' are excluded

#include<stdio.h>
#include<stdlib.h>

float interp1(float x1, float x2, float xp, float y1, float y2)
{
    float a, b;
    a = (y2 - y1) / (x2 - x1);
    b = -a * x1 + y1;
    return (a * xp + b);
}

void main()
{
    int m, n, i;
    float xp[50], yp[50];
    float x[50], y[50];

    system("cls");

    //Accepting data
    printf("Enter the number of elements in x and y: ");
    scanf("%d", &n);
    printf("\n\nEnter the elements of x: ");
    for (i = 0; i < n; i++)
        scanf("%f", &x[i]);
    printf("\nEnter the elements of y: ");
    for (i = 0; i < n; i++)
        scanf("%f", &y[i]);
    printf("\nEnter the number of elements in xp: ");
    scanf("%d", &m);
    printf("\nEnter the value of xp: ");
    for (i = 0; i < m; i++)
        scanf("%f", &xp);

    //All the necessary values may be passed on to another function 'interp1', where all the necessary calculations may be done.

    if (m == 1)
    {
        yp[0] = interp1(x[0], x[n-1], xp[0], y[0], y[n-1]);
        //Display the result
        printf("\n\nResult");
        printf("\nyp = \n %f", yp[0]);
    }
    else
    {
        for (i = 0; i < m-1; i++)
        {
            yp[i] = interp1(x[i], x[i+1], xp[i], y[i], y[i+1]);
        }
        yp[m-1] = interp1(x[n-1], x[n], xp[m-1], y[n-1], y[n]);
        //Display the result
        printf("\n\nResult\nyp = \n");
        for (i = 0; i < m; i++)
            printf("\t%f", yp[i]);

    }

}
