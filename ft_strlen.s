; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx

global _ft_strlen

_ft_strlen:
		push	rdi
		sub	ecx, ecx
		not	ecx
		sub	al, al
		cld
repne	scasb
		not	ecx
		pop	rdi
		lea	eax, [ecx-1]
		ret

;; _ft_strlen:
;; 	push rbx
;; 	mov rbx, rdi ; destination puis source
;; 	mov eax, 0 ; destination, valeur

;; while:
;; 	cmp byte [rbx], 0 ; compare byte a byte VALEUR pointee par rbx, avec \0 donc 0
;; 	je return ; JUMP to func en tant que condition
;; 	inc rbx ;  incremente le pointeur
;; 	inc eax ; incremente la taille
;; 	jmp while ; JUMP sans condition

;; return:
;; pop rbx
;; ret
