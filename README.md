## Introduction
- A basic productivity tool that is built using the C language for improving the productivity.

## Project status 
- Initial structure written for menu 
- Functions written for cases 
- Functions (add_task) with automatic task_id for each task_desc
- tasks data file stored in the data directory


## Project update
- replaced scanf with fgets(task.task_desc, sizeof(task.task_desc) ,stdin)  for better input management 
- added task_desc input and automatic task_id for every new task_desc
- the tasks file formatted using fprint(fp, "[%d]  ||  s", task.task_id, task.task_desc)