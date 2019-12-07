//
// File: taskmanager.h
// Project: Vispurple
// Description : Vispurple is an open source cross-platform desktop simulator to evaluate
// the visual accessibility of any graphic element for any visual perception condition
// Author: Jesús Fermín Villar Ramírez (pokoidev)

// © Copyright (C) 2019  pokoidev

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#ifndef TASKSTACK_H
#define TASKSTACK_H

#include <vector>
#include "task.h"

class TaskStack
{

public:

    static std::vector <Task *> tasks;
    static std::vector <Task *> late_tasks; ///< The task stack with the tasks we need to execute after all the others
    static size_t size;

    /**
     * @brief Add a new task to the given task stack
     * @param t The new task to add
     * @param task_vector The task stack where add the task. Tasks is the default value.
     */
    static void Subscribe  (Task *t, std::vector<Task *> *task_vector = &tasks)
    {
        task_vector->push_back(t);
        ++size;
    }

    /**
     * @brief Remove a given task in the given task stack
     * @param t The task to delete
     * @param task_vector The task stack where remove the task. Tasks is the default value.
     */
    static void Unsubscribe(Task *t, std::vector<Task *> *task_vector = &tasks)
    {
        int i;
        for (i = 0; (i < size) && *((*task_vector)[i])->f != *t->f; ++i);
        if(i<size)  task_vector->erase(task_vector->begin()+i);
    }

    /**
     * @brief Execute the tasks.
     */
    static void Execute()
    {
        for (Task *t : tasks)     t->Execute();
        for(Task *t : late_tasks) t->Execute();
    }


};

#endif // TASKSTACK_H
