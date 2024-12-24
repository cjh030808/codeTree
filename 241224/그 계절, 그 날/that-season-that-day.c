#include <stdio.h>

int leapYearCheck(int year){
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
        return 1;
    } 
    return 0;
}

int dayValidCheck(int year, int month, int day){
    int monthDay;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        monthDay = 31;
    } else if(month == 4 || month == 6 || month == 9 || month == 11){
        monthDay = 30;
    } else if(month == 2){
        if(leapYearCheck(year)) monthDay= 29;
        else monthDay = 28;
    }
    if(monthDay < day) return 0;
    return 1;
}

int seasonCheck(int month){
    if(3 <= month && month <= 5) return 1;
    else if(6 <= month && month <= 8) return 2;
    else if(9 <= month && month <= 11) return 3;
    else return 4;
}

int main() {
    int Y, M, D;
    int season;
    scanf("%d %d %d", &Y, &M, &D);
    if(dayValidCheck(Y, M, D)){
        season = seasonCheck(M);
    } else {
        printf("-1");
        return 0;
    }

    switch(season) {
        case 1 :
            printf("Spring");
            break;
        case 2 :
            printf("Summer");
            break;
        case 3 :
            printf("Fall");
            break;
        case 4 :
            printf("Winter");
            break;
        default:
            printf("-1");
            return 0;
    }
    return 0;
}