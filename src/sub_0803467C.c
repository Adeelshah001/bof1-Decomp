typedef void (*FuncPtr3467C)(void *, void *);
extern const FuncPtr3467C D_080FA804[];

void sub_08035290(void *, s32);

typedef struct {
    u8 pad00[0x88];
    u8 *unk88;
} Obj3467C;

void sub_0803467C(Obj3467C *arg0) {
    u8 *ptr = arg0->unk88;
    u8 idx = ptr[1];
    D_080FA804[idx](arg0, ptr + 2);
}

void sub_08034840(u8 *arg0) {
    arg0[0xB8] &= 0xFB;
    sub_08035290(arg0, 0x806B);
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x88) = 0;
    arg0[0x4C] = 2;
    arg0[0x50] = 0;
    arg0[0x4D] = 0;
}
