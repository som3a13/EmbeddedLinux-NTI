#include <csignal>
#include <iostream>

void signal_handler(int signum) {
    std::cout << "Signal received in  application." << std::endl;
    // Call your callback function here
}

int main(int argc, char *argv[]) {

    // Register signal handler
    signal(SIGUSR1, signal_handler);

    std::cout << "Test Signal" << std::endl;

    return 0;
}