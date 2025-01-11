#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stack {
    int ptr; 
    int *stk;
} stack;

void init(stack *s, int n) {
    s->stk = (int *)malloc(sizeof(int) * n);
    s->ptr = 0;
}

void push_back(stack *s, int num) {
    s->stk[s->ptr++] = num;
}

void pop_back(stack *s, int num) {
    s->stk[s->ptr--];
}

int get(stack *s, int num) {
    return s->stk[num - 1];
}

int main() {
    int n;
    int ppnum;
    char order[10];
    stack s;

    scanf("%d", &n);
    init(&s, n);
    
    for(int i = 0; i < n; i++) {
        scanf("%s", order);
        if(!strcmp(order, "push_back")) {
            scanf("%d", &ppnum);
            push_back(&s, ppnum);
        }
        if(!strcmp(order, "pop_back")) {
            scanf("%d", &ppnum);
            pop_back(&s, ppnum);
        }
        if(!strcmp(order, "get")) {
            scanf("%d", &ppnum);
            printf("%d\n", get(&s, ppnum));
        } 
        if(!strcmp(order, "size")) printf("%d\n", s.ptr);
    }

    return 0;
}