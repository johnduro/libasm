; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_toupper

_ft_toupper:
	cmp byte [rdi], 96
	jg is_greater
	jmp unchanged

is_greater:
	cmp byte [rdi], 123
	jl is_lower
	jmp unchanged

is_lower:
	sub byte [rdi], 32
	mov rax, rdi
	ret

unchanged:
	mov rax, rdi
	ret
