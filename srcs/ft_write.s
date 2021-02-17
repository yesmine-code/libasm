    global ft_write
    extern __errno_location
ft_write:
    mov rax, 0x01
syscall
    cmp		rax, 0			    	; if (rax < 0)
	jl		error_msg			
	ret						        ; return (rax)
error_msg:
	neg		rax			       	    ; rax = -rax
	mov		rdi, rax			    ; rdi = rax
	call	__errno_location        ; recieve address of errno
	mov		[rax], rdi		    	; put errno in return value
	mov		rax, -1			    	; rax = -1
	ret						        ; return rax