#include <stdio.h>
#include <string>
#include <unistd.h>
#include <signal.h>
#include "Pipe.hpp"


int main() {
    MyPipe pipe1("ps aux | grep test1 | head -n 1 | awk '{print $2}'"); //for UBuntu

    // MyPipe pipe1("ps | awk '/[R]aspi4/ {print $1}'"); //for PI

    int qt_pid = std::stoi(pipe1.print_output());

    kill(qt_pid, SIGUSR1);

    return 0;
}