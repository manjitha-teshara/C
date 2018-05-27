#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char lastc[100];

int lastint[100];

int last(char p[],int lastint[],char lastc[]);
int cheak(char c,int lastint[],char lastc[],int len);








int main() {
	
	char pat[]="manji";
	char tex[]="i am student of university of colombo school of computing,my nick name is manji";
	
	int patlen=strlen(pat);
	int texlen=strlen(tex);
	
//	printf("%c %d",97,97);//a-->97
	
	int i,j;
	for(i=0;i<texlen-patlen;){
					int count=0;

		for(j=patlen-1;j>=0;j--){
			if(pat[j]==tex[j+i]){
				count++;
			}
			else{
				int lent=strlen(lastc);
				if(cheak(tex[j+i],lastint,lastc,lent)<j){
					i=j-cheak(tex[j+i],lastint,lastc,strlen(lastc));
					break;
				}
				else if(cheak(tex[j+i],lastint,lastc,lent==-1)){
					i+=j;
					break;
				}
				else{
					i++;
				}				
			}
			
			
			
		}
		
		if (count==patlen){
				printf("Pattern machine in %d index in text",i);
			}
	}
	return 0;
}

int last(char p[],int lastint[],char lastc[]){
	int lpointer=0;//lasr charecter table's pointer 0 index to froword
	int plen=strlen(p);
	int q;
	for(q=plen-1;q>=0;q--){
		int z;
		for(z=plen-1;z>=q;z--){
			
			if(p[q]==p[z]){
				lastint[lpointer]=z;
				lastc[lpointer]=p[z];
				lpointer++;
				break;
			}
			
		}
		
	}
	
}

int cheak(char c,int lastint[],char lastc[],int len){
	
	//int len=strlen(lastint);//length of last charecter table
	int i;
	for(i=0;i<len;i++){
		if(c==lastc[i]){
			return lastint[i];
		}
		else{
			return -1;
		}
	}
	
}





