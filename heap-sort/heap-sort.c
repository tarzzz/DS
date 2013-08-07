
struct node { int val; struct node *left, *right;};
struct node root;
void heap_init(int a)
{
root.val = a;
}

void insert_left(struct node *node, int left_val )
{

struct node left;
struct node node1 = *node;
//printf("%d", *node.val);
left.val = left_val;

node1.left = &left;
return(&node1);

}

void traverse() {

int i;
struct node node = root;
for(i=0;i<3;i++)
    {
    printf("%d", node.val);
    
    node = *node.left;
    }

}

int main()
{
struct node *node;
heap_init(5);
node = insert_left(&root, 10);
insert_left(node,15);
traverse();
return(0);
}



