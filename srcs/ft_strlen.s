    global ft_strlen
ft_strlen:
    mov rax, 0
    jmp loop_count
loop_count :
    cmp BYTE[rdi + rax], 0
    je end_while
    inc rax
    jmp loop_count
end_while :
    ret
