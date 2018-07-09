#include <iostream>
/*二叉树操作*/
/*模板二叉树结点*/
template <typename DataType>
class BinaryTreeNode
{
public:
	friend class BinaryTree<DataType>;
	DataType m_data;
	BinaryTreeNode<DataType>  *lChild, *rChild;

public:
	BinaryTreeNode()
	{
		lChild = rChild = NULL;
		m_data = NULL:
	}
	BinaryTreeNode(DataType d)
	{
		lchild = rchild = NULL;
		m_data = d:
	}
	/*没有析构函数，因为没有为类成员分配内存，只是单纯的赋值*/
	/*分别访问成员变量*/
	Datatype getData()
	{
		if (data != NULL)
			return data;
		else
			return NULL;
	}
	BinaryTreeNode* getlChild()
	{
		if (lChild != NULL)
			return lChild;
		return NULL;
	}
	BinaryTreeNode* getrChild()
	{
		if (rChild != NULL)
			return rChild;
		return NULL;
	}
};

template <typename DataType>
class BinaryTree
{
private:
	BinaryTreeNode<DataType>* root;
public:
	BinaryTree()
	{
		root = new BinaryTreeNode<DataType>();
	}
	BinaryTree(DataType data)
	{
		root = new BinaryTreeNode<DataType>(data);
	}
	~BinaryTree()
	{
		delete root;
	}
	BinaryTreeNode<DataType>* getParentNode(BinaryTreeNode<DataType>* node);
};
/*采用层次遍历的方遍历获取父节点*/
template <typename DataType> 
BinaryTreeNode<DataType>*  BinaryTree<DataType>::getParentNode(BinaryTreeNode<DataType>* node)
{
	if (Node == NULL || Node == root)
	{
		return NULL;
	}
	// 开始运用队列遍历二叉树
	int max = 50; //队列的大小
	int front, rear;
	BinaryTreeNode* current, child;
	int count; //队列的元素个数
	if (node != NULL)
	{
		BinaryTreeNode<DataType>*quene = new BinaryTreeNode<DataType>[max]; //对队列数组申请空间
		front = rear = count = 0;
		quene[rear] = root;
		rear++;
		count++;
		while (count != 0)
		{
			current = quene[rear];
			child = current->getlChild(); 
			if (child != NULL)
			{
				if (Node == child)
				{
					retrun current;
				}
				else
				{
					rear = (rear + 1) % max;            
					quene[rear] = child;
					count++;
				}
			}
			child = current->getrChild();
			if (child != NULL)
			{
				if (Node == child)
				{
					retrun current;
				}
				else
				{
					rear=(rear+1)%max;
					quene[rear] = child;   // 将当前结点的右插入到队列中
					count++;
				}
			}
			front = (front + 1) % max; //删除当初结点 
			count--;
		}
		return NULL;

	}
}
