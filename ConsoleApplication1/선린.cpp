#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include"선린.h" // 밑에 있는 db라는 이름을 가진 구조체 배열을 사용하기위해 database라는 이름으로 구조체를 선언해 두었고, 헤더파일을 include시켰다.
typedef struct chicken { //node라는 별명을 가진 chicken구조체를 선언해 두었다.
	char name[100];
	int price;
	int num;
	int barcode;
	struct LinkedList *GO;
}node;

Norder *first, *last; //단일 연결리스트의 기본이 되는 first변수와 last변수를 선언해 준다.

struct database db[60] = { //바코드를 검색할 제품 60개를 준비했고, 일정한 규격을 가진 구조체 안에 데이터들을 넣어줬다.
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



void calculate() {  // 마감을 할 경우 단일연결리스트의 머리와 꼬리가 되는 두개를 이어줌으로써 머리와 꼬리 사이에 있던 주문들이 날아가면서 프로그램 처음으로 넘어가는것과 같다.
	first = (node*)malloc(sizeof(node));
	last = (node*)malloc(sizeof(node));
	first->GO = last;
}

void noworder(){
    system("cls"); // 바코드를 하나씩 입력할때마다 창에 현재까지 얼마나 찍었는지에 대한 리스트를 보여준다. (이것이 곧 단일연결리스트다)
    int sum = 0;
    node *p = first->GO;
    if (p == last) {
        printf("계산된 물건이 없습니다.\n");
        return;
    }
    while (p != last) {
        printf("%s\t  %d원\t  %d개\n", p->name, p->price, p->num);
        sum += p->price*p->num;
        p = p->GO;
    }
    printf("\n");
    printf("총 합계 : %d원\n", sum);
}

void pay () {  //손님이 계산을 하러 카운터로 왔을때 처리할 함수이다. 손님이 총 드신 음식값을 띄워주고 돈을 받아서 입력한금액이 총액보다 작을경우 외상금액을 출력해주고 입력한 값이 총액보다 클경우 거스름돈을 출력해준다.
	system("cls");
	int sum = 0;
	int input;
	node *point = first->GO;
	if (point == last) {
		printf("계산된 물건이 없습니다.\n");
		system("pause");
		return;
	}
	while (point != last) {
		printf("%s\t  %d원\t  %d개\n", point->name, point->price, point->num);
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


void orderadd () { // 단일연결리스트의 꽃이라고 할 수 있는 orderadd함수 이다. 말그대로 주문을 넣는 함수이고, 단일연결리스트의 first와 last사이에 주문이 하나씩 들어가게 된다.
	system("cls");
	while (1) {
		int barcode;
		node *New = (node*)malloc(sizeof(node));
		node *a = first;
		scanf("%d", &barcode);
		while (a->GO != last) {
			a = a->GO;
			if (a->barcode == barcode) {
				a->num++;
				break;
			}
		}
		for (int i = 0; i < 60; i++) { //반복문을 통해서 db에서 값을 찾고 맞는값이 있다면 그 인덱스의 값을 모두 불러와서 노드라는 별명을 선언한 구조체에 옮겨담아 동적할당을 시킨다.
			if (db[i].barcode == barcode && db[i].barcode != a->barcode) {
				strcpy(New->name, db[i].name);
				New->price = db[i].price;
				New->barcode = db[i].barcode;
				New->GO = tail;
				New->num = 1;
				a->GO = New;
			}
			else if (barcode == 0) return;
		}
        noworder();
    }
}

void cancel () { // 주문을 하다가 취소가 되는 경우를 생각해 만든기능이다. 일정메뉴를 구매하려고 했다가 취소하는 경우를 여러번 봐왔기 때문에 이런기능을 넣게 되었다.
	int barcode;
	scanf("%d", &barcode);
	node *A = first->GO;
	node *B = first;
	while (p != last) {
		if (p->barcode == barcode && p->num == 1) {
			node*s = p->GO;
			free(p);
			o->GO = s;
			break;
		}
		else if (p->barcode == barcode && p->num > 1) {
			p->num--;
			break;
		}
		p = p->GO;
		o = o->GO;
	}
}

void main() {
	int a = 0;
	calculate();
	while (1) {
		system("cls");
		int num;
		printf("*** - BBQ 판매매장 - ***\n\n");
		printf("1. 주문 등록\n");
		printf("2. 주문 삭제\n");
		printf("3. 현재 주문 현황\n");
		printf("4. 정산\n:");
		scanf("%d", &num);
		switch (num) {
		case 1:orderadd(); break;
		case 2:cancel(); break;
		case 3: {
			noworder();
			system("pause");
			break;
		}
		case 4: pay();
		}
	}
}
