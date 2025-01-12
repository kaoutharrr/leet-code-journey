

char * mergeAlternately(char * word1, char * word2){

int count = strlen(word1) + strlen(word2) + 1;
char * result = calloc(count, 1);
int i = 0;
int j = 0;
int k = 0;

while(word1[i] != 0 && word2[j] != 0)
{
    result[k] = word1[i];
    k++;
    result[k] = word2[j];
    j++;
    i++;
    k++;
}
if(word1[i] != 0 && !word2[j])
{
    while(word1[i])
    {
        result[k] = word1[i];
        i++;
        k++;
    }
}
else if(!word1[i] && word2[j])
{
    while(word2[j])
    {
        result[k] = word2[j];
        j++;
        k++;
    }
}
return result;
}