// Standard
#include <stdio.h>
int main()
{
    float a,area,peri;
    printf("Enter square's side value: ");
    scanf("%f",&a);
    area=(a*a);
    peri=4*a;
    printf("The area of square: %.2f\n",area);
    printf("The perimeter of square: %.2f\n",peri);
    return 0;
}
// Function
#include <stdio.h>
float area (float a)
{
    return a*a;
}
float peri (float a)
{
    return 4*a;
}
int main()
{
    float a;
    printf("Enter square's side value: ");
    scanf("%f",&a);
    printf("The area of square: %.2f\n",area(a));
    printf("The perimeter of square: %.2f\n",peri(a));
    return 0;
}
// Structure
#include <stdio.h>
struct square
{
    float a,area,peri;
};
int main()
{
    struct square sq;
    printf("Enter square's side value: ");
    scanf("%f",&sq.a);
    sq.area=sq.a*sq.a;
    sq.peri=4*sq.a;
    printf("The area of square: %.2f\n",sq.area);
    printf("The perimeter of square: %.2f\n",sq.peri);
    return 0;
}
// File
#include <stdio.h>
int main()
{
    FILE *file1,*file2;
    float a,area,peri;
    char ch;
    file1 = fopen ("Square.txt","w");
    file2 = fopen ("Square.txt","r");
    if (file1==NULL)
        printf ("The file does not exist");
    else
    {
        printf("Enter square's side value: ");
        scanf("%f",&a);
        area=(a*a);
        peri=4*a;
        fprintf(file1,"The area of square: %.2f\nThe perimeter of square: %.2f\n",area,peri);
        fclose (file1);
    }
    if (file2==NULL)
        printf ("The file does not exist");
    else
    {
        while (!feof(file2))
        {
            ch=fgetc(file2);
            printf ("%c",ch);
        }
        fclose (file2);
    }
    return 0;
}
