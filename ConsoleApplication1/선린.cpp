#include "����.h"
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
	{ "BBQ Ȳ�� �ø���ġŲ", 16000, 1234 },
	{ "BBQ Ȳ�� �ø���ġŲ (�ݹ�)",17000, 12345 },
	{ "BBQ Ȳ�� �ø���ġŲ (�ߴٸ�)", 17500, 12243 },
	{ "BBQ Ȳ�� �ø���ġŲ (�ſ� �ߴٸ�)",19000,12342 },
	{ "BBQ ��ũ�� ���ġŲ", 17000, 21314 },
	{ "BBQ ��ũ�� ���ġŲ (�ſ��)", 17500, 15324 },
	{ "BBQ Ȳ�� �ø��� �ӾȽ�", 17000, 74452 },
	{ "BBQ ���� ũ��Ŀ",18000, 53142 },
	{ "BBQ �Ĵ��� ��",19000, 24198 },
	{ "BBQ ġŲ ����", 18000, 19422 },
	{ "BBQ ����ġŲ (��)", 19000, 93872 },
	{ "BBQ ���� ������ (�Ѹ���)", 19900, 92803 },
	{ "BBQ ���� ������ (�Ѹ��� ��)", 19900, 3241 },
	{ "BBQ Ȳ�� �ø��� (�ݹ� �ߴٸ�}", 18500, 91842 },
	{ "BBQ ����ũ ġŲ",17000, 4928 },
	{ "���� �ٻ�ĭ ġŲ", 17000, 49281 },
	{ "�ٻ�ĭ ġŲ (�ݹ�)", 17000, 92732 },
	{ "BBQ ���� ��ġŲ", 18900, 1235 },
	{ "BBQ ���� ��ġŲ (��)",18900, 1236 },
	{ "BBQ ���� ��ġŲ (����)", 20900, 1237 },
	{ "BBQ ��� ������", 18900, 1238 },
	{ "BBQ ��� ������ (��)",18900, 1239 },
	{ "BBQ ġ��", 19000, 1240 },
	{ "BBQ ġ�� (����)", 19900, 1241 },
	{ "BBQ ���̰�����(�Ѹ���)", 18900, 78912 },
	{ "BBQ ���̰�����(�Ѹ���)(��)", 18900, 78912 },
	{ "BBQ �������", 14900, 78912 },
	{ "BBQ �ٻ�ĭ ġŲ", 16000, 78912 },
	{ "BBQ �ٻ�ĭ ġŲ(���)", 17000, 78912 },
	{ "BBQ �ٻ�ĭ ġŲ(�ſ����)", 17500, 78912 },
	{ "BBQ Ȳ�ݿø��� (����)", 18000, 78912 },
	{ "BBQ �Ŵޱ�(��)", 19500, 78912 },
	{ "BBQ �ڸ���ī ��ٸ�����", 17000, 49284 },
	{ "BBQ ���� ����(R)", 14900, 78912 },
	{ "BBQ �޺���̼� ����(R)", 13900, 78912 },
	{ "BBQ �ٺ�ť ġŲ ����(R)", 15900, 78912 },
	{ "BBQ ���� ���� ����(R)", 12900, 78912 },
	{ "BBQ �����Ը�Ÿ ����(R)", 12900, 78912 },
	{ "BBQ �Ͽ��̾� ���� ����(R)", 14900, 78912 },
	{ "BBQ ������ ������������", 15900, 78912 },
	{ "BBQ ���� ������������", 13900, 78912 },
	{ "BBQ ���Դ�ġ��Ǯ(������)", 14900, 78912 },
	{ "BBQ ���Դ�ġ��Ǯ(����)", 16900, 78912 },
	{ "BBQ ��������(R)", 12900, 78912 },
	{ "BBQ ġ�������ֵ���(5��)", 3900, 78912 },
	{ "BBQ ��������", 3000, 78912 },
	{ "BBQ ��¡�", 3000, 78912 },
	{ "BBQ ġ�ƽ", 3000, 78912 },
	{ "BBQ ������ƽ", 3000, 78912 },
	{ "BBQ ������", 2500, 78912 },
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
		printf("ã�� �ֹ� ���� \n\n");
		return 0;
	}
	if (!(strcmp(head->ornum, ornum))) {
		printf("�ֹ� �˻� �Ϸ�\n");
		printf("========================\n");
		printf("�ֹ��� ��ȣ : %s\n", head->ornum);
		printf("��� �� �ּ��� : %s\n", head->deal);
		printf("���� �޴���: %s ", head->bmenu);
		printf(" ���� : %s ��\n", head->bnum);
		printf("ġŲ �޴��� : %s ", head->cmenu);
		printf(" ���� : %s ��\n", head->cnum);
		printf("����Ʈ �޴��� : %s ", head->demenu);
		printf(" ���� : %s ��\n", head->denum);
		printf("�帵ũ �޴��� : %s ", head->drmenu);
		printf(" ���� : %s ��\n", head->drnum);
		printf("���Ѿ�ħ �޴��� : %s ", head->kmmenu);
		printf(" ���� : %s ��\n", head->kmnum);
		return head;
	}
	search(head->link, ornum);
}
void print(node *head) {
	if (!head) {
		printf("\< ���� �ֹ� ������ �ֹ��˻��� �̿��ϼ���>\n");
		return;
	}
	else {

		printf(" \n%s    %s\n", head->ornum, head->deal);
	}
	print(head->link);
}
//node * : ���� ���Ḯ��Ʈ�� �����ּ�
//char * : ��ȭ��ȣ
void modify(node * head, char * ornum) {
	head = search(head, ornum);
	int i;
	if (head) {
		while (1) {
			printf("������ �׸��� ���� �Ͻÿ� \n");
			printf("1. �޴�����  2. ��������  3.���������  4. ��������\n���� : ");
			scanf("%d", &i);
			switch (i) {
			case 1:
				printf("1. ���Ÿ޴�  2. ġŲ�޴�  3. ����Ʈ�޴�  4. �帵ũ�޴�  5. ���Ѿ�ħ�޴�\n");
				printf("���� : ");
				scanf("%d", &i);
				switch (i) {
				case 1:
					printf("0 -> ���Ÿ޴�X 1 -> ���Ŵ�ǰ  2 -> ���ż�Ʈ\n");
					scanf("%d", &i);
					switch (i) {
					case 0:
						strcpy((head)->bmenu, "X");
						strcpy((head)->bnum, "X"); goto a;
					case 2:
						printf(" << ���Ÿ޴� >>\n\n");
						printf(" 1. �ѿ� �Ұ��\n 2. ��¥���� �� �� ����\n 3. ���� ��� ��Ʈ\n 4.�����Ǿ� ġ�� ����\n 5. ���ϵ� ������ ����\n");
						printf(" 6. ���� ����\n 7. ��ũ�����ǹ���\n 8. ��������\n 9.��ġ����\n 10.�Ұ������\n");
						printf(" 11. ��ä���̽� �Ұ��\n 12. �Ұ�� ����\n 13. �������\n 14.ġŲ����\n 15. ��������\n 16.ġ�����\n 0.���Ÿ޴����� X\n");
						printf("\n���Ÿ޴��� �����ϼ���:");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->bmenu, "�ѿ� �Ұ�� ��Ʈ"); goto a;
						case 2:
							strcpy((head)->bmenu, "��¥���� �δ� ���� ��Ʈ"); goto a;
						case 3:
							strcpy((head)->bmenu, "���� ��� ���� ��Ʈ"); goto a;
						case 4:
							strcpy((head)->bmenu, "�����Ǿ� ġ�� ���� ��Ʈ"); goto a;
						case 5:
							strcpy((head)->bmenu, "���ϵ� ������ ���� ��Ʈ"); goto a;
						case 6:
							strcpy((head)->bmenu, "���� ���� ��Ʈ"); goto a;
						case 7:
							strcpy((head)->bmenu, "��ũ������ ���� ��Ʈ"); goto a;
						case 8:
							strcpy((head)->bmenu, "�������� ��Ʈ"); goto a;
						case 9:
							strcpy((head)->bmenu, "��ġ ���� ��Ʈ"); goto a;
						case 10:
							strcpy((head)->bmenu, "�Ұ��� ���� ��Ʈ"); goto a;
						case 11:
							strcpy((head)->bmenu, "��ä���̽� �Ұ�� ��Ʈ"); goto a;
						case 12:
							strcpy((head)->bmenu, "�Ұ�� ���� ��Ʈ"); goto a;
						case 13:
							strcpy((head)->bmenu, "���� ���� ��Ʈ"); goto a;
						case 14:
							strcpy((head)->bmenu, "ġŲ ���� ��Ʈ"); goto a;
						case 15:
							strcpy((head)->bmenu, "���� ���� ��Ʈ"); goto a;
						case 16:
							strcpy((head)->bmenu, "ġ�� ���� ��Ʈ"); goto a;
						}
					case 1:
						printf(" << ���Ÿ޴� >>\n\n");
						printf(" 1. �ѿ� �Ұ��\n 2. ��¥���� �� �� ����\n 3. ���� ��� ��Ʈ\n 4.�����Ǿ� ġ�� ����\n 5. ���ϵ� ������ ����\n");
						printf(" 6. ���� ����\n 7. ��ũ�����ǹ���\n 8. ��������\n 9.��ġ����\n 10.�Ұ������\n");
						printf(" 11. ��ä���̽� �Ұ��\n 12. �Ұ�� ����\n 13. �������\n 14.ġŲ����\n 15. ��������\n 16.ġ�����\n 0.���Ÿ޴����� X\n");
						printf("\n���Ÿ޴��� �����ϼ���:");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->bmenu, "�ѿ� �Ұ��"); goto a;
						case 2:
							strcpy((head)->bmenu, "��¥���� �δ� ����"); goto a;
						case 3:
							strcpy((head)->bmenu, "���� ��� ����"); goto a;
						case 4:
							strcpy((head)->bmenu, "�����Ǿ� ġ�� ����"); goto a;
						case 5:
							strcpy((head)->bmenu, "���ϵ� ������ ����"); goto a;
						case 6:
							strcpy((head)->bmenu, "���� ����"); goto a;
						case 7:
							strcpy((head)->bmenu, "��ũ������ ����"); goto a;
						case 8:
							strcpy((head)->bmenu, "��������"); goto a;
						case 9:
							strcpy((head)->bmenu, "��ġ ����"); goto a;
						case 10:
							strcpy((head)->bmenu, "�Ұ��� ����"); goto a;
						case 11:
							strcpy((head)->bmenu, "��ä���̽� �Ұ��"); goto a;
						case 12:
							strcpy((head)->bmenu, "�Ұ�� ����"); goto a;
						case 13:
							strcpy((head)->bmenu, "���� ����"); goto a;
						case 14:
							strcpy((head)->bmenu, "ġŲ ����"); goto a;
						case 15:
							strcpy((head)->bmenu, "���� ����"); goto a;
						case 16:
							strcpy((head)->bmenu, "ġ�� ����"); goto a;
						case 0:
							strcpy((head)->bmenu, "X");
							strcpy((head)->bnum, "X"); goto a;
						}
					}
				case 2:
					printf("\n\n<< ġŲ�޴� >>\n");
					printf(" 1. ġŲ ������(2�κ�)\n 2. ����ġŲ ������\n 3. ����ġŲ Ǯ��\n 4. ġŲ Ǯ��\n 5. �йи���(3�κ�)\n");
					printf(" 6. ȭ�̾���(2����)\n 7. ġŲ�ٷ�(2����)\n 8. ġŲ1����\n 0. ġŲ �޴� X\n");
					printf("\nġŲ �޴� ����  : ");
					scanf("%d", &i);
					switch (i) {
					case 1:
						strcpy((head)->cmenu, "ġŲ ������(2�κ�)"); break;
					case 2:
						strcpy((head)->cmenu, "����ġŲ ������"); break;
					case 3:
						strcpy((head)->cmenu, "����ġŲ Ǯ��"); break;
					case 4:
						strcpy((head)->cmenu, "ġŲ Ǯ��"); break;
					case 5:
						strcpy((head)->cmenu, "�йи���(3�κ�)"); break;
					case 6:
						strcpy((head)->cmenu, "ȭ�̾���(2����)"); break;
					case 7:
						strcpy((head)->cmenu, "ġŲ�ٷ�(2����)"); break;
					case 8:
						strcpy((head)->cmenu, "ġŲ 1����"); break;
					case 0:
						strcpy((head)->cmenu, "X");
						strcpy((head)->cnum, "X"); break;
					}
				case 3:
					printf("<< ����Ʈ �޴� >>\n");
					printf(" 1. ����ġŲ\n 2. ȫ�Գʰ�\n 3. ��¡�\n 4. ũ��ġ����\n 5. ��䰨��\n");
					printf(" 6. ���߷� ġ�� ��ƽ\n 7. ��������\n 8. ����Ʈ��\n 9. ����̵�\n 10.����� �����\n");
					printf(" 11. ��ŭ�� ���Ϻ���\n 12. ���� ���̽�ũ�� �м��ĸ���\n 0. ����Ʈ �޴� X\n");
					printf("\n����Ʈ �޴� ���� : ");
					scanf("%d", &i);
					switch (i) {
					case 1:
						printf("1. ��Ͼ�  2. ġ��  3. ĥ��");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->demenu, "����ġŲ ��Ͼ�"); goto a;
						case 2:
							strcpy((head)->demenu, "����ġŲ ġ��"); goto a;
						case 3:
							strcpy((head)->demenu, "����ġŲ ĥ��"); goto a;
						}
					case 2:
						strcpy((head)->demenu, "ȫ�� �ʰ�"); goto a;
					case 3:
						strcpy((head)->demenu, "��¡�"); goto a;
					case 4:
						strcpy((head)->demenu, "ũ��ġ����"); goto a;
					case 5:
						strcpy((head)->demenu, "��䰨��"); goto a;
					case 6:
						strcpy((head)->demenu, "���߷� ġ�� ��ƽ"); goto a;
					case 7:
						strcpy((head)->demenu, "��������"); goto a;
					case 8:
						strcpy((head)->demenu, "����Ʈ��"); goto a;
					case 9:
						printf("1. ������  2. �м��ĸ���  3. ������Ű  4. ����  5. ��Ʈ�κ���  6.������\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->demenu, "����̵� ������"); goto a;
						case 2:
							strcpy((head)->demenu, "����̵� �м��ĸ���"); goto a;
						case 3:
							strcpy((head)->demenu, "����̵� ������Ű"); goto a;
						case 4:
							strcpy((head)->demenu, "����̵� ����"); goto a;
						case 5:
							strcpy((head)->demenu, "����̵� ��Ʈ�κ���"); goto a;
						case 6:
							strcpy((head)->demenu, "����̵� ������"); goto a;
						}
					case 10:
						strcpy((head)->demenu, "����� �����"); goto a;
					case 11:
						strcpy((head)->demenu, "��ŭ�� ���Ϻ���"); goto a;
					case 12:
						strcpy((head)->demenu, "�������̽�ũ�� �м� �ĸ���"); goto a;
					case 0:
						strcpy((head)->denum, "X");
						strcpy((head)->demenu, "X"); goto a;
					}


				case 4:
					printf("<< �帵ũ �޴� >>\n");
					printf(" 1. ��Ƽ\n 2. ������\n 3. Ŀ�Ƿ�\n 4. �����̵�\n 5. ����ֽ�\n");
					printf(" 6. ������ �ֽ�\n 7. ���̽�Ƽ(������)\n 8. ��ũ����ũ\n 9. ź������\n 10. ����\n 0. �帵ũ�޴� X\n");
					printf("�帵ũ �޴� ���� : ");
					scanf("%d", &i);
					switch (i) {
					case 1:
						strcpy((head)->drmenu, "��Ƽ"); goto a;
					case 2:
						strcpy((head)->drmenu, "������"); goto a;
					case 3:
						printf(" 1. ī��� �����ƶ�  2. ī���ī  3. ī���  4. �Ƹ޸�ī��  5. ���̽� �Ƹ޸�ī��\n 6.���̽� ī���");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->drmenu, "ī��� �����ƶ�"); goto a;
						case 2:
							strcpy((head)->drmenu, "ī�� ��ī"); goto a;
						case 3:
							strcpy((head)->drmenu, "ī���"); goto a;
						case 4:
							strcpy((head)->drmenu, "�Ƹ޸�ī��"); goto a;
						case 5:
							strcpy((head)->drmenu, "���̽� �Ƹ޸�ī��"); goto a;
						case 6:
							strcpy((head)->drmenu, "���̽� ī���"); goto a;
						}
					case 4:
						strcpy((head)->drmenu, "�����̵�"); goto a;
					case 5:
						strcpy((head)->drmenu, "��� �ֽ�"); goto a;
					case 6:
						strcpy((head)->drmenu, "�������ֽ�"); goto a;
					case 7:
						strcpy((head)->drmenu, "���̽�Ƽ(������)"); goto a;
					case 8:
						printf("1. �ٴҶ�  2. ����  3. ����\n :");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->drmenu, "��ũ����ũ �ٴҶ�"); goto a;
						case 2:
							strcpy((head)->drmenu, "��ũ����ũ ����"); goto a;
						case 3:
							strcpy((head)->drmenu, "��ũ����ũ ����"); goto a;
						}
					case 9:
						printf("1. ���̴�  2. �ݶ�\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->drmenu, "���̴�"); goto a;
						case 2:
							strcpy((head)->drmenu, "�ݶ�"); goto a;
						}
					case 10:
						strcpy((head)->drmenu, "����"); goto a;
					case 0:
						strcpy((head)->drmenu, "X");
						strcpy((head)->drnum, "X"); goto a;
					}
				case 5:
					printf("�޺��ֹ��� Ŀ���߰�  ��Ʈ�ֹ��� Ŀ��,�ؽ������߰�\n");
					printf("��! �ؽ����� �޺�,��Ʈ�� ����!!\n");
					printf("��ǰ: 1  �޺�: 2  ��Ʈ: 3  ���Ѿ�ħ�޴� X : 0\n");
					printf("���� : ");
					scanf("%d", &i);
					switch (i) {
					case 0:
						strcpy((head)->kmmenu, "X");
						strcpy((head)->kmnum, "X"); goto a;
					case 1:
						printf("0. ���Ѿ�ħ�޴� X  1. ��ġ����̽�  2. �ܿ��׸���  3. �ҽ������׸���  4. ������ġŲ����  5. �������ҽ������׸���  6. �ؽ�����\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->kmmenu, "��ġ����̽�"); goto a;
						case 2:
							strcpy((head)->kmmenu, "�ܿ��׸���"); goto a;
						case 3:
							strcpy((head)->kmmenu, "�ҽ������׸���"); goto a;
						case 4:
							strcpy((head)->kmmenu, "������ġŲ����"); goto a;
						case 5:
							strcpy((head)->kmmenu, "�������ҽ������׸���"); goto a;
						case 6:
							strcpy((head)->kmmenu, "�ؽ�����"); goto a;
						}
					case 2:
						printf("1. ��ġ����̽��޺�  2. �ܿ��׸����޺�  3. �ҽ������׸����޺�  4. ������ġŲ�����޺�  5. �������ҽ������׸����޺�  6. �ؽ�����\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->kmmenu, "��ġ����̽��޺�"); goto a;
						case 2:
							strcpy((head)->kmmenu, "�ܿ��׸����޺�"); goto a;
						case 3:
							strcpy((head)->kmmenu, "�ҽ������׸����޺�"); goto a;
						case 4:
							strcpy((head)->kmmenu, "������ġŲ�����޺�"); goto a;
						case 5:
							strcpy((head)->kmmenu, "�������ҽ������׸����޺�"); goto a;
						case 6:
							strcpy((head)->kmmenu, "�ؽ�����"); goto a;
						}
					case 3:
						printf("1. ��ġ����̽���Ʈ  2. �ܿ��׸��ɼ�Ʈ  3. �ҽ������׸��ɼ�Ʈ  4. ������ġŲ���ɼ�Ʈ  5. �������ҽ������׸��ɼ�Ʈ  6. �ؽ�����\n");
						scanf("%d", &i);
						switch (i) {
						case 1:
							strcpy((head)->kmmenu, "��ġ����̽���Ʈ"); break;
						case 2:
							strcpy((head)->kmmenu, "�ܿ��׸��ɼ�Ʈ"); break;
						case 3:
							strcpy((head)->kmmenu, "�ҽ������׸��ɼ�Ʈ"); break;
						case 4:
							strcpy((head)->kmmenu, "������ġŲ���ɼ�Ʈ"); break;
						case 5:
							strcpy((head)->kmmenu, "�������ҽ������׸��ɼ�Ʈ"); break;
						case 6:
							strcpy((head)->kmmenu, "�ؽ�����"); break;
						}
					}
				}//�޴����� switch��
			case 2:
				printf("<< ������ ������ �޴��� �����ϼ��� >>\n");
				printf("1 .���Ÿ޴�  2. ġŲ�޴�  3. ����Ʈ�޴�  4. �帵ũ�޴�  5. ���Ѿ�ħ�޴�\n");
				printf("���� : ");
				scanf("%d", &i);
				switch (i) {
				case 1:
					printf("���� ���Ÿ޴� ���� : %s\n\n", (head)->bnum);
					printf("������ ���Ÿ޴� ����: ");
					fflush(stdin);
					gets((head)->bnum); goto a;
				case 2:
					printf("���� ġŲ�޴� ���� : %s\n\n", (head)->cnum);
					printf("������ ġŲ�޴� ����: ");
					fflush(stdin);
					gets((head)->cnum); goto a;
				case 3:
					printf("���� ����Ʈ�޴� ���� : %s\n\n", (head)->denum);
					printf("������ ����Ʈ�޴� ����: ");
					fflush(stdin);
					gets((head)->denum); goto a;
				case 4:
					printf("���� �帵ũ�޴� ���� : %s\n\n", (head)->drnum);
					printf("������ �帵ũ�޴� ����: ");
					fflush(stdin);
					gets((head)->drnum); goto a;
				case 5:
					printf("���� ���Ѿ�ħ�޴� ���� : %s\n\n", (head)->kmnum);
					printf("������ ���Ѿ�ħ�޴� ����: ");
					fflush(stdin);
					gets((head)->kmnum); goto a;
				}
			case 3:
				printf("���� ����� : %s\n ", (head)->deal);
				fflush(stdin);
				printf("������ ����� : ");
				gets((head)->deal); goto a;
			case 4:
				printf("������ �����մϴ�."); system("pause"); return;
			}
		a:
			printf("�����Ϸ�\n");
			system("pause"); system("cls");
		}

	}
}
void del(node ** head, char * ornum) {
	node * tmp;
	if (!*head) {
		printf("������  �ֹ� ���� \n"); return;
	}
	if (!(strcmp((*head)->ornum, ornum))) {
		tmp = *head;
		*head = (*head)->link;
		free(tmp);
		printf("�����Ϸ�\n"); return;
	}
	del(&(*head)->link, ornum);
}
void main() {
	node * head = 0;
	int i;
	char name[20];
	while (1) {
		printf("< < < === �Ե����� Ȩ���� === > > >\n\n");
		printf("1. �ֹ� ���\n");
		printf("2. �ֹ� �� �˻�\n");
		printf("3. ����� ���\n");
		printf("4. �ֹ� ����\n");
		printf("5. �Ǹ� �Ϸ�\n");
		printf("6. ��     ��\n");
		printf("��  �� : "); scanf("%d", &i);
		switch (i) {
		case 1:insert(&head); break;
		case 2:printf("�ֹ��� ��ȣ �Է� : "); scanf("%s", name); search(head, name); break;
		case 3:printf("%4s  %4s\n", "�ֹ��� ��ȣ    ", " �����    "); print(head); break;
		case 4:printf("������ �ֹ��� ��ȣ : "); scanf("%s", name); modify(head, name); break;
		case 5:printf("�ֹ��� ��ȣ �Է� : "); scanf("%s", name); del(&head, name); break;
		case 6:return;
		}
		system("pause"); system("cls");
	}
}
