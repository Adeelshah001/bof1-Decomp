typedef struct Node {
    u8 flags;
    u8 pad01[0x1F];
    struct Node *head;
    u8 pad24[8];
    struct Node *parent;
    struct Node *prev;
    struct Node *next;
} Node;

void sub_0809E4A8(Node *node);

void sub_0809E4C8(void *arg0, Node *arg1)
{
    Node *node = arg1->head;
    while (node != NULL) {
        u8 flags = node->flags;
        if (flags & 0xC7) {
            node->flags = flags | 0x40;
        }
        sub_0809E4A8(node);
        node = node->next;
    }
    arg1->flags = 0;
}
