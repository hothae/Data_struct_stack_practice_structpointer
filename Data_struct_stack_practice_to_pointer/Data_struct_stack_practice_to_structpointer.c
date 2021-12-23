#include <stdio.h>
#define SIZE 100
#define NAME 30

typedef struct {
	int top;
	int stack[SIZE];
}stack;

void push(stack* p, int data);		//���ÿ� �� ����
void pop(stack* p);							//������ �� ������ �� ���
void initstack(stack *p);				//���� �ʱ�ȭ; top=-1
void printstack(stack* p);			//������ ��� �� ���

int main() {
	stack stack;				//����ü ����
	initstack(&stack);	//����ü �迭�� top�� ���� -1�� �ʱ�ȭ

	push(&stack, 4);
	push(&stack, 3);
	push(&stack, 12);
	pop(&stack);

}

void push(stack* p, int data) {
	p->top++;
	if (p->top == SIZE) {
		printf("������ �̹� ���� á���ϴ�. \n"); 
		p->top--;
	}
	else {
		p->stack[p->top] = data;
	}
}

void pop(stack *p) {
	if (p->top == -1) printf("������ ������ϴ�. \n");
	else printf("top : %d\n",p->stack[p->top--]);
}

void initstack(stack* p) {
	p->top = -1;
}

void printstack(stack* p) {
	if (p->top == -1) printf("������ ������ϴ�.\n");
	else
	{
		for (int i = 0; i <= p->top; i++) {
			printf("%d ��° �迭�� �� : %d\n", i, p->stack[i]);
		}
	}
}