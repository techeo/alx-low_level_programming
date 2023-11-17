section .data
    hello_msg db "Hello, Holberton", 10, 0 ; Message with a newline character

section .text
    global main
    extern printf

main:
    mov rdi, hello_msg ; Load address of the message into rdi
    call printf        ; Call printf function
    mov eax, 0         ; Return 0 from main
    ret                ; Exit from main
