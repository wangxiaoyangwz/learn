//�����������Ĳ��Ҳ���Find
 Position FInd (ElementType X, BinTree BST)
 {
	 if(!BST) return NULL;
	 if(X>BTS->Data)
		 return Find(X,BTS->right); //β�ݹ� ͨ��������ѭ����ʾ
	 else if(X<BTS->Data)
		 return Fine(X,BTS->left);
	 else 
		 return  BST;

 }

  //����ѭ��  ����β�ݹ顱��Ϊ��������


 Position IterFind (ElementType X , BinTree BST)
 {
	 while(BST)
	 {
		 if(X>BST->Data)
		 BST=BST->right;
		 else if (X<BST->Data)
			 BST=BST->left;
		 else 
		 return BST;


	 }
	 return NULL;
 }//���ҵ�Ч��ȡ�������ĸ߶�




 //�������Ԫ�غ���СԪ��
 //�������Ԫ��һ�����������ҷ�֧��
 //2   ��СԪ��һ�������������֧��

Position FindMin(BinTree BST)
{
	if(!BST) return NULL;
	else if(!BST->left)//û������
		return BST;
	else 
		return FindMin(BST->Left);//�ݹ鷨


}



Position FindMax(BinTree BST)
{
	if(BST)
		while(BST->right)  BST=BST->right;

	//�����ҷ�֧����ֱ����Ҷ�ڵ�
	return BST;

}

����



//�����������Ĳ���

//��֤�������Ȼ��������






