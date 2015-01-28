; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx

section .text

global _ft_strcat

_ft_strcat:
	;; push rdi
	push rbx
	push rcx
	;; mov rax, rdi
	mov rbx, rdi
	mov rcx, rsi

get_end:
	cmp byte [rbx], 0
	je copy
	inc rbx
	;; add rbx, 1
	jmp get_end

copy:
	cmp byte [rcx], 0
	je return
	mov rax, [rcx]
	mov [rbx], al
	;; mov rbx, [rsi]
	inc rbx
	inc rcx
	jmp copy

return:
	;; inc rbx
	mov byte [rbx], 0
	mov rax, rdi
	pop rcx
	pop rbx
	ret
	;; pop rdi
