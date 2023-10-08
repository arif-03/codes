#include<stdio.h>



int main ()
{
    int i,roll, student,subject;
    float marks[subject],total_marks,gpa;
    char name[50];
    printf("Enter number of students : ");
    scanf("%d",&student);
    FILE *fp;
    fp = fopen("test.txt", "w");

    for(i=0;i<student;i++)
    {
       printf("\nstudent %d \n", i+1);
        printf("student %d name : ", i+1);
        scanf("%s",&name);
        printf("\nstudent %d roll: ", i+1);
        scanf("%d",&roll);
        printf("\nEnter number of subject: ");
        scanf("%d",&subject);
        printf("\nEnter Marks out of 100 for \n");
            total_marks = 0.0;
        for(int j=0;j<subject;j++)
        
        {
             printf("subject  %d: ", j+1);
            scanf("%f",&marks[j]);

         if (marks[j] < 40)
            {
                return 0;
            }
            if (marks[j] >= 40 && marks[j] < 45)
            {
                return 2.00;
            }
            if (marks[j] >= 45 && marks[j] < 50)
            {
                return 2.25;
            }
            if (marks[j] >= 50 && marks[j] < 55)
            {
                return 2.50;
            }
            if (marks[j] >= 55 && marks[j] < 60)
            {
                return 2.75;
            }
            if (marks[j] >= 60 && marks[j] < 65)
            {
                return 3.00;
            }
            if (marks[j] >= 65 && marks[j] < 70)
            {
                return 3.25;
            }
            if (marks[j] >= 70 && marks[j] < 75)
            {
                return 3.50;
            }
            if (marks[j] >= 75 && marks[j] < 80)
            {
                return 3.75;
            }
            if (marks[j] >= 80)
            {
                return 4.00;
            }

                
                    total_marks += marks[j];
        }

        float mark = total_marks /subject;
        printf("GPA = %.2f \n", mark);

        fprintf(fp , "name: %s\n",name);
        fprintf(fp , "roll: %d\n",roll);
        for (int k = 0; k < subject; k++)
        {
            /* code */
            fprintf(fp,"marks in subject %d: %.2f\n", k+1,marks[k]);
        }
        fprintf(fp , "Total marks : %.2f out of %d\n", total_marks,100*subject);
        fprintf(fp , "GPA: %.2f\n",mark);

    }

   fclose(fp);
    printf("\nStudent data written to file.\n");

    // reopen the file for reading
    fp = fopen("test.txt", "r");

    // read and print student data
    printf("\nStudent data:\n\n");
    char c;
   while ((c=getc(fp)) != EOF)
   {
    printf("%c",c);
   }
   
    fclose(fp);
    printf("\n");
  printf("\n");

    return 0;
}