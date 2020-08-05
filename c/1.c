#include <stdio.h>
#include <stdlib.h>
struct course 
{
    int marks;
    char subject[30];
};

int main() 
{
    struct course *ptr;
    int i, Records;
    printf("Enter the records: ");
    scanf("%d", &Records);

    ptr = (struct course *)malloc(Records * sizeof(struct course));
    for (i = 0; i < Records; ++i) {
        printf("Enter the name of the subject and marks:\n");
        scanf("%s %d", &(ptr + i)->subject, &(ptr + i)->marks);
    }

    printf("Displaying Information:\n");
    for (i = 0; i < Records; ++i)
        printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);

    return 0;
}
