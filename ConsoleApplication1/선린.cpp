#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include"선린.h"
//총매출 기능 삽입
typedef struct LinkedList {
	char name[100];
	int price;
	int num;
	int barcode;
	struct LinkedList *NEXT;
}node;

struct database db[60] = {
	{ "BBQ 황금 올리브치킨", 16000, 1234 },
	{ "BBQ 황금 올리브치킨 (반반)",17000, 12345 },
	{ "BBQ 황금 올리브치킨 (닭다리)", 17500, 12243 },
	{ "BBQ 황금 올리브치킨 (매운 닭다리)",19000,12342 },
	{ "BBQ 시크릿 양념치킨", 17000, 21314 },
	{ "BBQ 시크릿 양념치킨 (매운맛)", 17500, 15324 },
	{ "BBQ 황금 올리브 속안심", 17000, 74452 },
	{ "BBQ 순살 크래커",18000, 53142 },
	{ "BBQ 파닭의 꿈",19000, 24198 },
	{ "BBQ 치킨 강정", 18000, 19422 },
	{ "BBQ 빠리치킨 (윙)", 19000, 93872 },
	{ "BBQ 레드 갈릭스 (한마리)", 19900, 92803 },
	{ "BBQ 레드 갈릭스 (한마리 윙)", 19900, 3241 },
	{ "BBQ 황금 올리브 (반반 닭다리}", 18500, 91842 },
	{ "BBQ 스모크 치킨",17000, 4928 },
	{ "순살 바삭칸 치킨", 17000, 49281 },
	{ "바삭칸 치킨 (반반)", 17000, 92732 },
	{ "BBQ 마라 핫치킨", 18900, 1235 },
	{ "BBQ 마라 핫치킨 (윙)",18900, 1236 },
	{ "BBQ 마라 핫치킨 (순살)", 20900, 1237 },
	{ "BBQ 허니 갈릭스", 18900, 1238 },
	{ "BBQ 허니 갈릭스 (윙)",18900, 1239 },
	{ "BBQ 치즐링", 19000, 1240 },
	{ "BBQ 치즐링 (순살)", 19900, 1241 },
	{ "BBQ 소이갈릭스(한마리)", 18900, 78912 },
	{ "BBQ 소이갈릭스(한마리)(윙)", 18900, 78912 },
	{ "BBQ 옛날통닭", 14900, 78912 },
	{ "BBQ 바삭칸 치킨", 16000, 78912 },
	{ "BBQ 바삭칸 치킨(양념)", 17000, 78912 },
	{ "BBQ 바삭칸 치킨(매운양념맛)", 17500, 78912 },
	{ "BBQ 황금올리브 (핫윙)", 18000, 78912 },
	{ "BBQ 매달구(윙)", 19500, 78912 },
	{ "BBQ 자메이카 통다리구이", 17000, 49284 },
	{ "BBQ 퐁듀 피자(R)", 14900, 78912 },
	{ "BBQ 콤비네이션 피자(R)", 13900, 78912 },
	{ "BBQ 바베큐 치킨 피자(R)", 15900, 78912 },
	{ "BBQ 브라운 비프 피자(R)", 12900, 78912 },
	{ "BBQ 마르게리타 피자(R)", 12900, 78912 },
	{ "BBQ 하와이안 넛츠 피자(R)", 14900, 78912 },
	{ "BBQ 쉬림프 고르곤졸라피자", 15900, 78912 },
	{ "BBQ 지 포테이토피자", 13900, 78912 },
	{ "BBQ 떠먹는치즈풀(베이컨)", 14900, 78912 },
	{ "BBQ 떠먹는치즈풀(새우)", 16900, 78912 },
	{ "BBQ 고구마피자(R)", 12900, 78912 },
	{ "BBQ 치즈한입핫도그(5개)", 3900, 78912 },
	{ "BBQ 포테이토", 3000, 78912 },
	{ "BBQ 오징어링", 3000, 78912 },
	{ "BBQ 치즈스틱", 3000, 78912 },
	{ "BBQ 고구마스틱", 3000, 78912 },
	{ "BBQ 꼬꼬컵", 2500, 78912 },
};

node*head, *tail;

void calculate() {
	head = (node*)malloc(sizeof(node));
	tail = (node*)malloc(sizeof(node));
	head->NEXT = tail;
	tail->NEXT = NULL;
}

void insertprint() {
	system("cls");
	int sum = 0;
	node *p = head->NEXT;
	if (p == tail) {
		printf("계산된 물건이 없습니다.\n");
		return;
	}
	while (p != tail) {
		printf("%s\t  %d원\t  %d개\n", p->name, p->price, p->num);
		sum += p->price*p->num;
		p = p->NEXT;
	}
	printf("\n");
	printf("총 합계 : %d원\n", sum);
}

void printLinkedList() {
	system("cls");
	int sum = 0;
	int input;
	node *p = head->NEXT;
	if (p == tail) {
		printf("계산된 물건이 없습니다.\n");
		system("pause");
		return;
	}
	while (p != tail) {
		printf("%s\t  %d원\t  %d개\n", p->name, p->price, p->num);
		sum += p->price*p->num;
		p = p->NEXT;
	}
	printf("\n");
	printf("총 합계 : %d원\n", sum);
	printf("받은 금액 : ");
	scanf("%d", &input);
	if (sum > input) {
		printf("남은 금액 : %d원\n", sum - input);
	}
	else if (sum < input) {
		printf("거스름돈 : %d원\n", input - sum);
	}
	calculate();
	system("pause");
}


void insertnode() {
	system("cls");
	while (1) {
		int barcode;
		node *New = (node*)malloc(sizeof(node));
		node *a = head;
		scanf("%d", &barcode);
		while (a->NEXT != tail) {
			a = a->NEXT;
			if (a->barcode == barcode) {
				a->num++;
				break;
			}
		}
		for (int i = 0; i < (sizeof(db) / sizeof(database)); i++) {
			if (db[i].barcode == barcode && db[i].barcode != a->barcode) {
				strcpy(New->name, db[i].name);
				New->price = db[i].price;
				New->barcode = db[i].barcode;
				New->NEXT = tail;
				New->num = 1;
				a->NEXT = New;
			}
			else if (barcode == 0) return;
		}
		insertprint();
	}
}
void deletenode() {
	int barcode;
	scanf("%d", &barcode);
	node *p = head->NEXT;
	node *o = head;
	while (p != tail) {
		if (p->barcode == barcode && p->num == 1) {
			node*s = p->NEXT;
			free(p);
			o->NEXT = s;
			break;
		}
		else if (p->barcode == barcode && p->num > 1) {
			p->num--;
			break;
		}
		p = p->NEXT;
		o = o->NEXT;
	}
}
void main() {
	int a = 0;
	calculate();
	while (1) {
		system("cls");
		int num;
		printf("<<< === BBQ 판매매장 === >>>\n\n");
		printf("1. 주문 등록\n");
		printf("2. 주문 삭제\n");
		printf("3. 현재 주문 현황\n");
		printf("4. 정산\n:");
		scanf("%d", &num);
		switch (num) {
		case 1:insertnode(); break;
		case 2:deletenode(); break;
		case 3: {
			insertprint();
			system("pause");
			break;
		}
		case 4: printLinkedList();
		}
	}
}