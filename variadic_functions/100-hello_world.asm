section .data
    hello db 'Hello, World', 0xa  ; The string to print, followed by a newline (0xa)

section .text
    global _start

_start:
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

