#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 50 //длина буфера для слова
            //в русском влезет: тысячадевятьсотвосьмидесятидевятимиллиметровый
            //в английском влезет: Supercalifragilisticexpialidocious
 
//записываем текст в файл посимвольно, попутно считаем длину
int lenOfSentence()
{   int cur = 0;
    char c;
    
    FILE *f = fopen("sentence.txt","w");
    if(f == NULL)
    {   printf("Scusi, temporary difficulties finding room for your sentence\n");
        getchar();  exit(1);
    }
    
    printf("Put your sentence. Press ENTER' at the end:\n");
    do
    {   c = getchar();
        if(c!= '\n') fputc(c,f);    //убираем ENTER
        cur++;
    }   while (c!= '\n');
    fputc('\0',f);  //добавляем символ конца строки
    fclose(f);
 
    return cur;     //возвращаем длину текста в файле
}
 
//считываем текст из файла в динамическую строку заданной длины
char *veryLongString(int len)
{   char *sentence;
 
    FILE *g = fopen("sentence.txt","r");
    if(g == NULL)
    {   printf("Scusi, temporary difficulties reading your sentence\n");
        getchar();  exit(1);
    }
 
    sentence = (char*) malloc (len);
    fgets(sentence,len,g);
    fclose(g);
    return sentence;
}
 
//проверка: является ли символ знаком препинания
int inDelimiters(char c)
{   int i;
    char delimiters [] = {' ','.',',','-',':',';','!','?'};
    for(i=0;i<8;i++)
        if(c == delimiters[i])
            return 1;
    return 0;
}
 
//укоротить текст на слово слева
char *cutSentenceByWord(char *sentence, char* word)
{   int i,cur;
    cur=strlen(word);
    while(inDelimiters(sentence[cur]))
            cur++;
    
    char *cut = (char*) malloc (strlen(sentence) - cur);
    for(i=cur;i<strlen(sentence);i++)
            cut[i-cur]=sentence[i];
        cut[i-cur]= '\0';
 
    return cut;
}
 
//////////////////////////////////////////////////////////
int main()
{   char word [N];
    int len = lenOfSentence();      //вводим текст, подсчитываем его длину
    char *sentence = veryLongString(len);   //создаем строку с текстом
    
    printf("\nWords:\n");   //разбираем на слова
    while(strlen(sentence)>0)
    {   sscanf(sentence,"%s",word); //считываем слово как набор символов до пробела
        
        if(inDelimiters(word[strlen(word)-1])) //если захватили и знак препинания справа
            word[strlen(word)-1] = '\0';        //убираем его
        
        printf("\t%s\n",word);
        strcpy(sentence,cutSentenceByWord(sentence,word)); //срезаем текст на найденное
                                                            //слово слева
    }
    
    flushall(); getchar();
    return 0;
}