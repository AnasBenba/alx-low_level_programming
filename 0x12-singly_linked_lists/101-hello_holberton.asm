section .data
    message db 'Hello, world!', 0x0A
    len equ $ - message

section .text
    global main

main:
    ; write the message to stdout
    mov rax, 1 ; system call for write
    mov rdi, 1 ; file descriptor for stdout
    mov rsi, message ; message to print
    mov rdx, len ; length of the message
    syscall

    ; exit the program
    mov rax, 60 ; system call for exit
    xor rdi, rdi ; exit status
    syscall
