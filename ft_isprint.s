; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_isprint

_ft_isprint:
push rbx ; save les valeurs par defauts sur la stack
mov	rbx, rdi ; passe l argument sur rbx
cmp rbx, 32
jl returnfalse; JL = jump less than 32
cmp rbx, 126
jg returnfalse; JG = greater than 126
jmp returntrue

returnfalse:
mov eax, 0 ; on veut return 0
pop rbx
ret

returntrue:
mov eax, 1 ; on veut return 1
pop rbx
ret
