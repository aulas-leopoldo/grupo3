#include <stdio.h>
#include <time.h>

void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}

int main() {
    printf("Olá, Estudante!\n");

    //////////Aluno: Gabriel Oliveira / Alteração de data e hora
    struct tm *data_hora_atual;
    time_t segundos;
    time(&segundos);  
    data_hora_atual = localtime(&segundos);
    
    printf("Hoje é dia %d/%d/%d e hora atual é ", 
    data_hora_atual->tm_mday, data_hora_atual->tm_mon+1,data_hora_atual->tm_year+1900 );
    
    printf("%d:",data_hora_atual->tm_hour);//hora   
    printf("%d hrs \n",data_hora_atual->tm_min);//minuto
    //////////Fim da alteração de data e hora

    soma(5, 3);
    return 0;
}
