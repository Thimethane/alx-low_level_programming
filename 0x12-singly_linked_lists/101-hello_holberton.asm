section .data
    hello db 'Hello, Holberton', 0
    fmt db '%s\n', 0

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    ; Pass the format string and the message string to printf
    mov rdi, fmt
    mov rsi, hello
    xor rax, rax

    ; Call printf
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret
