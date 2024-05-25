#include <stdio.h>
#include <ctype.h>


int main()
{
    int num_grades;
    int sum = 0;
    int grade;
    char input[50];
    int i;


     printf("Enter the number of grades: ");
     scanf("%d", &num_grades);

    for ( i = 0; i < num_grades; i++)
    {
        printf("Enter grade: ", i + 1);
        scanf("%s", input);
        if (!isdigit(input[0]))
        {
            printf("invalid input");
            continue;
        }
        
    }while (!isdigit(input[0]));
    grade = atoi(input);
    sum = sum + grade;

    float average = (float)sum/num_grades;

    printf("Average grade = %.2f");

    return 0;
    


}
