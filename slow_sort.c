#include "headers.h"
#define N 4000

// 112 ???????? ?????? ??????????
// ??????? ?????????? ????????
// ???????? ? ???????? ?????????? ?????? ? ???????? ????? ???????

void slow_sort(double number[], int k)                                  // ??????? ?????????? ????????
{
    int j = 0;                                                          // ?????? ?????????? ????????? ???????????? ?????

    for(int i = 0; i < k*N; ++i)                                        // ???? ?????? ???????? ?? ???? ????? ???????
    {
        double min = number[i];                                         // ????????? ????????
        for (int s = i; s < k*N; ++s)
        {
            if (number[s] <= min)                                       // ????????? ???????? ? ?????? ?? ???????
            {
                min = number[s];                                        // ?????????? ???????????? ????? ?? ?????????????????? ?????????? min
                j = s;                                                  // ?????????? ??????? ???????????? ?????, ????? "??????" ??? ?? ???????
            }
        }

        number[j] = number[i];                                          // ??????? ? ?????? ? ???????? j ?????????????? ?????
        number[i] = min;                                                // ?????? ???????????? ????? ? ??????? ????? ?????????
    }

}
