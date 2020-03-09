# Brainfuck

## Sujet 

Assignment name  : brainfuck
Expected files   : *.c, *.h
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Écrire un programme capable d'interpréter du Brainfuck.
Le code source sera passé en premier paramètre.
Le code transmis sera toujours valide, et ne comportera pas plus de 4096 opérations.
Le Brainfuck est un langage minimaliste constitué d'un tableau d'octets 
(dans le cadre de cet exercice, 2048 octets) tous initialisés à 0, 
et d'un pointeur sur son premier octet.

Voici les différents opérateurs du Brainfuck :
- '>' incrémente le pointeur ;
- '<' décrémente le pointeur ;
- '+' incrémente l'octet pointé ;
- '-' décrémente l'octet pointé ;
- '.' affiche l'octet pointé sur la sortie standard ;
- '[' va au ']' correspondant si l'octet pointé est égal à 0 (début de boucle) ;
- ']' va au '[' correspondant si l'octet pointé est différent de 0 (fin de boucle).

Tout autre caractère est un commentaire.

Exemples:

$>./brainfuck "++++++++++[>+++++++>++++++++++>+++>+<<<<-]
>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>." | cat -e
Hello World!$
$>./brainfuck "+++++[>++++[>++++H>+++++i<<-]>>>++\n<<<<-]>>--------.>+++++.>." | cat -e
Hi$
$>./brainfuck | cat -e
$
