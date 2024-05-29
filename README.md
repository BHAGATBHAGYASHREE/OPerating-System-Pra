Networking



1. Write a client-server program using UDP connection. Exchange a message
between client and server and close both sockets.
2. Modify the UDP client-server program to handle multiple messages in a loop
until the client sends "exit".
3. Write a TCP client-server program where the server reverses the string
received from the client and sends it back.
4. Enhance the TCP reverse string server to handle multiple clients using
threads.
5. Write a TCP client-server program where the server checks whether a number
received from the client is even or odd.
6. Modify the TCP even/odd server to handle client connections in a loop until
the client sends "exit".
7. Write a TCP client-server program where the client sends a file name and the
server sends the contents of the file.
8. Modify the TCP file transfer server to send a list of available files to the client
before sending the requested file.
9. Write a UDP client-server program where the server echoes back any message
received from the client.
10. Create a UDP server that handles multiple clients using select() for I/O
multiplexing.
File Handling



1. Write a C program to open a text file and read the first 10 bytes.
2. Write a C program to create, open, and close a text file.
3. Write a C program to open a text file and read the last 10 bytes.
4. Write a C program to demonstrate the use of any 5 modes to open a text file.
5. Write a C program to write "Hello, World!" to a new text file.
6. Write a C program to append "End of File" to an existing text file.
7. Write a C program to read a file line by line and print each line.
8. Write a C program to copy the contents of one file to another.
9. Write a C program to count the number of lines in a text file.
10. Write a C program to check if a file exists before attempting to open it.

File Permissions and Commands
1. Write a C program to demonstrate the use of chmod system call to set file
permissions.
2. Write a C program to demonstrate the use of chown system call to change the
owner of a file.
3. Write a C program to demonstrate the use of stat system call to get file status.
4. Demonstrate any 5 file commands on ZSH shell (e.g., cat, head, tail, cp, rm).
5. Demonstrate any 5 directory commands on ZSH shell (e.g., ls, mkdir, cd, rmdir,
pwd).
6. Write a ZSH script to list all files in the current directory with their sizes.
7. Write a ZSH script to find and delete all files with a .tmp extension.
8. Write a ZSH script to display the last 20 lines of all .log files in a directory.
9. Write a ZSH script to rename all .txt files to .bak in a directory.
10. Write a ZSH script to create a backup of a directory.


System Calls and IPC



1. [Write a C program to illustrate the concept of dup system call.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example.c)
2. Write a C program to illustrate the concept of fork system call.
3. Write a C program to illustrate the concept of wait system call.
4. Write a C program to illustrate the concept of signal system call.
5. Write a C program to demonstrate inter-process communication (IPC) using
pipes.
6. Write a C program to demonstrate IPC using message queues.
7. Write a C program to demonstrate IPC using shared memory.
8. Write a C program to demonstrate IPC using semaphores.
9. Write a C program to create a child process that runs a different program
using exec().
10. Write a C program to handle the SIGINT signal and print a message when it is
received.




Text Processing
1. Demonstrate any 5 AWK commands on ZSH shell.
     1. Print Line Numbers
  
        
     Command: Print each line of a file with its line number.


     <img width="992" alt="Screenshot 2024-05-29 at 7 30 41 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/b2ba1977-bef3-491a-8746-20467418e3b2">
     
     2.Print Specific Columns


     Command: Print the second column from a file.


     <img width="999" alt="Screenshot 2024-05-29 at 7 36 40 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/879e8ca6-7d22-4ad1-9883-d272149a6814">

    3. Filter Lines by Pattern
  
   
    Command: Print lines that contain a specific pattern.

    <img width="999" alt="Screenshot 2024-05-29 at 7 38 43 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/d2fb887f-281b-4731-bd88-2442cdbc2dc9">

   4.Print All Lines of a File


   Command: Print all lines of a file.


   <img width="999" alt="Screenshot 2024-05-29 at 7 40 51 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/60fbd76f-28ac-4e24-b865-a99aa4e64b9a">

   5. Print the Number of Fields in Each Line
  
      
   Command: Print the number of fields in each line.

   <img width="999" alt="Screenshot 2024-05-29 at 7 44 33 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/a7e1d502-1d92-4c65-8dfc-8d5549822ca1">


2.Write an AWK command to print the second column of a file.

Print Specific Columns


     Command: Print the second column from a file.

<img width="999" alt="Screenshot 2024-05-29 at 7 51 01 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/28bb829e-635d-4292-b3ce-5a8dd4faaad9">

3.Write an AWK command to print lines where the third column is greater than 50.


 <img width="999" alt="Screenshot 2024-05-29 at 7 56 04 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/69a07229-8907-42c2-b05e-c842faf11222">

4.Write an AWK script to sum the values in the first column of a file.

<img width="999" alt="Screenshot 2024-05-29 at 7 58 03 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/dab94447-3089-4d3b-a37a-13bdba20df94">

5. Write an AWK script to print the last column of each line in a file.


<img width="999" alt="Screenshot 2024-05-29 at 7 59 01 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/87277a88-4f6d-4d51-a109-3d0d437c3ef9">

6. Demonstrate any 5 SED commands on ZSH shell.
   1.Substitute Text Using Regular Expressions
Command: Replace "pattern" with "replacement" in a file.

<img width="999" alt="Screenshot 2024-05-29 at 8 07 37 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/0af10956-eec4-4f66-bc1d-66fb4845a8fb">

  2. Replace Text in a File
Command: Replace "old_text" with "new_text" in a file.
<img width="999" alt="Screenshot 2024-05-29 at 8 32 29 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/52299854-5bd7-4506-8bf1-836c8d642dbc">
  
  3.Delete Lines Containing a Pattern
Command: Delete lines containing "pattern" from a file.

<img width="999" alt="Screenshot 2024-05-29 at 8 33 47 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/bd71307f-bd6b-4db2-a03b-42e113dfef62">

   4. Print Specific Line Numbers
   Command: Print lines 2 to 4 from a file.
<img width="999" alt="Screenshot 2024-05-29 at 8 35 31 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/2ecd043b-4cb6-4872-acd5-ab1155ac62e3">


   5.Add Text at the Beginning of Lines
Command: Add "prefix" at the beginning of each line in a file.
<img width="999" alt="Screenshot 2024-05-29 at 8 37 26 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/bf732e3a-7b49-4a06-9da2-ed8ba3b65f59">
7. Write a SED command to replace all occurrences of "foo" with "bar" in a file.
<img width="999" alt="Screenshot 2024-05-29 at 8 42 22 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/b205e81b-84cc-4ec0-9a5a-fc3ce0d43879">

8. Write a SED command to delete lines containing the word "error" in a file.
<img width="999" alt="Screenshot 2024-05-29 at 8 44 30 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/1c7f9422-bdab-4f76-8e44-aebd9ce27b05">

9. Write a SED command to insert a line of text before the third line of a file.
 10.Write a SED command to append a line of text after the fifth line of a file.   
