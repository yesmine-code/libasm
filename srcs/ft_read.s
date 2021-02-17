    global ft_read
    extern __errno_location
ft_read :
    mov rax, 0x00
syscall
    cmp		rax, 0			    	; if (rax < 0)
	jl		error_msg			
	ret						        ; return (rax)
error_msg:
	neg		rax			       	    ; rax = -rax
	mov		rdi, rax			    ; rdi = rax
    call    __errno_location        ; rerieve address of erno
	mov		[rax], rdi		    	; put erno in return value of erno
	mov		rax, -1			    	; rax = -1
	ret						        ; return rax