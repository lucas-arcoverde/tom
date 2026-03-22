#include <stdlib.h>

#ifndef TOM_H
#define TOM_H

#define MAX_TASKS           100
#define MAX_TITLE_LEN       100
#define MAX_DESC_LEN        100
#define MAX_NAME_LEN        100

typedef struct {
    char title[MAX_TITLE_LEN];
    char desc[MAX_DESC_LEN];
} Task;

typedef struct {
    char name[MAX_NAME_LEN];
    char desc[MAX_DESC_LEN];
} ToDoList;

#define GET_ARRAY_LEN(x)    sizeof(x) / sizeof((x)[0])

void clear_screen();
void save_data();
void load_data();
void display_help_message();
void display_program_version();

#endif
