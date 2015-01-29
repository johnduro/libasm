; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
	;;char *ft_strdup(char *s);
; arg0 = di, arg1 = si, arg3 = dx


global _ft_strdup

extern _malloc
extern _ft_strlen

_ft_strdup:
	push rbx
	mov rbx, rdi
	call _ft_strlen
	inc rax
	mov rcx, rax
	mov rdi, rax

call_malloc:
	push rcx
	call _malloc
	pop rcx
	test rax, rax
	jz null
	mov rsi, rbx
	mov rdi, rax
	repnz movsb
	pop rbx
	ret

null:
	pop rbx
	ret
