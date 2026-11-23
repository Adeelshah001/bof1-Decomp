typedef struct {
    u8 pad00[0x54];
    s32 unk54;
} Battle4F50;

extern Battle4F50 D_03004F50;

typedef struct Entity8A {
    u8 pad00[0x4D];
    u8 unk4D;
    u8 pad4E[0x78 - 0x4E];
    struct Entity8A *unk78;
} Entity8A;

u8 sub_0807CAB8(Entity8A *, s32 *);
void sub_0807C600(Entity8A *, s32);

void sub_0808CF88(Entity8A *arg0)
{
    s32 sp0;
    u8 ret;
    Battle4F50 *p = &D_03004F50;

loop:
    ret = sub_0807CAB8(arg0, &sp0);
    if (ret != 0) {
        arg0->unk78 = (Entity8A *)sp0;
        p->unk54 = sp0;
        if (ret == 1) {
            arg0->unk4D = 0x10;
            return;
        }
        if (ret == 2) {
            goto loop;
        }
        sub_0807C600(arg0, 2);
    }
}
