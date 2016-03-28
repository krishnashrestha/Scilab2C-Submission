//Created by: Krishna Shrestha
//E-mail: shresthakrishna1997@gmail.com

//P.S. : The optional parameters 'method' and 'extrapolation' are excluded

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
    int n, i;
    float xp, yp;
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
    printf("\nEnter the value of xp: ");
    scanf("%f", &xp);

    //All the necessary values may be passed on to another function 'interp1', where all the necessary calculations may be done.
    yp = interp1(x[0], x[n-1], xp, y[0], y[n-1]);

    //Display the result
    printf("\n\nResult");
    printf("\nyp = \n %.2f", yp);
}
