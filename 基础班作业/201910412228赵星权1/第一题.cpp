#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

typedef struct Student {
	char name[10];
	char id[15];
	char sex[5];
	struct Student* next;
}student;
void creat(student* head)
{
	student* q, * New, * end;
	int i, n = 3;
	q = (student*)malloc(sizeof(student));
	end = q;
	for (i = 0; i < n; i += 1)
	{
		New = (student*)malloc(sizeof(student));
		scanf("%s ", &New->name);
		scanf("%s", &New->id);
		scanf("%s", &New->sex);
		end->next = New;
		end = New;
	}
	end->next = NULL;
}

int find(student* head)
{
	int n = 0;
	char id[15];
	printf("��������Ҫ���id:\n");
	scanf("%s", id);
	student* p = head->next;
	while (p != NULL)
	{
		if (strcmp(p->next, id) == 0)
		{
			printf("��ϵͳ");
			p = p->next;
		}
	}
	printf("����ϵͳ");

}
int main()
{
	struct student* head = (student*)malloc(sizeof(student));
	head = NULL;
	printf("����дѧ����Ϣ��");
	creat(head);
	find(head);
	return 0;
}