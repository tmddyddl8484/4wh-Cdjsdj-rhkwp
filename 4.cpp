#include<stdio.h>

int main()//3에서 평균 계산에 영향이 가지 않도록 원하는 만큼 점수 입력하기
{
    int subject, number;
    
    printf("Enter the number of scores: ");
    scanf("%d", &subject);

    if(subject<=0)
	{
        printf("Invalid number of scores.\n");
        return 1;
    }

    FILE *fp=fopen("sj.txt", "w");
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

    return 0;
}