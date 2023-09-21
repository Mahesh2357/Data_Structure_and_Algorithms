#include <stdio.h>
#include <stdlib.h>

struct myarr
{
    int total_size;
    int used_size;
    int * ptr;
};
void create_arr(struct myarr *, int tsize, int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}
void get_arr(struct myarr * a)
{
    for(int i = 0; i < a->used_size; i++)
    {
        printf("%d\n ",(a -> ptr)[i]); 
    }
}
void set_arr(struct myarr * a)
{
    int n;
    for(int i = 0; i < a->used_size; i++)
    {
        printf("Enter the element %d: ", i);
        scanf("%d\n",&n);
        (a -> ptr)[i] = n;
    }
}
int main()
{
    struct myarr marks;
    create_arr(&marks, 20, 5);
    printf("We are running set val now : %d\n");
    set_arr(&marks);
    printf("We are running get_arr val now : %d\n");
    get_arr(&marks);
    return 0;
}