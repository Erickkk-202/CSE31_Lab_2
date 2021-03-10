#include <stdio.h>
int main() {

int x = 1, y = 1, *px , *py;
int arr[10] ;
for(int i =0; i< 10 ;i++){
    arr[i]= 0;
}

//#3
printf("x = %d",x);
printf("\n");

printf("y = %d",y);
printf("\n");

printf("arr[0] = %d", arr[0]);
printf("\n");

//#4
printf("address of x: %p \naddress of y: %p\n", &x, &y);

printf("\n");
//#5
px = &x;
py = &y;
printf("px should now equal the address of x px = %p\n", px); 
printf("px should now equal the address of y py = %p\n", py);

printf("value of px = %d\n", *px); 
printf("value of py = %d\n", *py);

printf("\n");
//#6
for(int i=0; i< 10;i++){
    printf("arr[%d] = %d\n", (i+1), *(arr+i));

}

printf("\n");
//#7
printf("arr = %p\n", &arr);
printf("arr[0] = %p\n", &arr[0]);
#8
printf("arr = %d\n", *arr);
printf("arr[0] = %d\n", arr[0]);


return 0;
}