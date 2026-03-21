#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TITLE_LEN 100
#define MAX_DESC_LEN 100

typedef struct {
    char title[MAX_TITLE_LEN];
    char desc[MAX_DESC_LEN];
} Task;

Task todo_list[MAX_TASKS];
