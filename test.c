#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include "slist.h"
////linecode* Listsort(linecode* head, lineconttype x)
////{
////	linecode *newhead = NULL, *cur = head, *fron = NULL, *cur1;
////	//��newhead
////	if (head->cont < x)
////	{
////		newhead = head;
////		while (cur)
////		{
////			if (cur->cont >= x)
////			{
////				head = cur;
////				break;
////			}
////			fron = cur;
////			cur = cur->next;
////		}
////		fron->next = head->next;
////		cur = cur->next;
////		head->next = NULL;
////		cur1 = head;
////		while (cur)
////		{
////			if (cur->cont >= x)
////			{
////				fron->next = cur->next;
////				cur1->next = cur;
////				cur->next = NULL;
////				cur = fron->next;
////				cur1 = cur1->next;
////			}
////			fron = cur;
////			cur = cur->next;
////		}
////		fron->next = head;
////		return newhead;
////	}
////	else
////	{
////		while (cur)
////		{
////			if (cur->cont < x)
////			{
////				newhead = cur;
////				break;
////			}
////			else
////			{
////				fron = cur;
////				cur = cur->next;
////			}
////		}
////		fron->next = newhead->next;
////		cur = cur->next;
////		newhead->next = NULL;
////		cur1 = newhead;
////		while (cur)
////		{
////			if (cur->cont < x)
////			{
////				fron->next = cur->next;
////				cur1->next = cur;
////				cur->next = NULL;
////				cur = fron->next;
////				cur1 = cur1->next;
////			}
////			else
////			{
////				fron = cur;
////				cur = cur->next;
////			}
////		}
////		cur1->next = head;
////		return newhead;
////	}
////}
////����
////linecode* Listsort(linecode* cur, lineconttype x)
////{
////	linecode* lesshead = (linecode*)malloc(sizeof(linecode));
////	linecode* lesstail = (linecode*)malloc(sizeof(linecode));
////	linecode* greathead = (linecode*)malloc(sizeof(linecode));
////	linecode* greattail = (linecode*)malloc(sizeof(linecode));
////	greathead->next = lesshead->next = NULL;
////	lesstail = lesshead;
////	greattail = greathead;
////	while (cur)
////	{
////		if (cur->cont < x)
////		{
////			lesstail->next = cur;
////			lesstail = lesstail->next;
////			cur = cur->next;
////		}
////		else
////		{
////			greattail->next = cur;
////			greattail = greattail->next;
////			cur = cur->next;
////			greattail->next = NULL;
////		}
////	}
////	lesstail->next = greathead->next;
////	linecode* newhead = lesshead->next;
////	free(greathead);
////	free(lesshead);
////	return newhead;
////}
////linecode* ListCommen(linecode* head1, linecode* head2)
////{
////	//������
////	int l1 = 0, l2 = 0;
////	//struct ListNode *head1 = headA, *head2 = headB;
////	linecode* cur1 = head1, *cur2 = head2;
////	while (cur1)
////	{
////		l1++;
////		cur1 = cur1->next;
////	}
////	while (cur2)
////	{
////		l2++;
////		cur2 = cur2->next;
////	}
////	cur1 = head1;
////	cur2 = head2;
////	if (l1 > l2)
////	{
////		int x = l1 - l2, i;
////		for (i = 0; i < x; i++)
////		{
////			cur1 = cur1->next;
////		}
////	}
////	else
////	{
////		int x = l2 - l1, i;
////		for (i = 0; i < x; i++)
////		{
////			cur2 = cur2->next;
////		}
////	}
////	while (cur1)
////	{
////		 if ((cur1 == cur2))
////		{
////			return cur1;
////		}
////		if ((cur1->next == cur2->next))
////		{
////			return cur1->next;
////		}
////		
////		cur1 = cur1->next;
////		cur2 = cur2->next;
////	}
////	return cur1;
////}
////linecode* ListCircle(linecode* head)
////{
////	linecode *fast = head, *slow = head, *meet = NULL;
////	while (fast && fast->next)
////	{
////		fast = fast->next->next;
////		slow = slow->next;
////		if (fast == slow)
////		{
////			break;
////		}
////	}
////	//printf("%d\n", fast->val);
////	meet = fast;
////	while (meet)
////	{
////		if (meet == head)
////		{
////			break;
////		}
////		meet = meet->next;
////		head = head->next;
////	}
////	return meet;
////}
////linecode* Listcopy(linecode* head)
////{
////	linecode* cur = head;
////	while (cur)
////	{
////		linecode* copy = (linecode*)malloc(sizeof(linecode));
////		copy->cont = cur->cont;
////		copy->next = cur->next;
////		cur->next = copy;
////		copy->random = cur->random;
////		cur = copy->next;
////		copy->random = NULL;
////	}
////	cur = head;
////	linecode *back = head->next;
////	while (cur)
////	{
////		if (cur->random)
////		{
////			back->random = cur->random->next;
////		}
////		else
////		{
////			back->random = NULL;
////		}
////		cur = cur->next->next;
////		if(back->next)
////			back = back->next->next;
////	}
////	cur = head;
////	back = head->next;
////	linecode* cur1 = back;
////	while (cur1->next)
////	{
////		cur->next = cur->next->next;
////		cur1->next = cur1->next->next;
////		cur = cur->next;
////		cur1 = cur1->next;
////	}
////	cur->next = NULL;
////	return back;
////}
////void printrandom(linecode* head)
////{
////	while (head)
////	{
////		if (head->random)
////		{
////			printf("%d->", head->random->cont);
////		}
////		else
////		{
////			printf("NULL->");
////		}
////		head = head->next;
////	}
////	printf("NULL\n");
////}
////int main()
////{
////	linecode* s = NULL;
////	linecode* k = NULL;
////	//ͷ��
////	/*slistpushhead(&s, 'm');
////	slistpushhead(&s, 'n');
////	slistpushhead(&s, 'q');
////	slistprint(&s);*/
////	//ͷɾ
////	/*slistpophead(&s);
////	slistpophead(&s);*/
////
////	/*slistprint(&s);*/
////	//β��
////	//slistpushback(&s, 1);
////	//slistpushback(&s, 'b');	
////	//slistpushback(&s, 'c');
////	//slistpushback(&s, 'd');
////	//slistpushback(&s, 'c');
////	/*slistpushback(&s, 2);
////	slistpushback(&s, 4);
////	slistpushback(&s, 5);
////	slistpushback(&s, 3);
////	slistpushback(&s,8);
////	slistpushback(&k, 3);
////	slistpushback(&k, 6);
////	slistpushback(&k, 5);
////	slistpushback(&k, 3);
////	slistpushback(&k, 8);*/
////	s = (linecode*)malloc(sizeof(linecode));
////	k = (linecode*)malloc(sizeof(linecode));
////	linecode* a = (linecode*)malloc(sizeof(linecode));
////	linecode* b = (linecode*)malloc(sizeof(linecode));
////	linecode* c = (linecode*)malloc(sizeof(linecode));
////	linecode* d = (linecode*)malloc(sizeof(linecode));
////	linecode* e = (linecode*)malloc(sizeof(linecode));
////	linecode* f = (linecode*)malloc(sizeof(linecode));
////	/*s->cont = 2;
////	s->next = a;
////	a->cont = 1;
////	a->next = d;
////	d->cont = 6;
////	d->next = e;
////	e->cont = 7;
////	e->next = f;
////	f->cont = 8;
////	f->next = NULL;
////	k->cont = 3;
////	k->next = b;
////	b->cont = 4;
////	b->next = c;
////	c->cont = 5;
////	c->next = d;*/
////	/*s->cont = 1;
////	s->next = NULL;
////	k = s;*/
////	s->cont = 1;
////	s->next = a;
////	s->random = b;
////	a->cont = 2;
////	a->next = b;
////	a->random = c;
////	b->cont = 3;
////	b->next = c;
////	b->random = a;
////	c->cont = 4;
////	c->next = d;
////	c->random = NULL;
////	d->cont = 5;
////	d->next = NULL;
////	d->random = s;
////	slistprint(&s);
////	//slistprint(&k);
////	linecode* m = Listcopy(s);
////	printrandom(s);
////	printrandom(m);
////
////	slistprint(&m);
////	/*linecode* m = ListCircle(s);*/
////	/*slistprint(&m);*/
////	/*linecode* m = Contback(s,k);
////	slistprint
////	//βɾ
////	/*slistpopback(&s);
////	slistpopback(&s);
////	slistprint(&s);*/
////	//�м��
////	//slistpushmid(&s, 'a','b');//��'a'���һ���ַ�
////	//slistpushmid(&s, 'a', 'c');//��'a'���һ���ַ�
////	//slistprint(&s);
////	//�м�ɾ
////	//slistpopmid(&s, 'c');//��'c'�ַ�ɾ��
////	//slistpopmid(&s, 'c');//��'c'�ַ�ɾ��
////
////	/*slistprint(&s);*/
////
////	return 0;
////}
////��������������������������������������������������������
////#include<stdio.h>
////#include<stdlib.h>
////#include<windows.h>
////#include<string.h>
////void Add();
////void Show();
////void save();
////void read();
////void del();
////int search(int sid);
////void update();
////void sortinage();
////char username[20] = "abcd";
////char passwords[20] = "123";
////#define M 10
////void pressAnyKey() {
////	printf("\n=================================\n");
////	printf("\npress any key to continue!!!...\n");
////	printf("\n=================================\n");
////	system("pause");
////}
////typedef struct student
////{
////	int sid;
////	char sname[20];
////	int age;
////	int c;
////	int math;
////}stu;
////stu arr[100];
////int num = 0;
////void menu1()
////{
////	int input, flag = 1;
////	do
////	{
////		system("cls");
////		printf("**********************************************\n");
////		printf("\t\tѧ������ϵͳ��ӭ��\n");
////		printf("\t\t1.���ѧ��\n");
////		printf("\t\t2.ɾ��ѧ��\n");
////		printf("\t\t3.�޸�ѧ����Ϣ\n");
////		printf("\t\t4.��ʾ����ѧ����Ϣ\n");
////		printf("\t\t5.����������\n");
////		printf("\t\t6.�޸ĵ�½����\n");
////		printf("\t\t7.ע��������\n");
////		printf("**********************************************\n");
////		printf("��ѡ��:");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			Add();
////			break;
////		case 2:
////			del();
////			break;
////		case 3:
////			update();
////			break;
////		case 4:
////			Show();
////			break;
////		case 5:
////			sortinage();
////			break;
////		case 6:
////			break;
////		case 7:
////			save();
////			printf("�˳��ɹ��������ѱ���\n");
////			system("pause");
////			flag = 0;
////			break;
////		default:
////			printf("�����������������!\n");
////			break;
////		}
////	} while (flag);
////}
////void menu()
////{
////	printf("�𾴵�%s�û�,��ӭ��¼\n", username);
////	//pressAnyKey();
////	read();
////	printf("¼�����ݳɹ�!\n");
////	system("pause");
////	system("cls");
////	menu1();
////}
////void aboutUs() {
////	printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
////	printf("\tѧ���ɼ�����ϵͳV1.0\n");
////	printf("\t������:zy\n");
////	printf("\t��Ȩ���У����Է�¼...\n");
////	printf("+++++++++++++++++++++++++++++++++++++++++++++++++\n");
////	pressAnyKey();
////}
////int logout() {
////	char ch;
////	int i;
////
////	printf("�ף���ȷ��Ҫ�˳���?(y for yes, no for no):");
////	scanf("%c", &ch);
////	if (ch == 'y') {
////		//���10����...
////		for (i = 0; i<3; i++) {
////			printf("%c", 7);
////			printf("........");
////			Sleep(1000);
////		}
////		printf("\n");
////		return 1;
////	}
////	return 0;
////}
////int login()
////{
////	char uname[20];
////	char uwords[20];
////	int sum = 3;
////	while (sum)
////	{
////		printf("�������û�����");
////		scanf("%s", uname);
////		printf("���������룺");
////		scanf("%s", uwords);
////		if (strcmp(uname, username) == 0 && strcmp(uwords, passwords) == 0)
////		{
////			return 1;
////		}
////		printf("�û���������������������룡\n");
////		sum--;
////	}
////	printf("��½ʧ�ܣ�\n");
////	system("pause");
////	return 0;
////}
////int main(int argc, char *argv[]) {
////	int ch;   //ѡ��
////	do {
////		system("cls");   //���� 
////		printf("**********************************************\n");
////		printf("\t\t ���ϻʼҹ�ѧԺѧ���ɼ�����ϵͳ\n");
////		printf("\t\t �汾:v1.0\n");
////		printf("\t\t 1.��¼\n");
////		printf("\t\t 2.��������\n");
////		printf("\t\t 3.�˳�\n");
////		printf("**********************************************\n");
////		printf("����������ѡ��:(1,2,3):");
////		scanf("%d", &ch);  //  3  �س�    ->   ������ 
////		fflush(stdin);   //��ռ��� ������ 
////		switch (ch) {
////		case 1:
////			if (login())
////			{
////				printf("��¼�ɹ���\n");
////				system("pause");
////				menu();
////			}
////			break;
////		case 2:   aboutUs(); break;
////		case 3:
////			if (logout()) {
////				printf("�˳��ɹ���\n");
////				exit(1);
////			}
////			break;
////		default:
////			printf("\nû�����ѡ���ȷ������...\n");
////			pressAnyKey();
////		}
////	} while (1);
////	pressAnyKey();
////	return 0;
////}
////void Add()
////{
////	int count = 0;
////	char ch;
////	do
////	{
////		count++;
////		printf("�������%d��ѧ������\n", (num + 1));
////		printf("������ѧ��id:");
////		scanf("%d", &arr[num].sid);
////		printf("������ѧ������:");
////		fflush(stdin);
////		scanf("%s", arr[num].sname);
////		printf("������ѧ������:");
////		scanf("%d", &arr[num].age);
////		printf("������ѧ��c�ɼ�:");
////		scanf("%d", &arr[num].c);
////		printf("������ѧ����ѧ�ɼ�:");
////		scanf("%d", &arr[num].math);
////		printf("�Ƿ�Ҫ�ٴμ�¼ѧ������");
////		num++;
////		fflush(stdin);
////		scanf("%c", &ch);
////		if (ch != 'y')
////		{
////			printf("������¼��");
////			printf("���μ�¼��%d��ѧ�����ݣ�����%d������\n", count, num);
////			system("pause");
////			break;
////		}
////
////	} while (1);
////}
////void Show()
////{
////	//	printf("%d\n",arr[3].sid) ;
////	//	system("pause");
////	if (num == 0)
////	{
////		printf("û��ѧ�����ݣ�");
////		system("pause");
////		return;
////	}
////	int max, min, i;
////	double ave = 0;
////	max = arr[0].age;
////	min = arr[0].age;
////	stu ma, mi;
////	printf("id\t����\t����\tc�ɼ�\t��ѧ�ɼ�\n");
////	for (i = 0; i<num; i++)
////	{
////		printf("%d\t%s\t%d\t%d\t%d\n", arr[i].sid, arr[i].sname, arr[i].age, arr[i].c, arr[i].math);
////		if (arr[i].age>max)
////		{
////			max = arr[i].age;
////			ma = arr[i];
////		}
////		if (arr[i].age<min)
////		{
////			min = arr[i].age;
////			mi = arr[i];
////		}
////		ave += arr[i].age;
////	}
////	printf("�������Ϊ��%d,����%s,��С����Ϊ:%d,����%s,ƽ������Ϊ��%.1lf\n", max, ma.sname, min, mi.sname, (1.0)*ave / num);
////	system("pause");
////}
////void save()
////{
////	FILE* pf = fopen("date.txt", "w");
////	if (pf == NULL)
////	{
////		printf("û������ļ�\n");
////		system("pause");
////		return;
////	}
////	fwrite(arr, sizeof(stu), num, pf);
////	fclose(pf);
////}
////void read()
////{
////	FILE* pf = fopen("date.txt", "r");
////	if (pf == NULL)
////	{
////		printf("û������ļ�\n");
////		system("pause");
////		return;
////	}
////	while (fread(&arr[num], sizeof(stu), 1, pf))
////	{
////		num++;
////	}
////	fclose(pf);
////}
////
////void del()
////{
////	system("cls");
////	int sid, i;
////	printf("������Ҫɾ����ѧ��ѧ�ţ�");
////	scanf("%d", &sid);
////	int indix = search(sid);
////	if (indix<0)
////	{
////		printf("�޴�ѧ��ѧ����\n");
////		system("pause");
////		return;
////	}
////	for (i = indix; i<num; i++)
////	{
////		arr[i] = arr[i + 1];
////	}
////	num--;
////	printf("ɾ��%d��ѧ���ɹ�\n", sid);
////	system("pause");
////}
////int search(int sid)
////{
////	int i;
////	stu s;
////	for (i = 0; i<num; i++)
////	{
////		s = arr[i];
////		if (s.sid == sid)
////		{
////			return i;
////		}
////	}
////	return -1;
////}
////void update()
////{
////	system("cls");
////	int sid;
////	printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�");
////	scanf("%d", &sid);
////	int indix = search(sid);
////	if (indix<0)
////	{
////		printf("�޴�ѧ��ѧ����\n");
////		system("pause");
////		return;
////	}
////	stu s = arr[indix];
////	printf("ԭѧ������Ϣ����>>\nid\t����\t����\tc�ɼ�\t��ѧ�ɼ�\n");
////	printf("%d\t%s\t%d\t%d\t%d\n", s.sid, s.sname, s.age, s.c, s.math);
////	printf("�������µ�������");
////	scanf("%s", arr[indix].sname);
////	printf("�������µ����䣺");
////	scanf("%d", &arr[indix].age);
////	printf("�������µ�c�ɼ���");
////	scanf("%d", &arr[indix].c);
////	printf("�������µ���ѧ�ɼ���");
////	scanf("%d", &arr[indix].math);
////	printf("�޸�ѧ��Ϊ%d��ѧ����Ϣ�ɹ���\n", sid);
////	system("pause");
////}
////void sortinage()
////{
////	int i, j;
////	for (i = 0; i<num - 1; i++)
////	{
////		for (j = 0; j<num - 1 - i; j++)
////		{
////			if (arr[j].age>arr[j + 1].age)
////			{
////				stu tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////	printf("������������ɣ�\n");
////	system("pause");
////}
////void hidden_input(char* pwd) {
////	char input_char;
////	int index = 0;
////	fflush(stdin);//������뻺��
////				  //������ʾ*����֧���˸�  
////	while ((input_char = getch()) != '\r') {//���з� 
////		if (input_char == '\b') {//�˸�� 
////			if (index < 0)
////				continue;
////			if (index > 0) {
////				putchar('\b');
////				putchar(' ');
////				putchar('\b');
////				index--;
////			}
////		}
////		else {
////			printf("*");
////			pwd[index++] = input_char;
////		}
////	}
////	pwd[index] = '\0';//������ 
////}
////int main()
////{
////	char pwd[20];
////	hidden_input(pwd);
////	printf("%s\n", pwd);
////	return 0;
////}
//
////#include<time.h>
////int main()
////{
////	srand((unsigned int)time(NULL));
////	int x = rand() % 10;
////	int y = rand() % 10;
////	int z = rand() % 10;
////	int num = x * 100 + y * 10 + z;
////	printf("%d\n",num);
////	return 0;
////}
//#include<conio.h>
//#include <stdio.h>
//#include <stdlib.h>
//#include<windows.h>
//#include<time.h>
//#include<string.h>
//#define MAX 1000
//typedef struct user {
//	int sid;
//	char name[20];
//	char type[20];
//	double money;
//}user;
//user users[MAX];
//int num = 0;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int logout();
//int login();
//void pressanykey();
//void aboutus();
//void read1();
//void hidden_input(char* pwd);
//void menu();
//void add();
//void show();
//void save();
//void read();
//void del();
//int findStudent(int sid);
//char username[20];
//char passwords[20];
//int main(int argc, char *argv[]) {
//	int i;
//	do {
//		system("cls");
//		printf("***********************************************************\n");
//		printf("\t\t\t΢���û�����ϵͳ\n");
//		printf("\t\t\t1.��¼\n");
//		printf("\t\t\t2.��������\n");
//		printf("\t\t\t3.�˳�\n");
//		printf("***********************************************************\n");
//		printf("������ѡ��:(1,2,3)\n");
//		scanf("%d", &i);
//		fflush(stdin);
//		switch (i) {
//		case 1:
//			read1();
//			if (login())
//			{
//				read();
//				printf("�����Ѽ��أ�\n");
//				system("pause");
//				menu();
//			}
//			else
//			{
//				printf("���δ��������µ�¼��\n");
//			}
//			break;
//		case 2:
//			aboutus();
//			break;
//		case 3:
//			if (logout() == 1) {
//				printf("�˳��ɹ���\n");
//				system("pause");
//				exit(1);
//			}
//			printf("ȡ���˳���\n");
//			system("pause");
//			break;
//		}
//	} while (1);
//
//	system("pause");
//	pressanykey();
//	return 0;
//}
//int logout() {
//	char ch;
//	int i;
//	printf("��,�����Ҫ�˳���?(y for yes n for no)\n");
//	scanf("%c", &ch);
//	if (ch == 'y') {
//		for (i = 0; i<3; i++) {
//			printf("%c", 7);
//			printf(".....");
//			Sleep(1000);
//		}
//		printf("\n");
//		return 1;
//	}
//	return 0;
//}
//void pressanykey() {
//	printf("\n=============\n");
//	printf("\npress any key to continue\n");
//	printf("\n=============\n");
//	getch();//�Ӽ����������һ���� 
//}
//
//void aboutus() {
//	printf("***********************************************************\n");
//	printf("\t\t\t����һ��С��Ŀ:\n");
//	printf("\t\t\t�����ܴ�,��ŷ�ܣ���Թ�ͬ����\n");
//	printf("\t\t\t���ǹ��������ߵ����������һ������\n");
//	printf("***********************************************************\n");
//	pressanykey();
//}
//
//int login()
//{
//	int i = 3;
//	while (i)
//	{
//		int pro;
//		char uname[20];
//		char uword[20];
//		srand((unsigned int)time(NULL));
//		int x = (rand() % 9) + 1;
//		int y = rand() % 10;
//		int z = rand() % 10;
//		int num = x * 100 + y * 10 + z;
//		printf("�������û�����");
//		scanf("%s", uname);
//		fflush(stdin);
//		printf("���������룺");
//		hidden_input(uword);
//		printf("\n");
//		printf("��������֤��(%d):", num);
//		scanf("%d", &pro);
//		if (strcmp(uname, username) == 0 && strcmp(uword, passwords) == 0 && pro == num)
//		{
//			printf("��¼�ɹ���\n");
//			system("pause");
//			return 1;
//		}
//		if (pro != num)
//		{
//			printf("��֤��������������룺\n");
//			continue;
//		}
//		printf("�û���������������������룺\n");
//		i--;
//	}
//	return 0;
//}
//void read1()
//{
//	FILE* pf = fopen("loge.txt", "r");
//	fread(username, 20, 1, pf);
//	fread(passwords, 20, 1, pf);
//	fclose(pf);
//}
//
//void hidden_input(char* pwd) {
//	char input_char;
//	int index = 0;
//	fflush(stdin);//������뻺��
//				  //������ʾ*����֧���˸�  
//	while ((input_char = getch()) != '\r') {//���з� 
//		if (input_char == '\b') {//�˸�� 
//			if (index < 0)
//				continue;
//			if (index > 0) {
//				putchar('\b');
//				putchar(' ');
//				putchar('\b');
//				index--;
//			}
//		}
//		else {
//			printf("*");
//			pwd[index++] = input_char;
//		}
//	}
//	pwd[index] = '\0';//������ 
//}
//void menu() {
//	//	struct tm *ptr;
//	//	int choice,flag=1;
//	//	time_t  t=time(0);
//	//	char str[80];
//	//	ptr=localtime(&t);
//	int choice, flag = 1;
//	do {
//		system("cls");
//		//		strftime(str,sizeof(str),"%Y/%m%d  %X %A",ptr);
//		//		printf("��ӭ����%s,�����ǣ�%s \n",username,str);
//		printf("**********************************************\n");
//		printf("\t\t΢���û����ѹ���ϵͳ��ӭ��\n");
//		printf("\t\t1.����û�\n");
//		printf("\t\t2.ɾ���û�\n");
//		printf("\t\t3.�鿴�����û���Ϣ\n");
//		printf("\t\t4.�޸��û���Ϣ\n");
//		printf("\t\t5.�������ܽ������\n");
//		printf("\t\t6.�޸��û���������\n");
//		printf("\t\t7.ע��������\n");
//		printf("**********************************************\n");
//		printf("���������ѡ��(1,2,3,4,5,6,7):\n");
//		scanf("%d", &choice);
//		fflush(stdin);
//		switch (choice) {
//		case 1:add();
//			break;
//		case 2:
//			del();
//			break;
//		case 3:
//			show();
//			break;
//		case 4:
//			break;
//		case 5:
//			break;
//		case 6:
//			break;
//		case 7:
//			save();
//			printf("�˳��ɹ��������ѱ��棡\n");
//			system("pause");
//			flag = 0;
//			break;
//		default:
//			printf("û�����ѡ���ȷ�Ϻ���������.\n");
//		}
//	} while (flag);
//}
//
//void add() {
//	char ch;
//	int count = 0;
//	do {
//		count++;
//		printf("�������%d���û����������:\n", (num + 1));
//		printf("�������û���id:");
//		scanf("%d", &users[num].sid);
//		printf("�����û�����:");
//		scanf("%s", users[num].name);
//		fflush(stdin);
//		printf("��������(�Ҿӣ��Է�������):");
//		scanf("%s", users[num].type);
//		printf("������:");
//		fflush(stdin);
//		scanf("%lf", &users[num].money);
//		num++;
//		printf("����������һ���û������������(y/n)\n");
//		fflush(stdin);
//		scanf("%c", &ch);
//		if (ch != 'y')
//		{
//			printf("\n���ѧ����Ϣ����\n");
//			printf("��������%d��ѧ�����ܹ���%d��ѧ��\n", count, num);
//			system("pause");
//			break;
//		}
//	} while (1);
//}
//
//void show() {
//	system("cls");
//	int i;
//	double maxMoney, minMoney;
//	double sumMoney = 0;//������ 
//	struct user usermaxMoney;
//	if (num == 0) {
//		printf("ϵͳ�л�û��������...\n");
//		return;
//	}
//	maxMoney = users[0].money;
//	minMoney = users[0].money;
//	printf("΢���û�����������£�\n");
//	printf("%-8s\t%-8s\t%-8s\t%-8s\n", "�û�id", "����", "�������", "���ѽ��");
//	for (i = 0; i<num; i++) {
//		struct user  s = users[i];
//		printf("%-8d\t%-8s\t%-8s\t%-8.2lf\n", s.sid, s.name, s.type, s.money);
//		sumMoney += s.money;
//		if (s.money>maxMoney) {
//			maxMoney = s.money;
//			usermaxMoney = s;
//		}
//		if (s.money<minMoney) {
//			minMoney = s.money;
//		}
//	}
//	printf("ͳ�����£�\n");
//	printf("΢���û�ƽ������Ϊ��%.1lf,�������Ϊ��%.2lf,�������Ϊ��%.2lf,������ߵ��ǣ�%s\n", sumMoney / num, maxMoney, minMoney, usermaxMoney.name);
//	system("pause");
//}
//
//void save() {
//	FILE* fp = fopen("date2.txt", "w");
//	fwrite(users, sizeof(struct user), num, fp);
//	fclose(fp);
//}
//
//void read() {
//
//	FILE *fp = fopen("date2.txt", "r");
//	if (fp == NULL) {
//		printf("û������ļ�...\n");
//		getch();
//		return;
//	}
//	while (fread(&users[num], sizeof(struct user), 1, fp)) {
//		num++;
//	}
//	fclose(fp);
//}
//
//void del() {
//	system("cls");
//	int i;
//	int sid;
//	int index;
//	printf("������Ҫɾ��������id��");
//	scanf("%d", sid);
//	index = findStudent(sid);
//	if (index<0) {
//		printf("���޴�ѧ��%dѧ�����޷�ɾ��...\n", sid);
//		system("pause");
//		return;
//	}
//	//ѭ�����飬��һ������ǰһ�� 
//	for (i = index; i<num; i++)
//	{
//		users[i] = users[i + 1];
//	}
//	num--;
//	printf("ɾ��%dѧ���û��ɹ�\n", sid);
//	system("pause");
//}
//int findStudent(int sid)
//{
//	int i;
//	for (i = 0; i<num; i++)
//	{
//		if (users[i].sid == sid)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include<windows.h>
//#include<time.h>
//#include<conio.h>
//#include<string.h>
//#define MAX 1000
//#include<mmsystem.h>
//#pragma comment(lib,"Winmm.lib")
//HANDLE hout;
//color(int c)
//{
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
//}
//
//typedef struct user {
//	int sid;
//	char name[20];
//	char type[20];
//	double money;
//}user;
//user users[MAX];
//int num = 0;
///* run this program using the console pauser or add your own getch, system("pause") or input loop */
//int logout();
//int login();
//void pressanykey();
//void aboutus();
//void read1();
//void hidden_input(char* pwd);
//void menu();
//void add();
//void show();
//void save();
//void read();
//void del();
//void update();
//void sortinmoney();
//void Modify();
//int findStudent(int sid);
//char username[20];
//char passwords[20];
//int main() {
//	int i;
//	PlaySound(TEXT("1.wav"), NULL, SND_FILENAME | SND_ASYNC | SND_LOOP);
//	do {
//		system("cls");
//		printf("***********************************************************\n");
//		printf("\t\t\t΢���û�����ϵͳ\n");
//		printf("\t\t\t1.��¼\n");
//		printf("\t\t\t2.��������\n");
//		printf("\t\t\t3.�˳�\n");
//		printf("***********************************************************\n");
//		printf("������ѡ��:(1,2,3)\n");
//		scanf("%d", &i);
//		fflush(stdin);
//		switch (i) {
//		case 1:
//			read1();
//			if (login())
//			{
//				read();
//				printf("��¼�ɹ���\n");
//				printf("�����Ѽ��أ�\n");
//				system("pause");
//				menu();
//			}
//			else
//			{
//				color(4);
//				printf("���δ��������µ�¼��\n");
//				color(7);
//				system("pause");
//			}
//			break;
//		case 2:
//			aboutus();
//			break;
//		case 3:
//			if (logout() == 1) {
//				printf("�˳��ɹ���\n");
//				PlaySound(NULL, NULL, SND_FILENAME);
//				system("pause");
//				exit(1);
//			}
//			printf("ȡ���˳���\n");
//			system("pause");
//			break;
//		}
//	} while (1);
//
//	system("pause");
//	pressanykey();
//	return 0;
//}
//int logout() {
//	char ch;
//	int i;
//	color(4);
//	printf("��,�����Ҫ�˳���?(y for yes n for no)\n");
//	color(7);
//	fflush(stdin);
//	scanf("%c", &ch);
//	if (ch == 'y') {
//		for (i = 0; i<3; i++) {
//			printf("%c", 7);
//			printf(".....");
//			Sleep(1000);
//		}
//		printf("\n");
//		return 1;
//	}
//	return 0;
//}
//void pressanykey() {
//	printf("\n=============\n");
//	printf("\npress any key to continue\n");
//	printf("\n=============\n");
//	_getch();//�Ӽ����������һ���� 
//}
//
//void aboutus() {
//	printf("***********************************************************\n");
//	printf("\t\t\t����һ��С��Ŀ:\n");
//	printf("\t\t\t�����ܴ�,��ŷ�ܣ���Թ�ͬ����\n");
//	printf("\t\t\t���ǹ��������ߵ����������һ������\n");
//	printf("***********************************************************\n");
//	pressanykey();
//}
//
//int login()
//{
//	int i = 3;
//	while (i)
//	{
//		int pro;
//		char uname[20];
//		char uword[20];
//		srand((unsigned int)time(NULL));
//		int x = (rand() % 9) + 1;
//		int y = rand() % 10;
//		int z = rand() % 10;
//		int num = x * 100 + y * 10 + z;
//		fflush(stdin);
//		printf("�������û�����");
//		scanf("%s", uname);
//		fflush(stdin);
//		printf("���������룺");
//		hidden_input(uword);
//		printf("\n");
//		printf("��������֤��(%d):", num);
//		scanf("%d", &pro);
//		if (strcmp(uname, username) == 0 && strcmp(uword, passwords) == 0 && pro == num)
//		{
//			return 1;
//		}
//		if (pro != num)
//		{
//			color(4);
//			printf("��֤��������������룺\n");
//			color(7);
//			i--;
//			continue;
//		}
//		color(4);
//		printf("�û���������������������룺\n");
//		color(7);
//		i--;
//	}
//	return 0;
//}
//void read1()
//{
//	FILE* pf = fopen("loge.txt", "r");
//	fread(username, 20, 1, pf);
//	fread(passwords, 20, 1, pf);
//	fclose(pf);
//}
//
//void hidden_input(char* pwd) {
//	char input_char;
//	int index = 0;
//	fflush(stdin);//������뻺��
//				  //������ʾ*����֧���˸�  
//	while ((input_char = _getch()) != '\r') {//���з� 
//		if (input_char == '\b') {//�˸�� 
//			if (index < 0)
//				continue;
//			if (index > 0) {
//				putchar('\b');
//				putchar(' ');
//				putchar('\b');
//				index--;
//			}
//		}
//		else {
//			printf("*");
//			pwd[index++] = input_char;
//		}
//	}
//	pwd[index] = '\0';//������ 
//}
//void menu() {
//	//	struct tm *ptr;
//	//	int choice,flag=1;
//	//	time_t  t=time(0);
//	//	char str[80];
//	//	ptr=localtime(&t);
//	int choice, flag = 1;
//	do {
//		system("cls");
//		//		strftime(str,sizeof(str),"%Y/%m%d  %X %A",ptr);
//		//		printf("��ӭ����%s,�����ǣ�%s \n",username,str);
//		printf("**********************************************\n");
//		printf("\t\t΢���û����ѹ���ϵͳ��ӭ��\n");
//		printf("\t\t1.����û�\n");
//		printf("\t\t2.ɾ���û�\n");
//		printf("\t\t3.�鿴�����û���Ϣ\n");
//		printf("\t\t4.�޸��û���Ϣ\n");
//		printf("\t\t5.�������ܽ������\n");
//		printf("\t\t6.�޸��û���������\n");
//		printf("\t\t7.ע��������\n");
//		printf("**********************************************\n");
//		printf("���������ѡ��(1,2,3,4,5,6,7):\n");
//		scanf("%d", &choice);
//		fflush(stdin);
//		switch (choice) {
//		case 1:add();
//			break;
//		case 2:
//			del();
//			break;
//		case 3:
//			show();
//			break;
//		case 4:
//			update();
//			break;
//		case 5:
//			sortinmoney();
//			printf("����ɹ���\n");
//			system("pause");
//			break;
//		case 6:
//			if (login())
//			{
//				printf("��֤�û���Ϣ�ɹ���\n");
//				Modify();
//				printf("�޸��û���������ɹ��������µ�¼��\n");
//				system("pause");
//				flag = 0;
//			}
//			break;
//		case 7:
//			save();
//			printf("�˳��ɹ��������ѱ��棡\n");
//			system("pause");
//			flag = 0;
//			break;
//		default:
//			printf("û�����ѡ���ȷ�Ϻ���������.\n");
//		}
//	} while (flag);
//}
//
//void add() {
//	char ch;
//	int count = 0;
//	do {
//		count++;
//		printf("�������%d���û����������:\n", (num + 1));
//		printf("�������û���id:");
//		scanf("%d", &users[num].sid);
//		printf("�����û�����:");
//		scanf("%s", users[num].name);
//		fflush(stdin);
//		printf("��������(�Ҿӣ��Է�������):");
//		scanf("%s", users[num].type);
//		printf("������:");
//		fflush(stdin);
//		scanf("%lf", &users[num].money);
//		num++;
//		printf("����������һ���û������������(y/n)\n");
//		fflush(stdin);
//		scanf("%c", &ch);
//		if (ch != 'y')
//		{
//			printf("\n���ѧ����Ϣ����\n");
//			printf("��������%d��ѧ�����ܹ���%d��ѧ��\n", count, num);
//			system("pause");
//			break;
//		}
//	} while (1);
//}
//
//void show() {
//	system("cls");
//	int i;
//	double maxMoney, minMoney;
//	double sumMoney = 0;//������ 
//	struct user usermaxMoney = users[0];
//	if (num == 0) {
//		printf("ϵͳ�л�û��������...\n");
//		return;
//	}
//	maxMoney = users[0].money;
//	minMoney = users[0].money;
//	printf("΢���û�����������£�\n");
//	printf("%-8s\t%-8s\t%-8s\t%-8s\n", "�û�id", "����", "�������", "���ѽ��");
//	for (i = 0; i<num; i++) {
//		struct user  s = users[i];
//		printf("%-8d\t%-8s\t%-8s\t%-8.2lf\n", s.sid, s.name, s.type, s.money);
//		sumMoney += s.money;
//		if (s.money>maxMoney) {
//			maxMoney = s.money;
//			usermaxMoney = s;
//		}
//		if (s.money<minMoney) {
//			minMoney = s.money;
//		}
//	}
//	printf("ͳ�����£�\n");
//	printf("΢���û�ƽ������Ϊ��%.1lf,�������Ϊ��%.2lf,�������Ϊ��%.2lf,������ߵ��ǣ�%s\n", sumMoney / num, maxMoney, minMoney, usermaxMoney.name);
//	system("pause");
//}
//
//void save() {
//	FILE* fp = fopen("date2.txt", "w");
//	fwrite(users, sizeof(struct user), num, fp);
//	fclose(fp);
//	fp = NULL;
//}
//
//void read() {
//
//	FILE *fp = fopen("date2.txt", "r");
//	if (fp == NULL) {
//		printf("û������ļ�...\n");
//		_getch();
//		return;
//	}
//	while (fread(&users[num], sizeof(struct user), 1, fp)) {
//		num++;
//	}
//	fclose(fp);
//	fp = NULL;
//}
//
//void del() {
//	system("cls");
//	int i;
//	int sid;
//	int index;
//	printf("������Ҫɾ����������id��");
//	scanf("%d", &sid);
//	index = findStudent(sid);
//	if (index<0) {
//		printf("���޴�ѧ��%d�û����޷�ɾ��...\n", sid);
//		system("pause");
//		return;
//	}
//	//ѭ�����飬��һ������ǰһ�� 
//	for (i = index; i<num - 1; i++)
//	{
//		users[i] = users[i + 1];
//	}
//	num--;
//	printf("ɾ��%dѧ���û��ɹ�\n", sid);
//	system("pause");
//}
//int findStudent(int sid)
//{
//	int i;
//	for (i = 0; i<num; i++)
//	{
//		if (users[i].sid == sid)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//
//void update()
//{
//	system("cls");
//	int sid;
//	int index;
//	printf("������Ҫ�޸ĵ�������id��");
//	scanf("%d", &sid);
//	index = findStudent(sid);
//	if (index<0) {
//		printf("���޴�ѧ��%d�û����޷��޸�...\n", sid);
//		system("pause");
//		return;
//	}
//	printf("ԭ��������Ϣ���£�\n");
//	printf("%-8s\t%-8s\t%-8s\t%-8s\n", "�û�id", "����", "�������", "���ѽ��");
//	printf("%-8d\t%-8s\t%-8s\t%-8.2lf\n", users[index].sid, users[index].name, users[index].type, users[index].money);
//	printf("�������û�����:");
//	scanf("%s", users[index].name);
//	fflush(stdin);
//	printf("�µ���������(�Ҿӣ��Է�������):");
//	scanf("%s", users[index].type);
//	printf("�����µĽ��:");
//	fflush(stdin);
//	scanf("%lf", &users[index].money);
//	printf("�޸�%dѧ���û��ɹ�\n", sid);
//	system("pause");
//}
//
//void sortinmoney()
//{
//	int i, j;
//	for (i = 0; i<num - 1; i++)
//	{
//		for (j = 0; j<num - 1 - i; j++)
//		{
//			if (users[j].money>users[j + 1].money)
//			{
//				user tmp = users[j];
//				users[j] = users[j + 1];
//				users[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//void Modify()
//{
//	FILE* pf = fopen("loge.txt", "w");
//	char uname[20];
//	char uword[20];
//	printf("�������µ��û�����");
//	scanf("%s", uname);
//	printf("�������µ����룺");
//	scanf("%s", uword);
//	fwrite(uname, 20, 1, pf);
//	fwrite(uword, 20, 1, pf);
//	fclose(pf);
//	pf = NULL;
//}


