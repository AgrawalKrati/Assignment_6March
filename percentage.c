#include<stdio.h>

void func(int a, int b, int c, float *Total, float *per)
{
    *Total = (a+b+c);
    *per = ((a+b+c)/300.0)*100;
}
void main()
{
    int a, b, c;
    float Total, per;
    printf("Enter the marks of subject 1: \nEnter the marks of subject 2:\nEnter the marks of subject 3:\n");
    scanf("%d%d%d", &a,&b,&c);
  

    func(a, b, c, &Total, &per);

    printf("\n The Total marks: %.2f", Total);
    printf("\n The Percentage: %.2f%%", per);
}
