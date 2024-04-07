#include<stdio.h>

int main()//세 과목의 점수를 직접 입력하도록 바꾸기
{
    int subject[3], number;
    float total=0;

    printf("Enter the scores:\n");
    for(number=0;number<3;number++)
	{
        printf("Score %d: ", number+1);
        scanf("%d", &subject[number]);
        total+=subject[number];
    }

    float average=total=total/3;

    printf("Jaechang Shim: %g\n", average=total);

    FILE*fp_out=fopen("sj1.txt", "w");
    if(fp_out==NULL)
	{
        printf("Error: Unable to open file for writing.\n");
        return 1;
    }
    fprintf(fp_out,"Average: %g\n", average=total);
    fclose(fp_out);

    return 0;
}