// A Binary Tree
struct node { int val; struct node *left, *parent, *right; };
struct node root;
void init_heap(int val)
{

root.val = val;

}

void insert_left(struct node *node1, int val)
{
struct node left;
left.val = val;
(*node1).left = &left;
}

void insert_right(struct node *node1, int val)
{
struct node right;
right.val = val;
(*node1).right = &right;
}

int main() {

init_heap(10);
insert_left(&root, 12);
insert_right(&root, 12);

return(0);
}
