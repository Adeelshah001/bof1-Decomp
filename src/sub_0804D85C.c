typedef struct {
    u8 pad00[0x54];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
    u8 pad68[0x80 - 0x68];
    u8 unk80;
} MyEntity;

void sub_0804D944(void *);
void sub_08037FC4(void *, s32);
void *sub_0804D8B8(void *, u8);
void sub_0804D9B8(void *);

void sub_0804D85C(void *arg0) {
    MyEntity *e = arg0;
    sub_0804D944(arg0);
    if (--e->unk54 == 0) {
        if (e->unk80 == 0) {
            e->unk80 = 8;
            e->unk64 = (u32)&sub_0804D9B8;
            e->unk54++;
            sub_08037FC4(e, 4);
        } else {
            e->unk54 = 0x50;
            sub_0804D8B8(arg0, e->unk80 * 2);
            e->unk80--;
        }
    }
}
