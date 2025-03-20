#include <stdio.h>
int main(){
int a[] = {1, 2, 3, 4, 5, 6};
// printf("%d\n", ++a);
int *ptr = a;
printf("%d\n", ++ptr);
return 0;
}
