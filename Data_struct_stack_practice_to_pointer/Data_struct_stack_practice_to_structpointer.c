#include <stdio.h>
#define SIZE 100
#define NAME 30

typedef struct {
	int top;
	int stack[SIZE];
}stack;

void push(stack* p, int data);		//스택에 값 저장
void pop(stack* p);							//스택의 맨 마지막 값 출력
void initstack(stack *p);				//스택 초기화; top=-1
void printstack(stack* p);			//스택의 모든 값 출력

int main() {
	stack stack;				//구조체 선언
	initstack(&stack);	//구조체 배열의 top의 값을 -1로 초기화

	push(&stack, 4);
	push(&stack, 3);
	push(&stack, 12);
	pop(&stack);

}

void push(stack* p, int data) {
	p->top++;
	if (p->top == SIZE) {
		printf("스택이 이미 가득 찼습니다. \n"); 
		p->top--;
	}
	else {
		p->stack[p->top] = data;
	}
}

void pop(stack *p) {
	if (p->top == -1) printf("스택이 비었습니다. \n");
	else printf("top : %d\n",p->stack[p->top--]);
}

void initstack(stack* p) {
	p->top = -1;
}

void printstack(stack* p) {
	if (p->top == -1) printf("스택이 비었습니다.\n");
	else
	{
		for (int i = 0; i <= p->top; i++) {
			printf("%d 번째 배열의 값 : %d\n", i, p->stack[i]);
		}
	}
}