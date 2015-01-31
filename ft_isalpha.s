; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_isalpha

_ft_isalpha:
	cmp rdi, 65
	jl ret_false
	cmp rdi, 90
	jle ret_true
	cmp rdi, 97
	jl ret_false
	cmp rdi, 122
	jle ret_true
	mov eax, 0
	ret

ret_true:
	mov eax, 1
	ret

ret_false:
	mov eax, 0
	ret
