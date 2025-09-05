#include"SeqList.h"


//��ӡ
void SeqListPrint(SL* ps) {
	for (int i = 0; i < ps->size; ++i) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//��ʼ��
void SeqListInit(SL* ps) {
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

//��������������Ƿ�����
void SeqListCheckCapacity(SL* ps) {
	//���û�пռ���߿ռ䲻����ô���Ǿ�����
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

//����
void SeqListDestory(SL* ps) {
	free(ps->a);
	ps->a == NULL;
	ps->size = 0;
	ps->capacity = 0;
}

//β��
void SeqListPushBack(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//βɾ
void SeqListPopBack(SL* ps) {
	//����Ĵ���ʽ
	//if (ps->size > 0) {
	//	//ps->a[ps->size - 1] = 0;
	//	ps->size--;
	//}

	//�����Ĵ���ʽ
	assert(ps->size > 0);
	ps->size--;
}
//ͷ��
void SeqListPushFront(SL* ps, SLDataType x) {
	SeqListCheckCapacity(ps);
	//Ų������
	int end = ps->size - 1;
	while (end >= 0) {
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[0] = x;
	ps->size++;
}
//ͷɾ
void SeqListPopFront(SL* ps) {
	assert(ps->size > 0);

	int begin = 1;
	//Ų������
	while (begin < ps->size) {
		ps->a[begin - 1] = ps->a[begin];
		++begin;
	}

	ps->size--;

}

//�������ݣ��ҵ��˷����±�û���ҵ�����-1
int SeqListFind(SL* ps, SLDataType x) {
	assert(ps->size >= 0);



}

//���ض�λ�ò�������
void SeqListInsert(SL* ps, int pos, SLDataType x) {

}

//���ض�λ��ɾ������
void SeqListErase(SL* ps, int pos) {

}