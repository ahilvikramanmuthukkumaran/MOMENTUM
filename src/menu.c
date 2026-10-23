#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<tasks.h>

int main(){
    printf("####### MOMENTUM ########");
     char yes = 'x';
     char choice;


    while(yes == 'x'){
        printf("A --> ADD TASK ||\n V --> VIEW TASK ||\n U --> UPDATE TASK ||\n D --> DELETE TASK ||\n X --> EXIT");

        printf("Enter the choice:");
        scanf(" %c",&choice);

        switch (toupper(choice))
        {
            case 'A':
                /* code */
                //function ADD with task appending
                break;

            case 'V':
                /*code*/
                //function VIEW with task_id verification if not all tasks
                break;

            case 'U':
                /*code*/
                //function UPDATE with task_id verification and task appending
                break;
    
            case 'D':
                /*code*/
                //function DELETE with task_id verification and task deletion
                break;
    
            case 'X':
                /*code*/
                /*may be a basic exit function*/
                //will change the yes to someother char so menu stops when this option is clicked
                break;

            default:
                printf("Please enter a valid input !");
                break;
         }
    }
}