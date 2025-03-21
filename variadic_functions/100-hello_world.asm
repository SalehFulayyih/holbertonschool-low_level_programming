section .data
    msg db "Hello, World", 0xA   ; The string with a newline character
    len equ $ - msg              ; Calculate the length of the string

section .text
    global _start

_start:
    mov rax, 1                   ; System call number for write
    mov rdi, 1                   ; File descriptor (stdout)
    mov rsi, msg                 ; Address of the string to print
    mov rdx, len                 ; Length of the string
    syscall                      ; Make the system call

    mov rax, 60                  ; System call number for exit
    xor rdi, rdi                 ; Exit code 0
    syscall                      ; Make the system call
