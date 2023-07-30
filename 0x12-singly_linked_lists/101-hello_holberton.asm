section .data
    hello db "Hello, Holberton", 0    ; Null-terminated string

section .text
    global _start_asm

_start_asm:
    ; Syscall to print the string
    mov rsi, hello  ; Address of the string to print
    mov rdi, 1      ; File descriptor 1 (stdout)
    mov rdx, 17     ; Length of the string
    mov rax, 1      ; System call number 1 (sys_write)
    syscall

    ; Exit the program
    mov rdi, 0      ; Exit status 0
    mov rax, 60     ; System call number 60 (sys_exit)
    syscall

