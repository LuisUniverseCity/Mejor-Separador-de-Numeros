# Mejor-Separador-de-Numeros
Separador de números se utiliza para guardar los dígitos individualmente en un array.
ej. 5623 → a=5, b=6, c=2, d=3. 

Este código permite guardar y usar estos digitos individualmente.

La razón por la que escribí este código es porque los demás códigos que hacen esta tarea suelen tener 2 problemas que identifiqué:
1. Suelen ser limitados al número de dígitos que el creador del código determina por ejemplo mediante el uso de int cifras=10; posteriormente usando cifras para hacer un while y hacer que funcione el separador esto implica que un número mayor a 10 cifras no se terminaría de separar.
2. Suelen guardan los números en un array al revés, es decir un número 5623 se guardaría como array0=3, array1=2, array2=6, array3=5 sin embargo esto no es nada conveniente y complica usar los números por lo que buscaba una forma de guardar los dígitos de 5623 como: array1=5, array2=6, array3=2, array4=3. 

Este código resuelve ambos problemas sin agregar a penas ninguna línea de código a las alternativas siendo mucho más fácil de usar en un futuro.
