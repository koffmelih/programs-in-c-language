#include<stdio.h>
int main(){
	int i, j;
	char sentence[100], word[100];
	printf("sentence: ");
	gets(sentence); 
	printf("word: ");
	gets(word);
	for(i=0;sentence[i]!=NULL;i++) 
		for(j=0;sentence[i+j]==word[j] && word[j]!=NULL;j++) 
			if(word[j+1]==NULL) printf("'%s' index: %d\n",word,i);
}
