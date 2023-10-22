section .data
    hello db 'Hello, Holberton', 0

section .text
    global main
    extern printf

main:
    ; Prepare arguments for printf
    ; First argument is the format string
    mov rdi, format
    ; Second argument is the string to print
    mov rsi, hello
    ; Third argument is the length of the string
    mov rdx, 16

    ; Call printf
    xor rax, rax
    call printf

    ; Return 0
    mov eax, 0x60
    xor edi, edi
    syscall

section .data
    format db "%s", 10, 0

