#include <iostream>
#include <unistd.h>
using namespace std;
void simulatePipe() {
    // REVISION 1: Process start indicator
    cout << "[INFO] Pipe simulation started" << endl;
    int pipefd[2];
    char buffer[50];
    if (pipe(pipefd) == -1) {
        cout << "Pipe creation failed!" << endl;
        return;
    }
    int pid = fork();
    if (pid < 0) {
        cout << "Fork failed!" << endl;
        return;
    }
    // Child Process
    if (pid == 0) {
        // REVISION 2: Child process indicator
        cout << "[CHILD] Child process executing" << endl;
        close(pipefd[0]); // Close read end
        string message = "Hello from Child Process (PIPE)";
        write(pipefd[1], message.c_str(), message.size() + 1);
        close(pipefd[1]);
    } 
    // Parent Process
    else {
        // REVISION 2: Parent process indicator
        cout << "[PARENT] Parent process executing" << endl;
        close(pipefd[1]); // Close write end
        read(pipefd[0], buffer, sizeof(buffer));
        cout << "Parent received: " << buffer << endl;
        close(pipefd[0]);
    }
}
int main() {
    cout << "=== IPC Debugger Tool: Pipe Simulation ===\n";
    simulatePipe();
    return 0;
}
