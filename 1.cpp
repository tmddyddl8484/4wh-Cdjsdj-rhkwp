#include<stdio.h>

int main()
{
    FILE*fp=fopen("sj.txt", "r");//sj.txt 파일 열기 활성화
    FILE*fp_out=fopen("sj1.txt", "w");//sj.txt 파일 쓰기 활성화

    int subject[3], number;//세 점수를 리스트에 저장, for문에 쓰일 변수 생성
    float total=0;//세 과목의 총합점수

    for(number=0;number<3;number++)
	{
        fscanf(fp, "%d", &subject[number]);//리스트에 있는 값 가져오기
        printf("%d\n", subject[number]);//가져온 값 출력
        total+=subject[number];//total에 더하기
    }

    fclose(fp);//sj.txt 닫기
    
    float average=total/3;//세 과목의 평균점수
    
    printf("Jaechang Shim: %g\n", average);//평균 점수 출력
    fprintf(fp_out, "Average: %.2f\n", average);//평균 점수 저장
    fclose(fp_out);//sj.txt 닫기

    return 0;
}