/*
The MIT License (MIT)

Copyright (c) 2015 Douglas Frari

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

/*
 ----------------------------------------------------------------------------------
 Macros To Pseudo Language 
 ----------------------------------------------------------------------------------
 version			: 0.0.1
 last update date	: 14/December/2015
*/

#include <stdio.h>

#define escreva(A) printf("%s\n",A);			// representa Saída de Dados com valor no final
#define escrevac(A,y) printf("%s %d\n",A,y);	// representa Saída de Dados 
#define se(A) if(A){							// representa enunciado SE
#define VERDADE 1								// representa valor lógico VERDADE
#define FALSO 0									// representa valor lógico FALSO
#define inicio {								// inicio de enunciados
#define fimse } 								// fim do bloco SE
#define fimalgoritmo } 							// representa fim do algoritmo