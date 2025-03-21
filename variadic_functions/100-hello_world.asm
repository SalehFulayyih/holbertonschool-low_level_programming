section .data
<<<<<<< HEAD
    hello db 'Hello, World', 0xa  ; The string to print, followed by a newline (0xa)
=======
    msg db "Hello, World", 0xA   ; The string with a newline character
    len equ $ - msg              ; Calculate the length of the string
>>>>>>> refs/remotes/origin/main

section .text
    global _start

_start:
<<<<<<< HEAD
    ; sys_write (syscall number 1)
    ; File descriptor 1 (stdout)
    ; Address of the string to be printed
    ; Length of the string
    mov rax, 1           ; syscall number for sys_write (1)
    mov rdi, 1           ; file descriptor 1 (stdout)
    mov rsi, hello       ; address of the string to print
    mov rdx, 14          ; length of the string (13 characters + 1 for the newline)
    syscall              ; make the syscall

    ; Exit the program
    mov rax, 60          ; syscall number for sys_exit (60)
    xor rdi, rdi         ; exit code 0
    syscall              ; make the syscall

=======
    mov rax, 1                   ; System call number for write
    mov rdi, 1                   ; File descriptor (stdout)
    mov rsi, msg                 ; Address of the string to print
    mov rdx, len                 ; Length of the string
    syscall                      ; Make the system call

    mov rax, 60                  ; System call number for exit
    xor rdi, rdi                 ; Exit code 0
    syscall                      ; Make the system call
>>>>>>> refs/remotes/origin/main
