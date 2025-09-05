#include"SeqList.h"


//打印
void SeqListPrint(SL* ps) {
	for (int i = 0; i < ps->size; ++i) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//初始化
void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//检查容量并决定是否扩容
void SeqListCheckCapacity(SL* ps) {
	//如果没有空间或者空间不够那么我们就扩容
	if (ps->size == ps->capacity) {
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL) {
			printf("realloc fail\n");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newcapacity;

	}
}

//销毁
void SeqListDestory(SL* ps) {
	free(ps->a);
	ps->a == NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//尾插
void SeqListPushBack(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//尾删
void SeqListPopBack(SL* ps) {
	//温柔的处理方式
	//if (ps->size > 0) {
	//	//ps->a[ps->size - 1] = 0;
	//	ps->size--;
	//}

	//暴力的处理方式
	assert(ps->size > 0);
	ps->size--;
}
//头插
void SeqListPushFront(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[0] = x;
	ps->size++;
}
//头删
void SeqListPopFront(SL* ps) {
	assert(ps->size > 0);

	int begin = 1;
	//挪动数据
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}

	ps->size--;

}

//查找数据，找到了返回下表，没有找到返回-1
int SeqListFind(SL* ps, SLDataType x) {
	assert(ps->size >= 0);



}

//在特定位置插入数据
void SeqListInsert(SL* ps, int pos, SLDataType x) {

}

//在特定位置删除数据
void SeqListErase(SL* ps, int pos) {

}