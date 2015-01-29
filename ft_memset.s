; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
	;;void *memset(void *b, int c, size_t len);
; arg0 = di, arg1 = si, arg3 = dx

section .text

global _ft_memset

_ft_memset:
	push rdi
	mov rax, rsi
	mov rcx, rdx
	rep stosb
	pop rax
	ret
