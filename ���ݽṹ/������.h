//��̬����  ˳��洢  ���ڱ�

int squentialsearch(List Tab1,ElementTyple K)
{
	int i;
	for(i=Tab1->length;i>0&&Tab1->Element[i]==K;i--){
		return i;
	}
}

//���ڱ�

int squentialsearch(list Tab1,ElementTyply K)
{
	int i;
	tab1->Element[0]=K;
	for(i=Tab1->length;Tab1->Element[i]==K;i--){  //ѭ���˳������ֿ���1 �м��ĳ��λ��=K  2ѭ�����е�i=0ʱ
		return i;            //i=0��ʾû�ҵ�  i!=0��ʾ�ҵ���
	}
}

//ʱ�临�Ӷ�ΪO(n)





//���ֲ��ҷ�


int Binary(list Tab1,ElementType K)
{
	int left,right,min;
	left=1;
	right=Tab1->length;
	min=(left+right)/2;
	while(left<=right){
		min=(left+right)/2;
		if(Tab1->Element[min]>K){
			right=min-1;
		}
		else if(Tab1->Element[min]<K){
			left=min+1;
		}
		else{
			return min;
		}
	}
	return -1;
}


//ʱ�临�Ӷ���O(logn)



//�������  


void PreOrderTraversal(BinTree BT)
{
	if(BT){

		printf("%d",BT->Data);
		PreOrderTraversal(BT->left);
		PreOrderTraversal(BT->right);
	}
}


//�������


void INOrderTracersal(BinTree BT)
{
	if(BT){

		INOrderTraversal(BT->left);
		printf("%d",BT->Data);
		INOrderTraversal(BT->right);
	}
}




//�������




void PostOrderTraversal(BinTree BT)
{
	if(BT){
		PostOrderTraversal(BinTree BT);
		PostOrderTraversal(BinTree BT);
		printf("%d",BT->Data);
	}
}





//������� �ķǵݹ�


void INOrderTraversal(BinTree BT)
{
	BinTree T=BT;               
	stack S=CreatStack(MaxSize);
	while(T||!=IsEmpty(S)){
		while(T){
			push(S,T);
			T=T->left;
		}
		if(!IsEmpty(S)){
			T=Pop(S);
			printf("%d",T->Data);
			T=T->right;
		}
	}

}




//��������ķǵݹ鷽��

void PreOrderTraveral(BinTree BT)
{
	BinTree BT;
	strack S=CreatStrack(MaxSoze);
	while(T||!IsEmpty){
		while(T){
			push(S,T);
			printf("%d",T->Data);
  			T=T->left;
		}
		
		if(!IsEmpty){
			T=Pop(S);
			T=T->right;
		}
	}
}




//��������ķǵݹ�



void InOrderTraversal( BinTree BT )  
{  
   BinTree T BT;  
   Stack S = CreatStack( MaxSize ); /*��������ʼ����ջS*/  
   Stack Q = CreatStack( MaxSize ); /*��������ʼ����ջQ�������������*/  
   while( T || !IsEmpty(S) ){  
       while(T){ /*һֱ���Ҳ�����;���ѹ���ջ*/  
           Push(S,T);  
           Push(Q,T);/*���������Ľ��ѹջ�����ڷ���*/  
           T = T->Right;  
       }  
       if(!IsEmpty(S)){  
       T = Pop(S); /*��㵯����ջ*/  
       T = T->Left; /*ת��������*/  
       }  
   }  
   while( !IsEmpty(Q) ){  
       T = Pop(Q);  
       printf(��%5d��, T->Data);    /*�����ʣ���ӡ���*/
   }  
}  




//�������   ���е�ʹ��



void LeverOrderTraveral(BinTree BT)
{
	Queue Q;
	BinTree T;
	if(!BT) return;
	Q=CreatQueue(MaxSize);
	AddQ(Q,BT);
    while(T){
		T=Delect(Queue Q);
		printf("%d",T->Data);
		if(T->left)  AddQ(Q,T->left);
		if(T->right)  AddQ(Q,T->right);
	}
}






