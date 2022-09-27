#include<stdio.h>
void insert(int arr[],int size,int index,int data){
size++;
for (int i=size-1;i>=index;i--)
{
arr[i+1] = arr[i];
}
arr[index] = data;
for(int i =0;i<size;i++){
printf("%d \t",arr[i] );
}
}
void delete(int arr[],int size,int index){
for (int i = index; i < size ; i++)
{
arr[i] = arr[i+1];
}
size--;
for(int i =0;i<size;i++){
printf("%d \t",arr[i] );
}
}
void update(int arr[],int size, int index, int data){
if(index >= size){
printf("Index Out of Range. ");
}
else{
arr[index] = data;
}
for(int i =0;i<size;i++){
printf("%d \t",arr[i] );
}
}
int main(){
int a[10] = {1,2,3,4,5,6,7,8,9,10};
printf("Enter Choice : \n1.Insert at Beginning \n2.Insert at Index \n3.Insert at End \n4.Delete at Beginning \n5.Delete at Index \n6.Delete at End \n7.Update \n");
int choice,num,inx;
scanf("%d", &choice);
switch(choice){
case 1 :
printf("Enter Element to be Inserted : ");
scanf("%d", &num);
insert(a,10,0,num);
break;
case 2 :
printf("Enter Element to be Inserted : ");
scanf("%d", &num);
printf("Enter Index : ");
scanf("%d", &inx);
insert(a,10,inx,num);
break;
case 3 :
printf("Enter Element to be Inserted : ");
scanf("%d", &num);
insert(a,10,10,num);
break;
case 4 :
delete(a,10,0);
break;
case 5 :
printf("Enter Index : ");
scanf("%d", &inx);
delete(a,10,inx);
break;
case 6 :
delete(a,10,10);
break;
case 7 :
printf("Enter index to be Updated : ");
scanf("%d", &inx);
printf("Enter Value : ");
scanf("%d", &num);
update(a,10,inx,num);
}
return 0;
}
