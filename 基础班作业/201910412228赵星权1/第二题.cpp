#include <stdio.h>
typedef struct Student {
	char name[10];char stu.jd[15];int age;
	struct Student* next;
}student;
void CreatList(Node** head) {
	      Node *r=*head,*s; 
	      int a;  
	      while(scanf(¡°%d¡±,&a)){  
               if(a!=0){  
	              s=(Node *)malloc(sizeof(Node));  
	               s->value=a;  
	              r->next=s;  
	              r=s;      
	          }  
	          else{      
	              r->next=NULL;  
	              break;      
	          }  
	      }  
	}  
