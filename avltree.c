#include <stdio.h>
#include <stdlib.h>
 
struct Node
{
    struct Node *lchild;

    int data;
    int height;
    struct Node *rchild;
}*root = NULL;

int max(int a, int b)
{
	return (a > b)? a : b;
}


int Nodeheight(struct Node *N)
{
	if (N == NULL)
		return 0;
	return 1+max(Nodeheight(N->lchild), Nodeheight(N->rchild));
}
int bfactor(struct Node *N)
{
	if (N == NULL)
		return 0;
	return Nodeheight(N->lchild) - Nodeheight(N->rchild);
}

 
struct Node *LLrotation(struct Node *t)
{
    struct Node *tl = t->lchild;
    struct Node *tlr = tl->rchild;
 
    tl->rchild = t;
    t->lchild = tlr;
 
    t->height = Nodeheight(t);
    tl->height = Nodeheight(tl);
 
    if(root == t)
    {
        root = tl;
    }
 
    return tl;
 
}
 
struct Node *RRrotation(struct Node *t)
{
    struct Node *tr = t->rchild;
    struct Node *trl = tr->lchild;
 
    tr->lchild = t;
    t->rchild = trl;
 
    t->height = Nodeheight(t);
    tr->height = Nodeheight(tr);
 
    if(root == t)
    {
        root = tr;
    }
 
    return tr;
 
}
 
 
struct Node *LRrotation(struct Node *t)
{
 
    struct Node *tl = t->lchild;
    struct Node *tlr = tl->rchild;
 
    tl->rchild = tlr->lchild;
    t->lchild = tlr->rchild;
 
    tlr->lchild = tl;
    tlr->rchild = t;
 
    tl->height = Nodeheight(tl);
    t->height = Nodeheight(t);
    tlr->height = Nodeheight(tlr);
 
    if(root == t)
    {
        root = tlr;
    }
 
    return tlr;
}
 
struct Node *RLrotation(struct Node *t)
{
 
    struct Node *tr = t->rchild;
    struct Node *trl = tr->lchild;
 
    tr->lchild = trl->rchild;
    t->rchild = trl->lchild;
 
    trl->lchild = t;
    trl->rchild = tr;
 
    tr->height = Nodeheight(tr);
    t->height = Nodeheight(t);
    trl->height = Nodeheight(trl);
 
    if(root == t)
    {
        root = trl;
    }
 
    return trl;
}
 
 
 
 
struct Node *RInsert(struct Node *t , int key)
{
        struct Node *newnode = NULL;
 
        if(t == NULL)
        {
            newnode = (struct Node *)malloc(sizeof(struct Node));
            newnode->data = key;
            newnode->height = 1;
            newnode->lchild = NULL;
            newnode->rchild = NULL;
 
        return newnode;
        }
 
        if(t->data < key)
        {
            t->rchild = RInsert(t->rchild , key);
        }
        else if(t->data > key)
        {
            t->lchild = RInsert(t->lchild , key);
        }
 
        t->height = Nodeheight(t);
 
 
        if(bfactor(t) == 2 && bfactor(t->lchild) == 1)
        {
            return LLrotation(t);
        }
        else if(bfactor(t) == -2 && bfactor(t->rchild) == -1)
        {
            return RRrotation(t);
        }
        else if(bfactor(t) == -2 && bfactor(t->rchild) == 1)
        {
            return RLrotation(t);
        }
        else if(bfactor(t) == 2 && bfactor(t->lchild) == -1)
        {
            return LRrotation(t);
        }
 
    return t;
}
 
struct Node *predecessor(struct Node *t)
{
    while(t && t->rchild != NULL)
    {
        t = t->rchild;
    }
 
    return t;
}
 
struct Node *successor(struct Node *t)
{
    while(t && t->lchild != NULL)
    {
        t = t->lchild;
    }
 
    return t;
}
 
 
struct Node *Delete(struct Node *t , int key)
{
    struct Node *q;
 
    if(t == NULL)
    {
        return 0;
    }
    if(t->lchild == NULL && t->rchild == NULL)
    {
        if(t==root)
        {
            root = NULL;
        }
        free(t);
        return 0;
    }
 
    if(key < t->data)
    {
        t->lchild = Delete(t->lchild , key);
    }
    else if(key > t->data)
    {
        t->rchild = Delete(t->rchild , key);
    }
    else
    {
        if(Nodeheight(t->lchild) > Nodeheight(t->lchild))
        {
            q = predecessor(t->lchild);
            t->data = q->data;
            t->lchild = Delete(t->lchild , q->data);
        }
        else
        {
            q = successor(t->rchild);
            t->data = q->data;
            t->rchild = Delete(t->rchild , q->data);
        }
    }
 
        t->height = Nodeheight(t);
 
        if(bfactor(t) == 2 && bfactor(t->lchild) == 1)
        {
            return LLrotation(t);
        }
        else if(bfactor(t) == -2 && bfactor(t->rchild) == -1)
        {
            return RRrotation(t);
        }
        else if(bfactor(t) == -2 && bfactor(t->rchild) == 1 )
        {
            return RLrotation(t);
        }
        else if(bfactor(t) == 2 && bfactor(t->rchild) == -1)
        {
            return LRrotation(t);
        }
        else if(bfactor(t) == 2 && bfactor(t->lchild) == 0)
        {
            return LLrotation(t);
        }
        else if(bfactor(t) == -2 && bfactor(t->rchild) == 0)
        {
            return RRrotation(t);
        }
 
    return t;
}
 
void inorder(struct Node *t)
{
    if(t)
    {
        inorder(t->lchild);
        printf("%d ",t->data);
        inorder(t->rchild);
    }
}
 
void preorder(struct Node *t)
{
    if(t)
    {
        printf("%d ",t->data);
        preorder(t->lchild);
        preorder(t->rchild);
    }
}
 
 
 
int main()
{
    root=RInsert(root,9);
    RInsert(root,5);
    RInsert(root,10);
    RInsert(root,0);
    RInsert(root,6);
    RInsert(root,11);
    RInsert(root,-1);
    RInsert(root,1);
    RInsert(root,2);
 
 
    printf("Before deletion: \n");
    preorder(root);
 
    printf("\n");
 
    Delete(root,10);
 
    printf("After deletion: \n");
 
    preorder(root);
 
 
 
 
 
    return 0;
 
}