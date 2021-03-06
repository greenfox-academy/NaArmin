#ifndef TASKSLIST_H
#define TASKSLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "Task.h"

using namespace std;

class TasksList
{
    public:
        TasksList();
        void addtask(string usrcommand);
        void listtasks();
        void emptylist();
        void remtask();
        void writefile();
        void readfile();
        void completetask();
        void addprio();
        void listprio();
        ~TasksList();

    private:
        vector<Task> tlist;
        int numtasks;
};

#endif // TASKSLIST_H
