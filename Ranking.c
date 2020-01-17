누가 수정만좀해주언러ㅓㅇㄴ렁

#include "function.h"


//< 데이터 구조체 
typedef struct Data
{
    int  score;
    char name[LENGTH];
}DATA;
//< 버를 소팅 
void RankSort(DATA* pData, int nSize);
void Print(DATA* pDAta, int nSize);
void SwapData(DATA* pLeft, DATA* pRight);
void rank_sistem()
{
    DATA Input[MAX_INPUT] = { 0 };
    FILE* fp = NULL;
    int  i = 0;
    //< 파일에서 데이터 얻어오기 
    fp = fopen("Rank.txt", "r");
    if (fp == NULL)
    {
        printf("파일 열기 실패\n");
        return 0;
    }
    //< 데이터 파일에서 읽기 
    while (fscanf(fp, "%d%s", &Input[i].score, Input[i].name) != EOF)
    {
        i++;
    }
    //< 소팅 
    RankSort(Input, i);
    //< 출력 
    Print(Input, MAX_INPUT);
    fclose(fp);
    return 0;
}
//< 정렬 
void RankSort(DATA* pData, int nSize)
{
    int  i, j;
    //< 개선된 버블정렬을 위한 플래그 ( 이미 정렬이 완료된 데이터는 더이상 비교를 하지 않습니다. 
    int  nFlag = 0;
    //< 정렬 
    for (i = 0; i < nSize - 1; i++)
    {
        nFlag = 0;
        for (j = i + 1; j < nSize - i; j++)
        {
            if (pData[i].score < pData[j].score)
            {
                SwapData(&pData[i], &pData[j]);
                nFlag = 1;
            }
        }
        //< 한번도 교환이 일어나지 않았다면 정렬이 완료된것으로 처리 
        if (nFlag == 0)
        {
            break;
        }
    }
}
//< 데이터 출력 
void Print(DATA* pData, int nSize)
{
    int i = 0;
    puts("----------------------------------");
    puts("------------- 순위----------------");
    for (i = 0; i < nSize; i++)
    {
        printf("%d", i + 1);
        if (pData[i].score != 0)
        {
            printf("------%2d Stage\t%s\n", pData[i].score, pData[i].name);
        }
        else
        {
            printf("---------------------------\n");
        }
    }
    puts("----------------------------------");
}
//< 데이터 바꾸기 
void SwapData(DATA* pLeft, DATA* pRight)
{
  
    DATA sTemp;
    memmove(&sTemp, pLeft, sizeof(DATA));
    memmove(pLeft, pRight, sizeof(DATA));
    memmove(pRight, &sTemp, sizeof(DATA));
}



 ////////////////////////////////////////////
 게임 클리어 또는 오버시  (클리어 구현 아직 X)
void GameOver() {
	printf("\n\n\n\n\n\n\n\n   GAME OVER.   ");
	system("pause");
	system("sls");
	GotoXY(5, 0);
	rank_sistem();
	system("pause");
	system("cls");
}

void GameClear() {
	printf("\n\n\n\n\n\n\n\nGAME CLEAR!   ");
	system("pause");
	system("cls");
}
void stone() {
	printf("■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■");
}

