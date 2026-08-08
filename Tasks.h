//
// Created by Robo_Start on 05.08.2026
//

#ifndef TASKS_H
#define TASKS_H
enum GlobalTasks {
    INIT = 0,
    RESET = 1
};
enum class StepperTasks {
    STOP = 50,
    FOR = 51,
    UNTIL = 52
};
enum DebuggerTasks {
    STATUS = 100
};
enum NetworkTasks {
    CONNECT = 200,
    CONNECTED = 201,
    RECEIVE = 202,
    SEND = 203
};
enum ModuleTasks {
 
};
#endif //TASKS_H
