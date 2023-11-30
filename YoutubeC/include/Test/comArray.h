#pragma once
#include <stdio.h>
#include <stdlib.h>

// �ṹ�嶨��
struct ComArray {
    int* data;   // ��������
    size_t size; // ��ǰ�����С
    size_t capacity; // ��������
};

// ��ʼ������
void comArray_init(struct ComArray* comArray, size_t initialCapacity) {
    comArray->data = (int*)malloc(initialCapacity * sizeof(int));
    comArray->size = 0;
    comArray->capacity = initialCapacity;
}

// �������
void comArray_add(struct ComArray* comArray, int value) {
    // ����Ƿ���Ҫ����
    if (comArray->size == comArray->capacity) {
        comArray->capacity *= 2; // ���Ը�����Ҫ�������ݲ���
        comArray->data = (int*)realloc(comArray->data, comArray->capacity * sizeof(int));
        if (comArray->data == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
    }

    // ������ݵ�����ĩβ
    comArray->data[comArray->size++] = value;
}

// �ͷ������ڴ�
void comArray_free(struct ComArray* comArray) {
    free(comArray->data);
    comArray->data = NULL;
    comArray->size = comArray->capacity = 0;
}


