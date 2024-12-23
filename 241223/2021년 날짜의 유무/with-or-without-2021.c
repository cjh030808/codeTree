#include <stdio.h>

int monthDayCalculator(int M, int D){
    int monthDay;
    switch(M) {
        case 1:  // 1월
        case 3:  // 3월
        case 5:  // 5월
        case 7:  // 7월
        case 8:  // 8월
        case 10: // 10월
        case 12: // 12월
            monthDay = 31;
            break;
        case 4:  // 4월
        case 6:  // 6월
        case 9:  // 9월
        case 11: // 11월
            monthDay = 30;
            break;
        case 2:  // 2월
            monthDay = 28;
            break;
        default :
            monthDay = -1;
            break;
    }
    if(monthDay < D) return 0;
    return 1;
}

int main() {
    int M, D;
    scanf("%d %d", &M, &D);

    if(monthDayCalculator(M, D)) printf("Yes");
    else printf("No");
    return 0;
}