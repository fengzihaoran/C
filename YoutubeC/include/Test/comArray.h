#pragma once
#include <stdio.h>
#include <stdlib.h>

// 结构体定义
struct ComArray {
    int* data;   // 数据数组
    size_t size; // 当前数组大小
    size_t capacity; // 数组容量
};

// 初始化数组
void comArray_init(struct ComArray* comArray, size_t initialCapacity) {
    comArray->data = (int*)malloc(initialCapacity * sizeof(int));
    comArray->size = 0;
    comArray->capacity = initialCapacity;
}

// 添加数据
void comArray_add(struct ComArray* comArray, int value) {
    // 检查是否需要扩容
    if (comArray->size == comArray->capacity) {
        comArray->capacity *= 2; // 可以根据需要调整扩容策略
        comArray->data = (int*)realloc(comArray->data, comArray->capacity * sizeof(int));
        if (comArray->data == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(EXIT_FAILURE);
        }
    }

    // 添加数据到数组末尾
    comArray->data[comArray->size++] = value;
}

// 释放数组内存
void comArray_free(struct ComArray* comArray) {
    free(comArray->data);
    comArray->data = NULL;
    comArray->size = comArray->capacity = 0;
}


