#include <stdio.h>
#define NULL ((void*)0)


// int main()
// {
//     float value = 3.14;
//     float *p = &value;
//     float *q = p;
//     float ans = *p + *q;

//     printf("%0.2f\n",ans);
//     printf("%0.2f\n", *p);
//     printf("%0.2f\n", p);
//     printf("%0.2f\n",*q);
//     printf("%0.2f\n", value);

//     return 0;
// }

// int main()
// {
//     int arr[] = {10,20,30,40};
//     int *p = arr;
//     int *q = arr + 1;
//     int ans = *q - *p;

//     printf("%d\n", arr);
//     printf("%d\n", q);
//     printf("%d\n", p);
//     printf("%d\n", ans);



//     return 0;
// }


///////////////////////////////////////////////////////////////////////////////
// doubt didn't understand
// int main()
// {
//     int no1 = 11, no2 = 21, no3 = 51;
//     int *arr[] = {&no1, &no2, &no3};

//     printf("%d\n", arr[0]);
//     printf("%d\n", *arr[0]);
    
//     printf("%d\n", arr[1]);
//     printf("%d\n", *arr[1]);

//     printf("%d\n", arr);
//     printf("%d\n", *arr);

//     return 0;
// }
//////////////////////////////////////////////////////////////////////////////



// int main()
// {
//     const int no = 11;
//     const int *p = &no;

//     printf("%d\n", no);
//     printf("%d\n", *p);
//     printf("%d\n", p);

//     return 0;
// }



// int main()
// {
//     char arr[] = {'a','b','c','d'};
//     char *p = arr;
//     char *q = &(arr[0]);
//     char *r = &(arr[3]);

//     printf("%c\n",*p);
//     printf("%d\n",p);

//     printf("%c\n",*q);
//     printf("%d\n",q);

//     printf("%c\n",*r);
//     printf("%d\n",r);

//     return 0;
// }



// int main()
// {
//     double arr[] = {12.3, 1.23, 12.8};
//     double *p = arr;
//     double *q = &(arr[0]);
//    // double *r = &(arr[3]);
//     double *r = &(arr[2]);

//     printf("%0.4lf\n",*p);
//     printf("%0.4lf\n",*q);
//     printf("%0.4lf\n",*r);


//     return 0;
// }



/////////////////////////////////////////////////////////////////////////
//pointer variation
////////////////////////////////////////////////////////////////////////

// int main()
// {
//     int no = 10;
//     int *p = NULL;
//     p = &no;

//     printf("%d\n", no);
//     printf("%d\n", *p);

//     *p = 11;

//     printf("%d\n", no);
//     printf("%d\n", *p);


//     return 0;
// }

/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
//another one
////////////////////////////////////////////////////////////////////////////

int main()
{
    float arr[] = {10.3,43.4,45.34,234.45};
    float *p = NULL;
    float *q = NULL;

    p = arr;
    q = &(arr[3]);

    printf("%d\n", p);
    printf("%d\n", q);
    printf("%f\n", *q);
    printf("%f\n", *p);
    printf("%f\n", *(p+2));
    printf("%f\n", *(p+1));
    printf("%f\n", p[1]);
    printf("%f\n", *(2+arr));
    printf("%f\n", 0[arr]);
    printf("%f\n", q-p);
    printf("%f\n", *(q-2));


    return 0;

}

/////////////////////////////////////////////////////////////////////////////////////}