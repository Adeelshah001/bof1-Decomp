typedef struct GlueNode {
    struct GlueNode *next;
    s32 niobs;
    void *iobs;
} GlueNode;

typedef struct {
    u8 *p;
    s32 r;
    s32 w;
    s16 flags;
    s16 file;
    u8 *bf_base;
    s32 bf_size;
    s32 lbfsize;
    void *cookie;
    void *read;
    void *write;
    void *seek;
    void *close;
    u8 pad30[0x54 - 0x30];
    void *data;
} NewlibFile;

void *sub_080A0AC8(void *, s32, s32);
void *sub_080A353C(void *, s32);

GlueNode *sub_080A2C88(void *d, s32 n) {
    s32 size = n * sizeof(NewlibFile);
    GlueNode *g = sub_080A353C(d, size + sizeof(GlueNode));
    if (g != NULL) {
        void *p = (void *)(g + 1);
        g->next = NULL;
        g->niobs = n;
        g->iobs = p;
        sub_080A0AC8(p, 0, size);
        return g;
    }
    return NULL;
}

extern u8 D_080A43EC[];
void sub_080A4378(void);
void sub_080A43AC(void);
void sub_080A442C(void);

void sub_080A2C50(NewlibFile *ptr, s16 flags, s16 file, void *data) {
    ptr->p = 0;
    ptr->r = 0;
    ptr->w = 0;
    ptr->flags = flags;
    ptr->file = file;
    ptr->bf_base = 0;
    ptr->lbfsize = 0;
    ptr->cookie = ptr;
    ptr->read = sub_080A4378;
    ptr->write = sub_080A43AC;
    ptr->seek = D_080A43EC + 1;
    ptr->close = sub_080A442C;
    ptr->data = data;
}

void sub_080A2D2C(void *);

void sub_080A2D4C(u8 *s) {
    *(void (**)(void *))(s + 0x3C) = sub_080A2D2C;
    *(s32 *)(s + 0x38) = 1;
    sub_080A2C50((NewlibFile *)(s + 0x1E4), 4, 0, s);
    sub_080A2C50((NewlibFile *)(s + 0x23C), 9, 1, s);
    sub_080A2C50((NewlibFile *)(s + 0x294), 0xA, 2, s);
    *(s32 *)(s + 0x1D8) = 0;
    *(s32 *)(s + 0x1DC) = 3;
    *(void **)(s + 0x1E0) = s + 0x1E4;
}

s32 sub_080A3258(u8 *ptr, s32 (*function)(u8 *)) {
    s32 ret = 0;
    GlueNode *g = (GlueNode *)(ptr + 0x1D8);

    for (; g != NULL; g = g->next) {
        u8 *p = g->iobs;
        s32 n = g->niobs;
        while (--n >= 0) {
            if (*(s16 *)(p + 0xC) != 0) {
                ret |= function(p);
            }
            p += 0x58;
        }
    }
    return ret;
}
