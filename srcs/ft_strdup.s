global ft_strdup
    extern malloc
    extern ft_strcpy
    extern ft_strlen
    extern __errno_location
ft_strdup:
    call ft_strlen
    add rax, 1
    push rdi
    mov rdi, rax
    call malloc
    cmp rax, 0
    je error_msg
    pop r9
    mov rdi, rax
    mov rsi, r9
    call ft_strcpy
    ret
error_msg :
    neg		rax				    ; rax = -rax
	mov		rdi, rax			; rdi = rax
	call	__errno_location    ; recieve address of erno
	mov		[rax], rdi			; put errno in return value
	mov		rax, -1				; rax = -1
	ret