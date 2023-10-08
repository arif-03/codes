#include<stdio.h>
float get_gpa(float mark)
{
if (mark<40) {

return 0;
}
if (mark>=40 && mark<45)
{
return 2.00;}
if (mark>=45 && mark<50)
{
return 2.25;}
if (mark>=50 && mark<55)
{
return 2.50;}
if (mark>=55 && mark<60)
{
return 2.75;}
if (mark>=60 && mark<65)
{
return 3.00;}
if (mark>=65 && mark<70)
{
return 3.25;}
if (mark>=70 && mark<75)
{
return 3.50;}
if (mark>=75 && mark<80)
{
return 3.75;}
if (mark>=80)
{
return 4.00;}
}
int main()
{
int i, roll, student, subject;
float
marks[5], total_marks, gpa;
char name [50];
printf("Enter the number of students:");
scanf("%d", &student);
FILE *fp;
fp= fopen("test.txt", "w");
for(i=0; i<student; i++)
{
printf("\nstudent\n",i+1);
printf("student %d name:",i+1);
scanf("%s",&name);
printf("\nstudent\n %d roll:", i+1);
scanf("%d", &roll);
printf("Enter the marks out of 100 for\n");
printf("Enter the number of subject:");
scanf("%d", &subject);
total_marks= 0.0;
for(int j=0; j<subject; j++)
{
printf("subject %d:",j+1);
scanf("%f", & marks [j]);
total_marks += marks [j];}
float mark= total_marks/subject;
gpa= get_gpa(mark);
printf("GPA= %.2f\n",gpa);
fprintf(fp, "name:%s\n",name);
fprintf(fp, "roll:%d\n",roll);
for(int k=0; k<subject; k++)
{
/*code*/
fprintf(fp, "marks in subject %d: %.2f\n", k+1,marks[k]);}
fprintf(fp, "Total marks:%.2f out of %d\n",total_marks,100*subject);
fprintf(fp, "GPA:%.2f\n ",gpa);
}
fclose(fp);
printf("\nStudent data written to file.\n");
fp=fopen("test.txt", "r");
printf("\nStudent data:\n\n");
char c;
while((c=getc(fp))!=EOF)
{
printf("%c",c);}
fclose(fp);
printf("\n");
printf("\n");
return 0;
}