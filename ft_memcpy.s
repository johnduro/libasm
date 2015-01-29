; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
;; void *memcpy(void *restrict dst, const void *restrict src, size_t n)
; arg0 = di, arg1 = si, arg3 = dx

section .text

global _ft_memcpy

_ft_memcpy:
	mov rcx, rdx
	mov rax, rdi
	rep movsb
	ret
