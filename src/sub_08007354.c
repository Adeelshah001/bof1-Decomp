typedef struct {
    s16 id;
    u16 pad2;
    u32 func;
} Unk080F5F48;

extern const Unk080F5F48 D_080F5F48[];
extern s16 D_030040F8;
extern u16 D_03002484;
extern vu8 D_03004114;
void sub_080A0770(u32);

u8 sub_08007354(void) {
    const Unk080F5F48 *p = D_080F5F48;
    D_030040F8 = 0;
    if ((p[0].id & 0x8000) == 0) {
        do {
            const Unk080F5F48 *entry = (const Unk080F5F48 *)((D_030040F8 * 8) + (u32)p);
            u16 *q = &D_03002484;
            if (entry->id == *q) {
                sub_080A0770(entry->func);
                goto done;
            }
            D_030040F8++;
        } while ((((const Unk080F5F48 *)((D_030040F8 * 8) + (u32)p))->id & 0x8000) == 0);
    }
    *(vu16 *)&D_03004114 = 0;
done:
    return D_03004114;
}
