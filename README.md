Networking



1. Write a client-server program using UDP connection. Exchange a message
between client and server and close both sockets.

[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver1.c)
<img width="1340" alt="Screenshot 2024-05-30 at 1 16 02 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/95dd741b-ed3b-4c0e-b80f-8c681de64c2f">
[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient1.c)
<img width="1340" alt="Screenshot 2024-05-30 at 1 16 44 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/b5ce4d3c-b687-451f-b728-c42f52e244ac">

2. Modify the UDP client-server program to handle multiple messages in a loop
until the client sends "exit".

[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver2.c)
<img width="1340" alt="Screenshot 2024-05-30 at 1 20 55 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/27f02c6c-c976-46c2-b443-b17780683871">

[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient2.c)
<img width="1340" alt="Screenshot 2024-05-30 at 1 21 20 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/c079acb2-3b63-4927-adfb-1d6226df45c5">

3. Write a TCP client-server program where the server reverses the string
received from the client and sends it back.


[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/server3.c)
<img width="1340" alt="Screenshot 2024-05-30 at 1 31 46 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/8c0ffe26-8298-4315-8191-866bd9a093f1">

[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient3.c)
<img width="1340" alt="Screenshot 2024-05-30 at 1 32 02 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/6c6a68d7-1224-40bc-bc33-b9da5294f032">

4. Enhance the TCP reverse string server to handle multiple clients using
threads.


[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver4.c)

<img width="1340" alt="Screenshot 2024-05-30 at 1 50 21 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/56382b34-182c-485f-aa16-03163345dfed">




5. Write a TCP client-server program where the server checks whether a number
received from the client is even or odd.


[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver5.c)

<img width="1340" alt="Screenshot 2024-05-30 at 1 55 06 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/e3a66985-c9f6-4d3a-bbd1-10a24adae332">

[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient4.c)

<img width="1340" alt="Screenshot 2024-05-30 at 1 55 19 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/9555a718-0717-4c05-b870-77f4a725c24d">


6. Modify the TCP even/odd server to handle client connections in a loop until
the client sends "exit".

[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver6.c)

<img width="1340" alt="Screenshot 2024-05-30 at 2 00 55 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/a8666a43-f417-4e83-8bc2-0a714bab08e6">



[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient4.c)
<img width="1340" alt="Screenshot 2024-05-30 at 2 01 26 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/18f357ef-55dd-495b-ad6e-da9be80d30c5">


7. Write a TCP client-server program where the client sends a file name and the
server sends the contents of the file.
[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver7.c)
<img width="1340" alt="Screenshot 2024-05-30 at 2 06 09 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/f9b79c0b-0f78-4154-9f66-c001f3065e5c">



[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient7.c)

<img width="1340" alt="Screenshot 2024-05-30 at 2 06 26 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/dfe4e840-8e36-4935-9545-970eaa0c8a2e">


8. Modify the TCP file transfer server to send a list of available files to the client
before sending the requested file.

[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver8.c)
<img width="1340" alt="Screenshot 2024-05-30 at 2 10 53 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/76f66843-d13b-459c-81b9-eb13e65ffdff">



[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient7.c)
<img width="1340" alt="Screenshot 2024-05-30 at 2 11 06 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/7e2d988e-6c44-4af2-a1cb-cdf71e959e7b">




9. Write a UDP client-server program where the server echoes back any message
received from the client.

[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver9.c)
<img width="1340" alt="Screenshot 2024-05-30 at 2 15 27 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/58e609a5-6d8f-47a8-8a8a-5a3b54ce30c5">





[cilent](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/uclient9.c)
<img width="1340" alt="Screenshot 2024-05-30 at 2 15 44 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/04fb58d2-446e-4465-a803-9875a49915d1">

10. Create a UDP server that handles multiple clients using select() for I/O
multiplexing.


[server](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/userver10.c)
<img width="1340" alt="Screenshot 2024-05-30 at 2 20 46 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/1e161a43-271c-4b07-b54e-9a20a032078f">


[cilent]()
<img width="1340" alt="Screenshot 2024-05-30 at 2 21 01 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/e487963c-d649-4fc6-8507-ee8a27a1fe34">


File Handling



1.[ Write a C program to open a text file and read the first 10 bytes.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num1.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 34 27 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/f40520a5-5ec5-43aa-8381-2c05379b6147">


2.[Write a C program to create, open, and close a text file.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num2.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 36 02 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/b998f696-b07a-40ce-9483-fc9ec99b359c">

3. [Write a C program to open a text file and read the last 10 bytes.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num3.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 37 15 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/e7713ce7-6da3-4438-a41e-fff7fcbeb776">

4. [Write a C program to demonstrate the use of any 5 modes to open a text file.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num4.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 43 07 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/bdd7d7df-970e-427a-8151-0791048a658f">

5. [Write a C program to write "Hello, World!" to a new text file.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num5.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 44 27 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/dc3da56f-07e8-48b1-9b04-6600eebf2525">

6. [Write a C program to append "End of File" to an existing text file.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num6.c)
<img width="1340" alt="Screenshot 2024-05-30 at 12 45 34 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/f51139e0-077f-43c8-b43b-923255059f0d">


7. [Write a C program to read a file line by line and print each line.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num7.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 47 53 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/c3f841b0-cc81-4384-a8e9-3d1c50e6e932">


8. [Write a C program to copy the contents of one file to another.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num8.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 50 08 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/9ca7f6aa-ebd9-478f-8027-33415a73e503">

9. [Write a C program to count the number of lines in a text file.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num9.c)

<img width="1340" alt="Screenshot 2024-05-30 at 12 51 25 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/c5dfc6b7-7fdb-4315-976a-db4fed5141d7">

10. [Write a C program to check if a file exists before attempting to open it.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/num10.c)
<img width="1340" alt="Screenshot 2024-05-30 at 12 52 19 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/66e7e4d5-a275-4b78-8e74-826cc4365399">

File Permissions and Commands

1. [Write a C program to demonstrate the use of chmod system call to set file
permissions.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/exp.c)
<img width="999" alt="Screenshot 2024-05-29 at 11 16 48 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/f145abe2-b052-41e2-abd7-e5cfd6783927">


2. [Write a C program to demonstrate the use of chown system call to change the
owner of a file.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/exp1.c)
<img width="999" alt="Screenshot 2024-05-29 at 11 17 42 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/dff7b1ad-0740-421a-8531-26ab5b7e3a88">


3. [Write a C program to demonstrate the use of stat system call to get file status.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/exp3.c)

<img width="999" alt="Screenshot 2024-05-29 at 11 18 28 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/30935879-05b0-4ed3-aa56-4fdcb976567c">

4. Demonstrate any 5 file commands on ZSH shell (e.g., cat, head, tail, cp, rm).
<img width="999" alt="Screenshot 2024-05-29 at 11 20 10 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/2a35fbcf-d61e-406e-b3f6-1e82fe96ea73">

<img width="999" alt="Screenshot 2024-05-29 at 11 23 12 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/fcf9207b-7bf5-4a0e-9f75-978b590476c5">

<img width="1005" alt="Screenshot 2024-05-29 at 11 23 56 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/5d01d7f7-1879-4141-902d-a8f2a33dd181">

<img width="1005" alt="Screenshot 2024-05-29 at 11 43 01 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/190fb8e3-2a75-4ab4-a61a-12e070e5cedc">

<img width="1005" alt="Screenshot 2024-05-29 at 11 47 45 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/404868cf-8b61-4bbb-aaba-9231f8c756b6">



5. Demonstrate any 5 directory commands on ZSH shell (e.g., ls, mkdir, cd, rmdir,
pwd).
<img width="1005" alt="Screenshot 2024-05-29 at 11 48 15 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/234537df-63a1-4152-8eeb-cce9f2596002">

<img width="1005" alt="Screenshot 2024-05-29 at 11 24 42 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/ddef606b-ad87-406e-ad88-31a20e235a31">
<img width="1005" alt="Screenshot 2024-05-29 at 11 48 40 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/f78262f0-3c52-4226-83d6-a2b582f1c06a">
<img width="1005" alt="Screenshot 2024-05-29 at 11 50 27 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/5dc40688-ba33-40b1-b353-d167f5e85729">

<img width="1005" alt="Screenshot 2024-05-29 at 11 50 48 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/e7ac77ff-181e-40dc-811b-d93767031678">

6. [Write a ZSH script to list all files in the current directory with their sizes](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/one.zsh)


<img width="1005" alt="Screenshot 2024-05-29 at 11 58 23 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/5ac21a1e-3610-4583-97fc-730e8ef0501c">





7. [Write a ZSH script to find and delete all files with a .tmp extension.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/exp7.zsh)

<img width="1005" alt="Screenshot 2024-05-30 at 12 06 43 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/23fba5a1-2710-449e-979b-82546b43c4c8">


8. [Write a ZSH script to display the last 20 lines of all .log files in a directory.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/exp8.zsh)
<img width="1106" alt="Screenshot 2024-05-30 at 12 10 50 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/9f9e03bd-6b77-427e-8ed8-ed57596717b7">


9. [Write a ZSH script to rename all .txt files to .bak in a directory.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/exp9.zsh)

<img width="1340" alt="Screenshot 2024-05-30 at 12 13 16 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/2e49e066-807a-460f-a983-41542ce51e1a">


10. [Write a ZSH script to create a backup of a directory.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/exp10.zsh)

<img width="1340" alt="Screenshot 2024-05-30 at 12 14 31 AM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/6a586533-23a3-4c27-847c-1dc7af6f7a47">

System Calls and IPC



1. [Write a C program to illustrate the concept of dup system call.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example.c)
   <img width="999" alt="Screenshot 2024-05-29 at 9 25 07 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/6d906325-770f-465c-b293-e4ff555afc11">

2. [ Write a C program to illustrate the concept of fork system call.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example2.c)
   <img width="999" alt="Screenshot 2024-05-29 at 9 24 54 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/4d9fe847-f850-4c74-aa45-c3284e267e9b">

3. [Write a C program to illustrate the concept of wait system call.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example3.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 19 37 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/0c4f531c-9223-44f4-bdb5-bff4de5d1ccd">

4. [Write a C program to illustrate the concept of signal system call.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example4.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 24 10 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/d58fef4a-7576-4cc3-a573-bbf2f5c77f59">

5. [Write a C program to demonstrate inter-process communication (IPC) using
   pipes.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example5.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 31 59 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/adc77a22-d37e-4ec1-863c-a2550936ea77">

6. [Write a C program to demonstrate IPC using message queues.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example6.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 44 24 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/d3b5da89-8c2b-46b8-a7ab-557f0e99275e">

7. [Write a C program to demonstrate IPC using shared memory.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example7.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 42 43 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/a835f03f-2489-49e5-984f-cbb4b0ea4586">


        
8. [Write a C program to demonstrate IPC using semaphores.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example8.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 47 56 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/efd85fe7-87c5-4799-9906-13ebe2917eea">

9. [Write a C program to create a child process that runs a different program
   using exec().](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example9.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 49 37 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/392ca250-3407-420b-8527-39879731fdec">


10. [Write a C program to handle the SIGINT signal and print a message when it is
    received.](https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/blob/main/example10.c)
   <img width="999" alt="Screenshot 2024-05-29 at 10 51 26 PM" src="https://github.com/BHAGATBHAGYASHREE/OPerating-System-Pra/assets/142775493/2a3964a0-03de-43ad-bb3c-eedd3a3cd81b">

   
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
