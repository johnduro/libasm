; /usr/local/bin/nasm -f macho64 64.asm && ld -macosx_version_min 10.7.0 -lSystem -o 64 64.o && ./64
; arg0 = di, arg1 = si, arg3 = dx, arg4  = cx

global _ft_isdigit

_ft_isdigit:
push rbx ; save les valeurs par defauts sur la stack
mov	rbx, rdi ; passe l argument sur rbx
cmp rbx, 47
jle returnfalse; jle = jump less or equal than 47 valeur en dessous de la valeur ascii de 0
cmp rbx, 58
jge returnfalse; Jge = greater or equal than 58 valeur ascii au dessus de 9
jmp returntrue

returnfalse:
mov eax, 0 ; on veut return 0
pop rbx
ret

returntrue:
mov eax, 1 ; on veut return 1
pop rbx
ret
