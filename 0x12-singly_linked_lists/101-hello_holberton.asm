section .data
    hello db 'Hello, Holberton', 0   ; Null-terminated string

section .text
    global _start_asm  ; Change the label to _start_asm

    extern printf

_start_asm:
    ; Call the main function
    call main

    ; Exit the program
    mov rax, 60      ; syscall number for exit
    xor rdi, rdi     ; status code 0
    syscall

main:
    push rbp
    mov rdi, hello   ; Set the format string argument for printf
    call printf      ; Call the printf function
    pop rbp
    ret              ; Return from main function

