section .data
    hello db 'Hello, Holberton',0

section .text
    global main            ; Declare the main function as the entry point

    extern printf          ; Declare printf as an external function

main:
    ; Print the message using printf
    mov     rdi, hello     ; Load the address of the string into rdi (1st argument of printf)
    xor     rax, rax       ; Clear rax register
    call    printf         ; Call the printf function

    ; Exit the program
    mov     rax, 60        ; Syscall number for exit (60 for 64-bit systems)
    xor     rdi, rdi       ; Exit status 0
    syscall                ; Invoke the syscall to exit the program

