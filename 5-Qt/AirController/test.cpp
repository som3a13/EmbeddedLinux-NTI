#include <iostream>
#include <thread>
#include <chrono>
#include <random>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

// Function to generate random temperature values
double generateRandomTemperature() {
    static std::default_random_engine generator;
    static std::uniform_real_distribution<double> distribution(15.0, 30.0); // Adjust range as needed
    return distribution(generator);
}

int main() {
    // Create a socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        std::cerr << "Error: Failed to create socket.\n";
        return 1;
    }

    // Bind to a port
    sockaddr_in serverAddr;
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(12345);  // Choose a port
    serverAddr.sin_addr.s_addr = INADDR_ANY;
    if (bind(serverSocket, (struct sockaddr *)&serverAddr, sizeof(serverAddr)) == -1) {
        std::cerr << "Error: Bind failed.\n";
        close(serverSocket);
        return 1;
    }

    // Listen for incoming connections
    if (listen(serverSocket, 1) == -1) {
        std::cerr << "Error: Listen failed.\n";
        close(serverSocket);
        return 1;
    }

    while (true) {
        // Accept a connection
        int clientSocket = accept(serverSocket, nullptr, nullptr);
        if (clientSocket == -1) {
            std::cerr << "Error: Accept failed.\n";
            close(serverSocket);
            return 1;
        }

        // Generate a random temperature value
        double currentTemperature = generateRandomTemperature();
        std::cout << "Current Temperature: " << currentTemperature << " °C" << std::endl;

        // Send the temperature value over the socket
        ssize_t bytesSent = send(clientSocket, &currentTemperature, sizeof(double), 0);
        if (bytesSent == -1) {
            std::cerr << "Error: Send failed.\n";
        }

        // Close the connection
        close(clientSocket);

        // Wait for 5 minutes
        std::this_thread::sleep_for(std::chrono::seconds(30));
    }

    // Close the server socket
    close(serverSocket);

    return 0;
}
