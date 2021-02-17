    global ft_strcmp
ft_strcmp :
    mov rax, 0
    mov rcx, 0
    jmp while_loop
while_loop :
    mov al, [rdi + rcx]
    mov bl, [rsi + rcx]
    cmp al, 0
    je exit
    jne strings_compare
strings_compare :
    cmp al, bl
    je next_byte
    jne exit
next_byte :
    inc rcx
    jmp while_loop
exit :
    movzx rax, al
    movzx r8, bl
    sub rax, r8 
    ret
