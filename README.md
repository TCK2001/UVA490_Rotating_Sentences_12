## UVA490_Rotating_Sentences_12
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=6&page=show_problem&problem=431
-------
```c++
save[100]={""}; //Use save to check what sentense is more longer;

if(save[i].length()>maxlen)
{
  maxlen=save[i].length();
}
```
-------
+ And use for function to print the result
```c++
for(int i=0;i<maxlen;i++)
	{
		for(int j=num-1;j>=0;j--) //긴거부터 출력후 아래꺼 출력 반복; 
		{
      ....
      cout<<save[j][i];
```
+ In here we can know save[j][i] -> i means y , j means x;
