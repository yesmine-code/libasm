    global ft_strcpy
ft_strcpy :
    mov rax, 0
    jmp while_loop
while_loop :
    cmp BYTE[rsi + rax], 0
    je  end_while
    mov cl, [rsi + rax]
    mov [rdi + rax], cl
    inc rax
    jmp while_loop
end_while :
    mov cl, 0
    mov [rdi + rax], cl
    mov rax, rdi
    ret