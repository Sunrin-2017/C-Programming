#include "선린.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct add{
	char barcode[20];
	char name[20];
	int price;
	struct node * link;

}node;

node * get_node() {
	node * tmp;
	tmp = (node*)malloc(sizeof(node));
	tmp->link = 0;
	return tmp;
}
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
	{ "BBQ 웻지 포테이토피자", 13900, 78912 },
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
void insert(node ** head) {

	int i;
	if (!(*head)) {
		*head = get_node();

		()
			return;
	}
	insert(&(*head)->link);
}
node * search(node * head, char *ornum) {
	system("cls");
	if (!head) {
		printf("찾는 주문 없음 \n\n");
		return 0;
	}
	if (!(strcmp(head->ornum, ornum))) {
		printf("주문 검색 완료\n");
		printf("========================\n");
		printf("주문자 번호 : %s\n", head->ornum);
		printf("배달 될 주소지 : %s\n", head->deal);
		printf("버거 메뉴명: %s ", head->bmenu);
		printf(" 수량 : %s 개\n", head->bnum);
		printf("치킨 메뉴명 : %s ", head->cmenu);
		printf(" 수량 : %s 개\n", head->cnum);
		printf("디저트 메뉴명 : %s ", head->demenu);
		printf(" 수량 : %s 개\n", head->denum);
		printf("드링크 메뉴명 : %s ", head->drmenu);
		printf(" 수량 : %s 개\n", head->drnum);
		printf("착한아침 메뉴명 : %s ", head->kmmenu);
		printf(" 수량 : %s 개\n", head->kmnum);
		return head;
	}
	search(head->link, ornum);
}
void print(node *head) {
	if (!head) {
		printf("\< 상세한 주문 내역은 주문검색을 이용하세요>\n");
		return;
	}
	else {

		printf(" \n%s    %s\n", head->ornum, head->deal);
	}
	print(head->link);
}
//node * : 원래 연결리스트의 시작주소
//char * : 전화번호
void modify(node * head, char * ornum) {
	head = search(head, ornum);
	int i;
	if (head) {
		while (1) {
			printf("수정할 항목을 선택 하시오 \n");
			printf("1. 메뉴수정  2. 수량수정  3.배달지수정  4. 수정종료\n선택 : ");
			scanf("%d", &i);
			switch (i) {
			case 1:
				printf("1. 버거메뉴  2. 치킨메뉴  3. 디저트메뉴  4. 드링크메뉴  5. 착한아침메뉴\n");
				printf("선택 : ");
				scanf("%d", &i);
				switch (i) {
				case 1:
					printf("0 -> 버거메뉴X 1 -> 버거단품  2 -> 버거세트\n");
					scanf("%d", &i);
					switch (i) {
					case 0:
						strcpy((head)->bmenu, "X");
						strcpy((head)->bnum, "X"); goto a;
					case 2:
						printf(" << 버거메뉴 >>\n\n");
						printf(" 1. 한우 불고기\n 2. 모짜렐라 인 더 버거\n 3. 원조 빅불 세트\n 4.유러피언 치즈 버거\n 5. 와일드 쉬림프 버거\n");
						printf(" 6. 랏츠 버거\n 7. 핫크리스피버거\n 8. 강정버거\n 9.리치버거\n 10.불갈비버거\n");
						printf(" 11. 야채라이스 불고기\n 12. 불고기 버거\n 13. 새우버거\n 14.치킨버거\n 15. 데리버거\n 16.치즈버거\n 0.버거메뉴선택 X\n");
						printf("\n버거메뉴를 선택하세요:");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->bmenu, "한우 불고기 세트"); goto a;
						case 2:
							strcpy((head)->bmenu, "모짜렐라 인더 버거 세트"); goto a;
						case 3:
							strcpy((head)->bmenu, "원조 빅불 버거 세트"); goto a;
						case 4:
							strcpy((head)->bmenu, "유러피언 치즈 버거 세트"); goto a;
						case 5:
							strcpy((head)->bmenu, "와일드 쉬림프 버거 세트"); goto a;
						case 6:
							strcpy((head)->bmenu, "랏츠 버거 세트"); goto a;
						case 7:
							strcpy((head)->bmenu, "핫크리스피 버거 세트"); goto a;
						case 8:
							strcpy((head)->bmenu, "강정버거 세트"); goto a;
						case 9:
							strcpy((head)->bmenu, "리치 버거 세트"); goto a;
						case 10:
							strcpy((head)->bmenu, "불갈비 버거 세트"); goto a;
						case 11:
							strcpy((head)->bmenu, "야채라이스 불고기 세트"); goto a;
						case 12:
							strcpy((head)->bmenu, "불고기 버거 세트"); goto a;
						case 13:
							strcpy((head)->bmenu, "새우 버거 세트"); goto a;
						case 14:
							strcpy((head)->bmenu, "치킨 버거 세트"); goto a;
						case 15:
							strcpy((head)->bmenu, "데리 버거 세트"); goto a;
						case 16:
							strcpy((head)->bmenu, "치즈 버거 세트"); goto a;
						}
					case 1:
						printf(" << 버거메뉴 >>\n\n");
						printf(" 1. 한우 불고기\n 2. 모짜렐라 인 더 버거\n 3. 원조 빅불 세트\n 4.유러피언 치즈 버거\n 5. 와일드 쉬림프 버거\n");
						printf(" 6. 랏츠 버거\n 7. 핫크리스피버거\n 8. 강정버거\n 9.리치버거\n 10.불갈비버거\n");
						printf(" 11. 야채라이스 불고기\n 12. 불고기 버거\n 13. 새우버거\n 14.치킨버거\n 15. 데리버거\n 16.치즈버거\n 0.버거메뉴선택 X\n");
						printf("\n버거메뉴를 선택하세요:");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->bmenu, "한우 불고기"); goto a;
						case 2:
							strcpy((head)->bmenu, "모짜렐라 인더 버거"); goto a;
						case 3:
							strcpy((head)->bmenu, "원조 빅불 버거"); goto a;
						case 4:
							strcpy((head)->bmenu, "유러피언 치즈 버거"); goto a;
						case 5:
							strcpy((head)->bmenu, "와일드 쉬림프 버거"); goto a;
						case 6:
							strcpy((head)->bmenu, "랏츠 버거"); goto a;
						case 7:
							strcpy((head)->bmenu, "핫크리스피 버거"); goto a;
						case 8:
							strcpy((head)->bmenu, "강정버거"); goto a;
						case 9:
							strcpy((head)->bmenu, "리치 버거"); goto a;
						case 10:
							strcpy((head)->bmenu, "불갈비 버거"); goto a;
						case 11:
							strcpy((head)->bmenu, "야채라이스 불고기"); goto a;
						case 12:
							strcpy((head)->bmenu, "불고기 버거"); goto a;
						case 13:
							strcpy((head)->bmenu, "새우 버거"); goto a;
						case 14:
							strcpy((head)->bmenu, "치킨 버거"); goto a;
						case 15:
							strcpy((head)->bmenu, "데리 버거"); goto a;
						case 16:
							strcpy((head)->bmenu, "치즈 버거"); goto a;
						case 0:
							strcpy((head)->bmenu, "X");
							strcpy((head)->bnum, "X"); goto a;
						}
					}
				case 2:
					printf("\n\n<< 치킨메뉴 >>\n");
					printf(" 1. 치킨 하프팩(2인분)\n 2. 순살치킨 하프팩\n 3. 순살치킨 풀팩\n 4. 치킨 풀팩\n 5. 패밀리팩(3인분)\n");
					printf(" 6. 화이어윙(2조각)\n 7. 치킨휠레(2조각)\n 8. 치킨1조각\n 0. 치킨 메뉴 X\n");
					printf("\n치킨 메뉴 선택  : ");
					scanf("%d", &i);
					switch (i) {
					case 1:
						strcpy((head)->cmenu, "치킨 하프팩(2인분)"); break;
					case 2:
						strcpy((head)->cmenu, "순살치킨 하프팩"); break;
					case 3:
						strcpy((head)->cmenu, "순살치킨 풀팩"); break;
					case 4:
						strcpy((head)->cmenu, "치킨 풀팩"); break;
					case 5:
						strcpy((head)->cmenu, "패밀리팩(3인분)"); break;
					case 6:
						strcpy((head)->cmenu, "화이어윙(2조각)"); break;
					case 7:
						strcpy((head)->cmenu, "치킨휠레(2조각)"); break;
					case 8:
						strcpy((head)->cmenu, "치킨 1조각"); break;
					case 0:
						strcpy((head)->cmenu, "X");
						strcpy((head)->cnum, "X"); break;
					}
				case 3:
					printf("<< 디저트 메뉴 >>\n");
					printf(" 1. 쉑쉑치킨\n 2. 홍게너겟\n 3. 오징어링\n 4. 크런치새우\n 5. 양념감자\n");
					printf(" 6. 내추럴 치즈 스틱\n 7. 포테이토\n 8. 소프트콘\n 9. 토네이도\n 10.고소한 콩빙수\n");
					printf(" 11. 상큼한 과일빙수\n 12. 선데 아이스크림 패션후르츠\n 0. 디저트 메뉴 X\n");
					printf("\n디저트 메뉴 선택 : ");
					scanf("%d", &i);
					switch (i) {
					case 1:
						printf("1. 어니언  2. 치즈  3. 칠리");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->demenu, "쉑쉑치킨 어니언"); goto a;
						case 2:
							strcpy((head)->demenu, "쉑쉑치킨 치즈"); goto a;
						case 3:
							strcpy((head)->demenu, "쉑쉑치킨 칠리"); goto a;
						}
					case 2:
						strcpy((head)->demenu, "홍게 너겟"); goto a;
					case 3:
						strcpy((head)->demenu, "오징어링"); goto a;
					case 4:
						strcpy((head)->demenu, "크런치새우"); goto a;
					case 5:
						strcpy((head)->demenu, "양념감자"); goto a;
					case 6:
						strcpy((head)->demenu, "내추럴 치즈 스틱"); goto a;
					case 7:
						strcpy((head)->demenu, "포테이토"); goto a;
					case 8:
						strcpy((head)->demenu, "소프트콘"); goto a;
					case 9:
						printf("1. 레몬팝  2. 패션후르츠  3. 초코쿠키  4. 녹차  5. 스트로베리  6.매직팝\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->demenu, "토네이도 레몬팝"); goto a;
						case 2:
							strcpy((head)->demenu, "토네이도 패션후르츠"); goto a;
						case 3:
							strcpy((head)->demenu, "토네이도 초코쿠키"); goto a;
						case 4:
							strcpy((head)->demenu, "토네이도 녹차"); goto a;
						case 5:
							strcpy((head)->demenu, "토네이도 스트로베리"); goto a;
						case 6:
							strcpy((head)->demenu, "토네이도 매직팝"); goto a;
						}
					case 10:
						strcpy((head)->demenu, "고소한 콩빙수"); goto a;
					case 11:
						strcpy((head)->demenu, "상큼한 과일빙수"); goto a;
					case 12:
						strcpy((head)->demenu, "선데아이스크림 패션 후르츠"); goto a;
					case 0:
						strcpy((head)->denum, "X");
						strcpy((head)->demenu, "X"); goto a;
					}


				case 4:
					printf("<< 드링크 메뉴 >>\n");
					printf(" 1. 핫티\n 2. 핫초코\n 3. 커피류\n 4. 레몬에이드\n 5. 사과주스\n");
					printf(" 6. 오렌지 주스\n 7. 아이스티(복숭아)\n 8. 밀크쉐이크\n 9. 탄산음료\n 10. 우유\n 0. 드링크메뉴 X\n");
					printf("드링크 메뉴 선택 : ");
					scanf("%d", &i);
					switch (i) {
					case 1:
						strcpy((head)->drmenu, "핫티"); goto a;
					case 2:
						strcpy((head)->drmenu, "핫초코"); goto a;
					case 3:
						printf(" 1. 카라멜 마끼아또  2. 카페모카  3. 카페라떼  4. 아메리카노  5. 아이스 아메리카노\n 6.아이스 카페라떼");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->drmenu, "카라멜 마끼아또"); goto a;
						case 2:
							strcpy((head)->drmenu, "카페 모카"); goto a;
						case 3:
							strcpy((head)->drmenu, "카페라떼"); goto a;
						case 4:
							strcpy((head)->drmenu, "아메리카노"); goto a;
						case 5:
							strcpy((head)->drmenu, "아이스 아메리카노"); goto a;
						case 6:
							strcpy((head)->drmenu, "아이스 카페라떼"); goto a;
						}
					case 4:
						strcpy((head)->drmenu, "레몬에이드"); goto a;
					case 5:
						strcpy((head)->drmenu, "사과 주스"); goto a;
					case 6:
						strcpy((head)->drmenu, "오렌지주스"); goto a;
					case 7:
						strcpy((head)->drmenu, "아이스티(복숭아)"); goto a;
					case 8:
						printf("1. 바닐라  2. 초코  3. 딸기\n :");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->drmenu, "밀크쉐이크 바닐라"); goto a;
						case 2:
							strcpy((head)->drmenu, "밀크쉐이크 초코"); goto a;
						case 3:
							strcpy((head)->drmenu, "밀크쉐이크 딸기"); goto a;
						}
					case 9:
						printf("1. 사이다  2. 콜라\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->drmenu, "사이다"); goto a;
						case 2:
							strcpy((head)->drmenu, "콜라"); goto a;
						}
					case 10:
						strcpy((head)->drmenu, "우유"); goto a;
					case 0:
						strcpy((head)->drmenu, "X");
						strcpy((head)->drnum, "X"); goto a;
					}
				case 5:
					printf("콤보주문시 커피추가  세트주문시 커피,해쉬브라운추가\n");
					printf("단! 해쉬브라운 콤보,세트는 없음!!\n");
					printf("단품: 1  콤보: 2  세트: 3  착한아침메뉴 X : 0\n");
					printf("선택 : ");
					scanf("%d", &i);
					switch (i) {
					case 0:
						strcpy((head)->kmmenu, "X");
						strcpy((head)->kmnum, "X"); goto a;
					case 1:
						printf("0. 착한아침메뉴 X  1. 햄치즈라이스  2. 햄에그머핀  3. 소시지에그머핀  4. 베이컨치킨머핀  5. 베이컨소시지에그머핀  6. 해쉬브라운\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->kmmenu, "햄치즈라이스"); goto a;
						case 2:
							strcpy((head)->kmmenu, "햄에그머핀"); goto a;
						case 3:
							strcpy((head)->kmmenu, "소시지에그머핀"); goto a;
						case 4:
							strcpy((head)->kmmenu, "베이컨치킨머핀"); goto a;
						case 5:
							strcpy((head)->kmmenu, "베이컨소시지에그머핀"); goto a;
						case 6:
							strcpy((head)->kmmenu, "해쉬브라운"); goto a;
						}
					case 2:
						printf("1. 햄치즈라이스콤보  2. 햄에그머핀콤보  3. 소시지에그머핀콤보  4. 베이컨치킨머핀콤보  5. 베이컨소시지에그머핀콤보  6. 해쉬브라운\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->kmmenu, "햄치즈라이스콤보"); goto a;
						case 2:
							strcpy((head)->kmmenu, "햄에그머핀콤보"); goto a;
						case 3:
							strcpy((head)->kmmenu, "소시지에그머핀콤보"); goto a;
						case 4:
							strcpy((head)->kmmenu, "베이컨치킨머핀콤보"); goto a;
						case 5:
							strcpy((head)->kmmenu, "베이컨소시지에그머핀콤보"); goto a;
						case 6:
							strcpy((head)->kmmenu, "해쉬브라운"); goto a;
						}
					case 3:
						printf("1. 햄치즈라이스세트  2. 햄에그머핀세트  3. 소시지에그머핀세트  4. 베이컨치킨머핀세트  5. 베이컨소시지에그머핀세트  6. 해쉬브라운\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->kmmenu, "햄치즈라이스세트"); break;
						case 2:
							strcpy((head)->kmmenu, "햄에그머핀세트"); break;
						case 3:
							strcpy((head)->kmmenu, "소시지에그머핀세트"); break;
						case 4:
							strcpy((head)->kmmenu, "베이컨치킨머핀세트"); break;
						case 5:
							strcpy((head)->kmmenu, "베이컨소시지에그머핀세트"); break;
						case 6:
							strcpy((head)->kmmenu, "해쉬브라운"); break;
						}
					}
				}//메뉴수정 switch끝
			case 2:
				printf("<< 수량을 수정할 메뉴를 선택하세요 >>\n");
				printf("1 .버거메뉴  2. 치킨메뉴  3. 디저트메뉴  4. 드링크메뉴  5. 착한아침메뉴\n");
				printf("선택 : ");
				scanf("%d", &i);
				switch (i) {
				case 1:
					printf("현재 버거메뉴 수량 : %s\n\n", (head)->bnum);
					printf("수정할 버거메뉴 수량: ");
					fflush(stdin);
					gets((head)->bnum); goto a;
				case 2:
					printf("현재 치킨메뉴 수량 : %s\n\n", (head)->cnum);
					printf("수정할 치킨메뉴 수량: ");
					fflush(stdin);
					gets((head)->cnum); goto a;
				case 3:
					printf("현재 디저트메뉴 수량 : %s\n\n", (head)->denum);
					printf("수정할 디저트메뉴 수량: ");
					fflush(stdin);
					gets((head)->denum); goto a;
				case 4:
					printf("현재 드링크메뉴 수량 : %s\n\n", (head)->drnum);
					printf("수정할 드링크메뉴 수량: ");
					fflush(stdin);
					gets((head)->drnum); goto a;
				case 5:
					printf("현재 착한아침메뉴 수량 : %s\n\n", (head)->kmnum);
					printf("수정할 착한아침메뉴 수량: ");
					fflush(stdin);
					gets((head)->kmnum); goto a;
				}
			case 3:
				printf("현재 배달지 : %s\n ", (head)->deal);
				fflush(stdin);
				printf("수정할 배달지 : ");
				gets((head)->deal); goto a;
			case 4:
				printf("수정을 종료합니다."); system("pause"); return;
			}
		a:
			printf("수정완료\n");
			system("pause"); system("cls");
		}

	}
}
void del(node ** head, char * ornum) {
	node * tmp;
	if (!*head) {
		printf("삭제할  주문 없음 \n"); return;
	}
	if (!(strcmp((*head)->ornum, ornum))) {
		tmp = *head;
		*head = (*head)->link;
		free(tmp);
		printf("삭제완료\n"); return;
	}
	del(&(*head)->link, ornum);
}
void main() {
	node * head = 0;
	int i;
	char name[20];
	while (1) {
		printf("< < < === 롯데리아 홈서비스 === > > >\n\n");
		printf("1. 주문 등록\n");
		printf("2. 주문 상세 검색\n");
		printf("3. 배달지 목록\n");
		printf("4. 주문 수정\n");
		printf("5. 판매 완료\n");
		printf("6. 종     료\n");
		printf("선  택 : "); scanf("%d", &i);
		switch (i) {
		case 1:insert(&head); break;
		case 2:printf("주문자 번호 입력 : "); scanf("%s", name); search(head, name); break;
		case 3:printf("%4s  %4s\n", "주문자 번호    ", " 배달지    "); print(head); break;
		case 4:printf("수정할 주문자 번호 : "); scanf("%s", name); modify(head, name); break;
		case 5:printf("주문자 번호 입력 : "); scanf("%s", name); del(&head, name); break;
		case 6:return;
		}
		system("pause"); system("cls");
	}
}
