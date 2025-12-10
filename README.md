# IPC Pipe Simulation

Project Overview:--

This project demonstrates *Inter-Process Communication (IPC)* using *pipes* in C++.
A parent process communicates with a child process using a unidirectional pipe created with pipe() and fork() system calls.
This repository contains *incremental revisions* made to improve program clarity, execution flow visibility, and user understanding.
Initial Commit
*Commit Message:*  
Initial commit: Added base IPC simulation code.
*Description:*  
- Implemented basic pipe creation.
- Established parent–child communication.
- Child sends a message through the pipe.
- Parent reads and displays the message.
Revision 1
*Commit Message:*  
added process start indicator message
*Description:*  
- Added a message at the beginning of execution.
- Helps identify when the IPC simulation starts.
- Improves readability for users and debugging.
Revision 2
*Commit Message:*  
added parent and child execution indicators
*Description:*  
- Added messages to indicate when:
  - Child process starts execution
  - Parent process starts execution
- Helps clearly distinguish parent and child roles during runtime.
 Revision 3
*Commit Message:*  
added final program completion message
*Description:*  
- Added a final message at the end of main().
- Clearly indicates successful program completion.
- Improves user experience and program flow clarity.
