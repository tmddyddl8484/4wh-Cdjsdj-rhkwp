#include<stdio.h>

int main()//4에서 원할 때 점수 작성을 멈추고 그 점수를 파일에 저장하기
{
    int subject, number;
    
    printf("Enter the number of scores: ");
    scanf("%d", &subject);

    if(subject<=0)
	{
        printf("Invalid number of scores.\n");
        return 1;
    }

    FILE*fp=fopen("sj.txt", "w");
    if(fp==NULL)
	{
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    int total[subject];
    float average=0;

    printf("Enter the scores\n");
    for(number=0;number<subject;number++)
	{
        printf("Score %d: ", number+1);
        scanf("%d", &total[number]);
        average+=total[number];
        fprintf(fp,"%d\n", total[number]);
    }

    fclose(fp);

    float d=average/subject;

    printf("Average: %g\n", d);

    FILE*fp_out=fopen("sj1.txt", "a");
    if(fp_out==NULL)
	{
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }

    fprintf(fp_out,"%g\n", d);
    fprintf(fp_out,"\n");

    fclose(fp_out);

    char choice;
    printf("Do you want to continue? (Y/N): ");
    scanf(" %c", &choice);

    if(choice=='Y'||choice=='y')
	{
        return main();
    }
	else
	{
        return 0;
    }
}
