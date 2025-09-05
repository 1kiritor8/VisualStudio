#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//#define N 1000
//typedef int SLDataType;

////��̬˳���
//typedef struct SeqList {
//	SLDataType a[N];
//	int size;//��ʾ�����д洢�˶��ٸ�����
//
//} SL;
//
////�ӿں���--����������STL
////��ʼ��
//void SeqListInit(SL* ps);
////��̬�ص㣺������˾Ͳ��ò���	ȱ�㣺�����Ŀռ�����أ��������ȷ��
////N��С�˲����ã�N�������˷�
////β��
//void SeqListPushBack(SL* ps, SLDataType x);
////βɾ
//void SeqListPopBack(SL* ps);
////ͷ��
//void SeqListPushFront(SL* ps,SLDataType x);
////ͷɾ
//void SeqListPopFront(SL* ps);


typedef int SLDataType;


//��̬˳���
typedef struct SeqList {
	SLDataType* a;
	int size;	 //��ʾ�����д洢�˶��ٸ�����
	int capacity;//����ʵ���ܴ����ݵĿռ������Ƕ��
} SL;

//��ӡ
void SeqListPrint(SL* ps);
//��ʼ��
void SeqListInit(SL* ps);
//��������������Ƿ�����
void SeqListCheckCapacity(SL* ps);
//����
void SeqListDestory(SL* ps);
//β��
void SeqListPushBack(SL* ps, SLDataType x);
//βɾ
void SeqListPopBack(SL* ps);
//ͷ��
void SeqListPushFront(SL* ps, SLDataType x);
//ͷɾ
void SeqListPopFront(SL* ps);
//�������ݣ��ҵ��˷����±�û���ҵ�����-1
int SeqListFind(SL* ps, SLDataType x);
//���ض�λ�ò�������
void SeqListInsert(SL* ps, int pos, SLDataType x);
//���ض�λ��ɾ������
void SeqListErase(SL* ps, int pos);