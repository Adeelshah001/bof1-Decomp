typedef struct Node {
    u8 flags;
    u8 pad01[0x1F];
    struct Node *head;
    u8 pad24[8];
    struct Node *parent;
    struct Node *prev;
    struct Node *next;
} Node;

void sub_0809E48A(void (*fn)(void))
{
    fn();
}

void sub_0809E490(u32 *dst)
{
    s32 i;
    for (i = 0; i < 16; i++) {
        dst[i] = 0;
    }
}

void sub_0809E4A8(Node *node)
{
    Node *parent = node->parent;
    if (parent != NULL) {
        Node *next = node->next;
        Node *prev = node->prev;
        if (prev != NULL) {
            prev->next = next;
        } else {
            parent->head = next;
        }
        if (next != NULL) {
            next->prev = prev;
        }
        node->parent = NULL;
    }
}

void sub_0809E4C8(void *arg0, Node *arg1)
{
    Node *node = arg1->head;
    while (node != NULL) {
        if (node->flags & 0xC7) {
            node->flags |= 0x40;
        }
        sub_0809E4A8(node);
        node = node->next;
    }
    arg1->flags = 0;
}
