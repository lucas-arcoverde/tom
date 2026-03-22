#ifndef TOM_H
#define TOM_H

#include <stddef.h>

#define MAX_TASKS      100
#define MAX_TITLE_LEN  100
#define MAX_DESC_LEN   100
#define MAX_NAME_LEN   100

// TASK STRUCT
typedef struct {
    char title[MAX_TITLE_LEN];
    char desc[MAX_DESC_LEN];   // description
} Task;

// TODO LIST STRUCT
typedef struct {
    char name[MAX_NAME_LEN];
    char desc[MAX_DESC_LEN];   // description
    Task tasks[MAX_TASKS];
    int task_count;
} ToDoList;

#define GET_ARRAY_LEN(x) (sizeof(x) / sizeof((x)[0]))

// UTILITY FUNCTIONS
void clear_screen(void);
void save_data(void);
void load_data(void);
void display_help_message(void);
void display_program_version(void);

// TODO LIST OPERATIONS
void create_todo_list(const char *name, const char *desc);
void view_todo_lists(void);
void edit_todo_list(const char *name);
void delete_todo_list(const char *name);

// TASK OPERATIONS
void add_task_to_list(const char *list_name, const char *title, const char *desc);
void view_tasks(const char *list_name);
void edit_task(const char *list_name, int task_index);
void delete_task(const char *list_name, int task_index);
void complete_task(const char *list_name, int task_index);

#endif
