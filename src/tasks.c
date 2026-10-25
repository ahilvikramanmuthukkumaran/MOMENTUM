#include "tasks.h"
#include <stdio.h>

void add_task(void){

    //variables
    int highest_id = 0;
    char line[100];
    
    
    
    //file_pointer declaration
    FILE * fp;

    //struct variables
    struct addTask task;

    //reading the file for id's

    fp = fopen("data/tasks.txt", "r");
     

    //if fp not null open the file
    if (fp != NULL){

        //read all the task_id
        while(fgets(line,sizeof(line), fp) !=  NULL){

            //extracting task id
            sscanf(line, "[%d]", &task.task_id);

            //compare the task_id with highest_id
            if(task.task_id>highest_id){
                highest_id = task.task_id;//assing task_id
            }    
        }
       fclose(fp);//close the file   
    }
    
    task.task_id = highest_id + 1; //id updation
    
    
     
    
    
    

    //opening file and appending task
    
    fp = fopen("data/tasks.txt","a");

    //null check before using file
    fp == NULL;

    //user input
    printf("Enter the task description:");
    fgets(task.task_desc, sizeof(task.task_desc), stdin);

    //puts the task_desc into the file
    fprintf(fp, "[%d]  ||  %s", task.task_id, task.task_desc);

    
    
    fclose(fp); //closes the file
    
}