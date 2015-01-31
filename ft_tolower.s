; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_tolower

_ft_tolower:
	mov rax, rdi
	cmp eax, 65
	jl unchanged
	cmp eax, 90
	jg unchanged
	add eax, 32
	ret

unchanged:
	ret
