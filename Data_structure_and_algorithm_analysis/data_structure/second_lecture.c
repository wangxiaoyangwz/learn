//�������ʵ��
void insert(ElementType X,int i, List ptrl)
{
	int j;
	if(ptrl>-last==MAXSIZE-1){
	     return;
	}
	if(i<1||i>ptrl>-last+2){
	    return ;
	}
	for(j=ptrl>-last;j<=i-1;j--)
	{
		ptrl>-Data[j+1]=ptrl>-Data[j];
		ptrl>-Data[i-1]=X;
	}
	ptrl>-last++;
	return;

}
//ɾ������

void Delete(int i,list ptrl)
{
	int j;
	if(i<1||ptrl>-last+2){
	    return;
	}
	for(j=i;j<=ptrl>-last;j++)
	{
		ptrl>-Data[j-1]=ptrl>-Data[j];

	}
	ptrl>-last--;
	return;
}





//�������


int Length(list ptrl)
{
	list p=ptrl;
	int j;
	j=0;
	while(p){
	  p=p->next;
	  j++;
	}
	return j;
}














//����Ų���


List FindKth(int k,list ptrl)
{
	list p=ptrl;      //ͷָ��
	int i;
	while(p!=NULL&&i==K){
		p=p->next; 
		i++;
	}
	if(i==K){
	   return p;
	}
	else{
		return NULL;
	}

}




//��ֵ����



list Find(ElementTYpe X ,list ptrl)
{
      list p=ptrl;
	  while(p!=NULL&&ptrl>-Data!=X){
		  p=p>-next;
	  }
	  return p;
}













//����Ĳ���
int insert(ElementType X,int i,list ptrl)
{
    list s,p;//sΪ������
	if(i==1){
		s=(list)malloc(sizeof(struct(node)));
		s->next=ptrl;
		s->Data=X;
		return s;
	}
	p=FindKth(i-1,ptrl);
	if(p=NULL){
		printf("����i����");
		return NULL;
	}
	else{
		s=(list)malloc(sizeof(struct(node)));
		s->Data=X;
		s->next=p->next;
		p->next=s;
		return ptrl;
	}
}






//�����ɾ��
void Delect(int i,list ptrl)
{
	list s;
	if(i==1){            //ptrlΪ��ɾ���
		s=ptrl;         //��Ҫɾ�������Ƚ���ɾ�Ľڵ�2�������ʱ�������޸��������ɾ����
		if(prel!==null){
		ptrl=ptrl->next;  //ͷ���������һ�����
		free(s);
		return ptrl;
		}
		p=FindKth(i-1,list ptrl);
		if(i==NULL){
			return NULL;
		}
		else{
			s=ptrl->next;  //sΪ��ɾ���  ptrlΪǰһ���        //��Ҫɾ�������Ƚ���ɾ�Ľڵ�2�������ʱ�������޸��������ɾ����
			ptrl->next=s->next;//ǰһ�����������ɾ���ĺ�һ�����
			free(s);
			return ptrl;
		}

	}
}




//��ջ   ��ջ



void push(stack ptrs,ElementType X)
{
	if(ptrs->top==MaxSize-1){
		printf("ջ����");
		return;
	}
	else{
		ptrs->Data[++(ptrs->top)]=item;//��ջ�ȼӺ���
		return;
	}
}



//��ջ



void Pop(stack ptrs,ElementType X)
{
	if(ptrs->top==-1){
		return ERROR;
	}
	else{
		return (ptrs->Data[(ptrs->Top)--]);//��ջ�ȳ����
	}
}


//һ������������ջ   ��ջ


void Push(struck Dstack*ptrs ElementType x int tag)
{
	if(tag==1){
		if(ptrs->top1==MaxSize-1){
			return NULL;
		}
		else{
			ptrs->Data[++(ptrs->top1)]=item;
			return ;
		}
		else{
            if(ptrs->top2==-1){
			return NULL;
		}
		else{
			ptrs->Data[--ptrs->top1)]=item;
			return ;
		}
		}
	}
}




//һ������������ջ   ��ջ



void Pop(struct Dstack*ptrds ElementType X int tag)
{
	if(tag==1){
		if(ptrs->top==-1){
			return ERROR;

		}
		else{
			ptrs->Data[(ptrs->top1)--]=item;
			return ;
		}
		else{
			if(ptrs->top==MaxSize){
			return ERROR;

		}
		else{
			ptrs->Data[(ptrs->top2)++]=item;
			return ;
		}

		}
	}
}






//��ʼ��һ����ջ

stack Create()
{
	s=(list)malloc(sizeof (struct node));
	s->next=NULL;
	return s;

}






//�ж��Ƿ�Ϊ��ջ

int IsEmpty(stack)
{
	
		return (s->next==NULL);
}





//push

void push(ElementType item stack )
{
	struct SNode *Tempcell;
	Temcell=(struct SNde *)malloc(sizeof(struct Node));
    Temcell->Element=item;
	Temcell->next=s->next;
	s->next=Temcell;
	return ;

}




//Pop


void Pop(ELementType item  stack)
{
    struct SNod *firstcell;
	Element Type temELem;
	if(ISEmpt(s)){
		return;
	}
	else{
		firstcell=s->next;
		s->next=firstcell->next;
		temElem=firstcell->Element;
		return temElem;
	}
	
}













//����    push


void AddQ(Queuc ptrQ ElementType item)
{
	if((ptrQ->rear+1)%MaxSize==front){
		printf("��������");
		return ;
	}
	else{
		ptrQ->rear=(ptrQ->rear+1)%MAxSixze;
		ptrQ->Data[ptrQ->rear]=item;
	}
}



//  ����   Pop


ElementType  Delect(Queuc ptrQ )
{
	struct Node *frontcell;//��ɾ���
	ElementType frontElem;

	if(ptrQ->rear==ptrQ->front){
		printf("����Ϊ��");
		return ERROR;
	}
	frontcell=ptrQ->front;
	if(ptrQ->front==ptrQ->rear){
		ptrQ->front=ptrQ->rear=NULL;
	}
	else{
		ptrQ->front=ptrQ->front->next;
		frontElem=frontcell->Data;//��ɾ��������
		free(frontcell);
		return frontElem;
	}

}






//��������ʽ���     ��ʽ



polynomial PolyAdd(Polynomial P1  Polinomial P2)
{
	Polinomial front,rear,temp;
	int sum;
	rear=(Polinomial)malloc(sizeof(struct PolyNode));//����ռ�
	rear=front;//��ʱ������ͬ
	while(P1&&P2){
		switch(Compare(P1->expon, P2->expon)){//�Ƚ�P1��P2��ָ����С
		case 1:
			attach(P1->coef,P1->expon,&rear);//copy  ���Ҵ洢��rear��
			P1=P1->link;//P1ָ�����
			break;
		case -1:
			attach(P2->cofe,P2->expon,&rear);
			P2=P2->link;
			break;
		case 0:
			sum=P1->cofe=P2->cofe;//ϵ�����
			if(sum){
				attach(sum,P1->expon,&rear);//
                P1=P1->link;
				P2=P2->link;
				break;
			}

		}
		for(;P1;P1=P1->link)attach(P1->cofe,P1->expon,&rear);//ѭ��֮������ݽ���洢��rear ��
		for(;P2;P2=P2->link)attach(P2->cofe,P2->expon,&rear);
		rear->link=NULL;   
		temp=front;
		front=front->link;
		free(temp);
		return temp;
	}

}

void attach(int c,int e,Polinomial *Prear)//ָ���ָ��  *����˼��ȡ��һ��ָ����ָ��Ķ���  
                                           //һ��ָ�뱣����һ���ڴ��ַ��ô�ͷ��������ַ�Ķ���
{

}

//&a��ʾȡ������ͱ����Ĵ洢��ַ
//*p��ʾpָ���ڴ���д洢��ֵ



//�������ʽ

Polynomial RearPoly()
{
	Polynomial rear,p,t;
	int  c,e,n;
	scanf("%d",n);
	p=(Polynomial)malloc(sizeof(struct PolyNode));
	rear=p;
	while(n--){
         scanf("%d %d",&c,&e);
		 Attach(int c,int e,Polynomial &rear);
	}
	t=p;
	p=p->link;
	free(t);
	return t;

}



//����������ʽ���

Polynomial Mult(Polynomial P1,Polynomial P2)
{
	Polynomial t1,t2,p,t;
	int c,e;
	if(!P1&&!P2==NULL){
		return NULL;
	}
	t1=P1;t2=P2;
	p=(Polynomial)malloc(sizeof(struct PolyNode));
	rear=p;
	p->link=NULL;
	while(t2){
		attach(t1->cofe*t2->cofe,t1->expon+t2->expon,&rear);
		t2=t2->link;
	}
	t1=t1->link;
	while(t1){
		t2=P2;
		rear=p;
		while(t2){
			c=t1->cofe*t2->cofe;
			e=t1->expon+t2->expon;
			if(rear->link&&rear->link->expon>e){
				rear=rear->link;
			}
			else if(rear->link&&rear->link->expon==e){
                if(rear->link->cofe+=c){
					t=rear->link;
					rear->link=t->link;
					free(t);
				}
				else{
                    t=(Polynomial)malloc(sizeof(struct PolyNode));
					t->cofe=c;
					t->expon=e;
                    t->link=rear->link;
					t=rear->link;
					rear=rear->link;
				}
               t1=t1->link; 
			}
			t2=p;p=p->link;free(t2);
			return p;
                         
		}
	}

}





