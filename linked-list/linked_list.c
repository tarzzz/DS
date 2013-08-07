
struct node { int value; struct node *next;};
struct node head ;


void init(int i) {
  head.value=i;

  }

void insert(int a){

    struct node node;
    node.value = a;
    *node.previous = head;
    *head.next = node;
    head = node;

}

void traverse() {
    struct node node;
    node = head;
    while(node.previous != NULL)
    {
        printf("%d", node.value);
        node = *node.previous;

    }
}

int main() {

    int i=0;
    init(5);
    printf("%d", head.value);
    insert(10);
    traverse();
/*    insert(12);
    insert(13);
    insert(14);
    insert(15);
    traverse(); */
}


