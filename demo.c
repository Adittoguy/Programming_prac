#include <stdio.h>
#pragma pack(1)

// struct demo
// {
//     int i;          //4
//     float f;        //4
//     struct hello
//     {
//         int no;
//         float f1;
//     }hobj;
// };

// struct demo
// {
//     int i;          // 4
//     float f;        // 4  
// };

// struct hello
// {
//     int no;           // 4
//     float f1;         // 4
//     struct demo dobj; // 8
// };

struct demo
{
    char name[12];
    struct hello{
        int dob;
        int div;
    }hobj;
    
};


int main()
{
    struct demo dobj = {"Aditya",{20, 07}};

    struct demo * p = &dobj;

    // dobj.hobj.no=21;
    // dobj.hobj.ch='A';

    printf("Name is : %s\n",p->name);
    //printf("Value of ch is : %d\n",dobj.hobj.ch);
    printf("DOB is : %d - %d\n", p->hobj.dob, p->hobj.div);

    // p -> i = 10;
    // p -> f = 9.5f;
    // p -> ch = 'A';

    // dobj.i = 10;
    // dobj.f = 9.5f;
    // dobj.ch = 'A';

    // printf("Value of i : %d\n",p->i);
    // printf("Value of i : %0.2f\n",p->f);
    // printf("Value of i : %c\n",p->ch);

    // printf("Value of i : %d\n",dobj.i);
    // printf("Value of i : %0.2f\n",dobj.f);
    // printf("Value of i : %c\n",dobj.ch);

    printf("Sizeof structure : %lu\n",sizeof(struct demo));
    //printf("Sizeof structure : %lu\n",sizeof(struct hello));

    return 0;
}