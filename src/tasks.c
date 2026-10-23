#include "tasks.h"
#include <stdio.h>

void add_task(void){

    //struct variables
    struct addTask task;


    //read the task description
    printf("Enter the task description:");
    fgets(task.task_desc, sizeof(task.task_desc), stdin);

    //testing
    printf("input: %s\n",task.task_desc);
   
    
}