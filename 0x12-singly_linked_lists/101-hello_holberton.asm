section .data
    message db "Hello, Holberton!",0
    format db "%s\n",0

section .text
    global main

main:
    ; set up stack frame
    push rbp
    mov rbp, rsp

    ; prepare arguments to printf
    mov rdi, format
    mov rsi, message

    ; call printf
    xor eax, eax
    call printf

    ; clean up stack frame
    mov rsp, rbp
    pop rbp

    ; return 0
    xor eax, eax
    ret
