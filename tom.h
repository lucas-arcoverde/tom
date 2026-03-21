#define MAX_TASKS       100
#define MAX_TITLE_LEN   100
#define MAX_DESC_LEN    100
#define MAX_NAME_LEN    100

typedef struct {
    char title[MAX_TITLE_LEN];
    char desc[MAX_DESC_LEN];
} Task;

typedef struct {
    char name[MAX_NAME_LEN];
    char desc[MAX_DESC_LEN];
} ToDoList;

