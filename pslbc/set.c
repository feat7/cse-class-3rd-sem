#include <stdio.h>
int set1[100], set2[100], N1, N2;

int input_array1()
{
    printf("\n Enter Number of elements in first set: ");
    scanf("%d", &N1);
    printf("\n Enter elements in first set seperated by space: \n");
    for(int i=0; i<N1; i++) {
        scanf("%d", &set1[i]);
        for(int j=0; j<i; j++) {
            if(set1[i]==set1[j]) {
                printf("\n Error! elements are not unique\n");
                input_array1();
                break;
            }
        }
    }
    return N1;
}

int input_array2()
{
    printf("\n Enter Number of elements in second set: ");
    scanf("%d", &N2);
    printf("\n Enter elements in second set seperated by space: \n");
    for(int i=0; i<N2; i++) {
        scanf("%d", &set2[i]);
        for(int j=0; j<i; j++) {
            if(set2[i]==set2[j]) {
                printf("\n Error! elements are not unique.\n");
                input_array2();
                break;
            }
        }
    }
    return N2;
}

int intersection()
{
    printf("\n Intersection of given sets is:\n");
    for(int i=0; i<N1; i++) {
        for(int j=0; j<N2; j++) {
            if(set1[i] == set2[j]) {
                printf("%d\t", set1[i]);
            }
        }
    }
    return 0;
}

int set_union()
{
    printf("\n Union of given sets is:\n");
    for(int i=0; i<N1; i++) {
        printf("%d\t", set1[i]);
    }
    for(int j=0; j<N2; j++) {
        for(int i=0; i<N1; i++) {
            if(set1[i]==set2[j]) break;
            if(i==N1-1) printf("%d\t", set2[j]);
        }
    }
}

int set1_complement()
{
    printf("\n Complement of first set:\n");
    for(int i = 0; i<100; i++) {
        for(int j = 0; j<N1; j++) {
            if(set1[j] == i) break;
            if(j==N1-1) printf("%d\t", i);
        }
    }
}

int set2_complement()
{
    printf("\n Complement of first set:\n");
    for(int i = 0; i<100; i++) {
        for(int j = 0; j<N2; j++) {
            if(set2[j] == i) break;
            if(j==N2-1) printf("%d\t", i);
        }
    }
}

int main()
{
    input_array1();
    input_array2();

    intersection();
    set_union();
    set1_complement();
    set2_complement();

    return 0;
}

