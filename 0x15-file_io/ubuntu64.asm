section .text
    global _start

_start:
    ; Exit system call
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit status 0
    syscall

