extern const u8 D_081529FC[];

void sub_0808CE24(void *);
void sub_0808CE58(void *);
void sub_0807CB08(void *);
void sub_0808CDCC(void *);
void sub_0808CDD8(void *);
void sub_0808CA48(void *, s32);

void sub_0808CDE4(Entity *arg0)
{
    arg0->unk54 = 0x3C;
    arg0->unk4D = 0x0C;
}

void sub_0808CDF4(Entity *arg0)
{
    if (--arg0->unk54 != 0) {
        sub_0808CE24(arg0);
    } else {
        arg0->unk4D = 6;
        sub_0808CE58(arg0);
    }
}

void sub_0808CE24(void *arg0)
{
    u8 *p = arg0;
    u8 idx = p[0x55]++;
    s32 offset;
    u8 *sub;
    if (idx > 1) {
        p[0x55] = 0;
    }
    offset = idx * 2;
    sub = *(u8 **)(p + 0x74);
    sub[2] = *(const u8 *)(offset + (u32)D_081529FC);
    sub[6] = *(const u8 *)(offset + 1 + (u32)D_081529FC);
}

void sub_0808CD88(u8 *arg0)
{
    u8 state;
    sub_0807CB08(arg0);
    state = arg0[0xE1];
    if (state == 1) {
        sub_0808CDE4((Entity *)arg0);
    } else if (state == 3) {
        sub_0808CDCC(arg0);
    } else if (state == 4) {
        sub_0808CDD8(arg0);
    } else {
        sub_0808CA48(arg0, 0x23);
    }
}
