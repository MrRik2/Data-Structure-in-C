// C program for Sparse Matrix Representation
// using Linked Lists
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int value;
    int row_position;
    int column_position;
    struct Node *next;
};
void create_new_node(struct Node** start, int non_zero_element,int row_index, int column_index )
{
    struct Node *r, *c;
    r = *start;
    if (r == NULL)
    {
        r = (struct Node *) malloc (sizeof(struct Node));
        r->value = non_zero_element;
        r->row_position = row_index;
        r->column_position = column_index;
        r->next = NULL;
        *start = r;
    }
    else
    {
       while (r->next != NULL)
          r = r->next;
        c = (struct Node *) malloc (sizeof(struct Node));
        c->value = non_zero_element;
        c->row_position = row_index;
        c->column_position = column_index;
        c->next = NULL;
        r->next = c;
    }
}
void printList(struct Node* start)
{
    struct Node *r, *c, *val;
    r = c = val = start;

	//////////////////////////////
	printf("\n\n\t\t\t=================================");
    printf("\n\t\t\t| row_position: ");
    while(r != NULL)
    {
        printf("%d ", r->row_position);
        r = r->next;
    }
    printf("	|");
    /////////////////////////////
    printf("\n\t\t\t| column_postion: ");
    while(c != NULL)
    { 
        printf("%d ", c->column_position);
        c = c->next;
    }
    printf("    |");
	///////////////////////////
    printf("\n\t\t\t| Value: ");
    while(val != NULL)
    {
        printf("%d ", val->value);
        val = val->next;
    }
    printf("		|\n");
    printf("\t\t\t=================================");
}
int main()
{

   //4x4 sparse matrix

    int sparseMatric[4][4] =

    {
        {1 ,0 , 0 , 0 },

        {0 , 2, 0 , 2 },

        {3 , 0 , 0 , 0 },

        {0 , 0 , 4 , 0 }
    };
 
    /* Start with the empty list */
    struct Node* start = NULL;
{
	int i,j;
    for ( i = 0; i < 4; i++)
	{
        for (j = 0; j < 4; j++)
		{
            if (sparseMatric[i][j] != 0)
				{
	                create_new_node(&start, sparseMatric[i][j], i, j);
				} 
		}
	}
}
    printList(start);

return 0;
}
