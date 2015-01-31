; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_toupper

_ft_toupper:
	mov rax, rdi
	cmp eax, 97
	jl unchanged
	cmp eax, 122
	jg unchanged
	sub eax, 32
	ret

unchanged:
	ret
