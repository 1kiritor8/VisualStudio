#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//#define N 1000
//typedef int SLDataType;

////静态顺序表
//typedef struct SeqList {
//	SLDataType a[N];
//	int size;//表示数组中存储了多少个数据
//
//} SL;
//
////接口函数--命名风格跟着STL
////初始化
//void SeqListInit(SL* ps);
////静态特点：如果满了就不让插入	缺点：给多大的空间合适呢？这个很难确定
////N给小了不够用，N给大了浪费
////尾插
//void SeqListPushBack(SL* ps, SLDataType x);
////尾删
//void SeqListPopBack(SL* ps);
////头插
//void SeqListPushFront(SL* ps,SLDataType x);
////头删
//void SeqListPopFront(SL* ps);


typedef int SLDataType;


//动态顺序表
typedef struct SeqList {
	SLDataType* a;
	int size;	 //表示数组中存储了多少个数据
	int capacity;//数组实际能存数据的空间容量是多大
} SL;

//打印
void SeqListPrint(SL* ps);
//初始化
void SeqListInit(SL* ps);
//检查容量并决定是否扩容
void SeqListCheckCapacity(SL* ps);
//销毁
void SeqListDestory(SL* ps);
//尾插
void SeqListPushBack(SL* ps, SLDataType x);
//尾删
void SeqListPopBack(SL* ps);
//头插
void SeqListPushFront(SL* ps, SLDataType x);
//头删
void SeqListPopFront(SL* ps);
//查找数据，找到了返回下表，没有找到返回-1
int SeqListFind(SL* ps, SLDataType x);
//在特定位置插入数据
void SeqListInsert(SL* ps, int pos, SLDataType x);
//在特定位置删除数据
void SeqListErase(SL* ps, int pos);