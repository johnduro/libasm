; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_tolower

_ft_tolower:
	mov r11, rdi
	cmp r11, 64
	jg is_greater
	jmp unchanged

is_greater:
	cmp r11, 91
	jl is_lower
	jmp unchanged

is_lower:
	add byte [r11], 32
	mov rax, r11
	ret

unchanged:
	mov rax, r11
	ret
