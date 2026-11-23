typedef struct GlueNode {
    struct GlueNode *next;
    s32 niobs;
    void *iobs;
} GlueNode;

void *sub_080A0AC8(void *, s32, s32);
void *sub_080A353C(void *, s32);

GlueNode *sub_080A2C88(void *d, s32 n) {
    s32 size = n * 0x58;
    GlueNode *g = sub_080A353C(d, size + sizeof(GlueNode));
    if (g == NULL)
        return NULL;
    else {
        void *p = (void *)(g + 1);
        g->next = NULL;
        g->niobs = n;
        g->iobs = p;
        sub_080A0AC8(p, 0, size);
        return g;
    }
}
