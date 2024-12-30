#include <string.h>
struct student 
{
    char student_name[256];
    int enrollment_no;
    int roll_no;
    int sem;
    char branch[256];
};
void main()
{
    int n,i;
    printf("enter number of student data");
    scanf("%d",&n);
    struct student s1[n];
    for ( i = 0; i<n; i++)
    {
    printf("enter student_name:\n");
    scanf("%s",&s1[i].student_name);
    printf("enter enrollment_no:\n");
    scanf("%d",&s1[i].enrollment_no);
    printf("enter roll_no:\n");
    scanf("%d",&s1[i].roll_no);
    printf("enter sem:\n");
    scanf("%d",&s1[i].sem);
    printf("enter branch:\n");
    scanf("%s",&s1[i].branch);
}
for (i = 0; i <n; i++)
{
    printf("name:%s\n",s1[i].student_name);
    printf("enrollment_number :%d\n",s1[i].enrollment_no);
    printf("roll_no:%d\n",s1[i].roll_no);
    printf("sem:%d\n",s1[i].sem);
    printf("branch %s",&s1[i].branch);
}

}
