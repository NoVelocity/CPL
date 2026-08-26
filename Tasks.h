//
// Created by Robo_Start on 05.08.2026
//

#ifndef TASKS_H
#define TASKS_H
enum GlobalTasks {
    INIT = 1,
    RESET = 2,
    DEBUG = 5
};
enum StepperTasks {
    STOP = 50,
    FOR = 51,
    UNTIL = 52,
    STATE = 60,
    ENABLE = 61,
    DISABLE = 62
};
enum DebuggerTasks {
    ROBOT_STATUS = 100
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
